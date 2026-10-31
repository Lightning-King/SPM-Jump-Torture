#pragma once

#include <common.h>

CPP_WRAPPER(spm::mot_jabara)

USING(spm::mario::MarioWork)
UNKNOWN_FUNCTION(FUN_8017e10)
void FUN_80171eac(int param_1);
void FUN_80173888();
UNKNOWN_FUNCTION(jabaraNoHitChk)
void mot_jabara(MarioWork *param_1);
void mot_jabara_post(MarioWork *param_1);

CPP_WRAPPER_END()