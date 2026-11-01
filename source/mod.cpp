#include "mod.h"
#include "patch.h"


#include <spm/fontmgr.h>
#include <spm/seqdrv.h>
#include <spm/seqdef.h>
#include <wii/os/OSError.h>
#include <wii/gx.h>
#include <spm/mario.h>
#include <spm/mot_jump.h>
#include <spm/mot_crouch.h>
#include <spm/mot_ladder.h>
#include <spm/mot_swim.h>
#include <spm/mot_jabara.h>
#include <spm/mario_pouch.h>
#include <spm/mario_status.h>
#include <spm/mot_damage.h>
#include <spm/eff/eff_damage_star.h>

namespace mod {
    using namespace spm;
/*
    Title Screen Custom Text
    Prints "Jump Torture" at the top of the title screen
*/

static seqdef::SeqFunc *seq_titleMainReal;
static void seq_titleMainOverride(seqdrv::SeqWork *wp)
{
    wii::gx::GXColor green = {0, 255, 0, 255};
    f32 scale = 0.8f;
    const char * msg = "Jump Torture";
    fontmgr::FontDrawStart();
    fontmgr::FontDrawEdge();
    fontmgr::FontDrawColor(&green);
    fontmgr::FontDrawScale(scale);
    fontmgr::FontDrawNoiseOff();
    fontmgr::FontDrawRainbowColorOff();
    f32 x = -((fontmgr::FontGetMessageWidth(msg) * scale) / 2);
    fontmgr::FontDrawString(x, 200.0f, msg);
    seq_titleMainReal(wp);
}
static void titleScreenCustomTextPatch()
{
    seq_titleMainReal = seqdef::seq_data[seqdrv::SEQ_TITLE].main;
    seqdef::seq_data[seqdrv::SEQ_TITLE].main = &seq_titleMainOverride;
}

/*
    General mod functions
*/


//Damage mario when jumping function.
void JumpDamage()
{
    mario::MarioWork * mwID = mario::marioGetPtr();

    //code to prevent Carrie's mount animations from breaking
    if (((mwID->motionId) == MOT_CARRIE_DISMOUNT) || ((mwID->motionId) == MOT_CARRIE_MOUNT))
    {
        mario::marioPlayDamageSfx();

        //If mario has a half damage effect, take no damage and have damage star display 0
        for (mario::MarioStatus * status = mwID->firstStatus; status != nullptr; status = status->next)
        {
            if (status->type == STATUS_HALF_DAMAGE)
            {
                eff_damage_star::effDamageStarEntry(mwID->position.x,mwID->position.y,mwID->position.z,0,0);
                return;
            }
        }

        //otherwise decrease mario's hp by 1 and display 1 on the damage star
        eff_damage_star::effDamageStarEntry(mwID->position.x,mwID->position.y,mwID->position.z,0,1);
        mario_pouch::pouchSetHp(mario_pouch::pouchGetHp() - 1);

        //If player's hp reaches 0, play death animation
        if (mario_pouch::pouchGetHp() <= 0)
        {
            mot_damage::onHpEquals0(0);
        }
    }
    //If carrie animation is not playing, just use normal damage function
    else
    {
        mario::marioTakeDamage(NULL,MOT_DAMAGE,1);
    }
    return;
}

void main()
{
    wii::os::OSReport("SPM Rel Loader: the mod has ran!\n");
    titleScreenCustomTextPatch();

    writeBranch(mot_jump::motJumpPlaySfx,268,JumpDamage); // Most jumps
    writeBranchLink(mot_jump::mot_spring,412,JumpDamage); // Jumping off of a spring
    writeBranchLink(mot_crouch::FUN_80119d6c,828,JumpDamage); // crouching
    writeBranchLink(mot_crouch::FUN_80119d6c,504,JumpDamage); // water crouching?
    writeBranchLink(mot_swim::mot_swim,1128,JumpDamage); // swimming
    writeBranchLink(mot_ladder::FUN_8011afd0,276,JumpDamage); // falling off 2d ladder
    writeBranchLink(mot_ladder::FUN_8011afd0,524,JumpDamage); // pressing 2 while on 2d ladder
    writeBranchLink(mot_ladder::FUN_8011b490,428,JumpDamage); // falling off 3d ladder
    writeBranchLink(mot_ladder::FUN_8011b490,152,JumpDamage); // pressing 2 while on 3d ladder
    writeBranchLink(mot_jabara::mot_jabara,1656,JumpDamage); // luigi super jump

//other functions
}

}
