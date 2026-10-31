#pragma once

#include <common.h>

CPP_WRAPPER(spm::mot_jump)

USING(spm::mario::MarioWork)

UNKNOWN_FUNCTION(FUN_80174880)
void marioPreJump();
void mot_fall(MarioWork *param_1);
void mot_fall_post(MarioWork *param_1);
void mot_hit_sui(MarioWork *param_1);
void mot_hit_sui_post(MarioWork *param_1);
void mot_jump(MarioWork *param_1);
void mot_jump_post(MarioWork *param_1);
void mot_prefall_midair(MarioWork *param_1);
void mot_prefall_post(MarioWork *param_1);
void mot_spring(MarioWork *param_1);
void mot_spring_post(MarioWork *param_1);
void mot_upstairs(MarioWork *mw);
void mot_upstairs_post(MarioWork *param_1);
void motJumpNpcPlaySfx();
void motJumpPlaySfx();

CPP_WRAPPER_END()