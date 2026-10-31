#pragma once

#include <common.h>

CPP_WRAPPER(spm::mot_hip)

USING(spm::mario::MarioWork)

UNKNOWN_FUNCTION(fairyThudleyUseFunc)
u32 FUN_801707a8();
UNKNOWN_FUNCTION(FUN_80171b3c)
u32 FUN_80171dc4();
void mot_hip(MarioWork *param_1);
void mot_hip_post(MarioWork *param_1);

CPP_WRAPPER_END()