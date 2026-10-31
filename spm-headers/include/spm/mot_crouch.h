#pragma once

#include <common.h>

CPP_WRAPPER(spm::mot_crouch)

USING(spm::mario::MarioWork)
void FUN_80119ac0(int param_1);
void FUN_80119d6c(MarioWork *param_1);
void FUN_8011a2fc(int param_1);
int FUN_8011a76c();
void mot_crouch(MarioWork *param_1);
void mot_crouch_post(MarioWork *param_1);

CPP_WRAPPER_END()