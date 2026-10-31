#pragma once

#include <common.h>

CPP_WRAPPER(spm::mot_swim)

USING(spm::mario::MarioWork)
//USING(spm::mario::MarioSwdp)
//USING(spm::nw4r::Vec3)
double FUN_80112af8();
double FUN_80112b08();
void FUN_80112b18();
void FUN_80113524();
void FUN_8011372c();
s32 FUN_80113cb0();
double FUN_80113cfc();
void FUN_80113da8();
void FUN_80113ea4();
//MarioSwdp * FUN_80113f34(MarioSwdp *param_1);
UNKNOWN_FUNCTION(FUN_80113f34)
//void FUN_8011400c(MarioSwdp *param_1,s32 param_2);
UNKNOWN_FUNCTION(FUN_8011400c)
//void FUN_801140ec(SwdpDef *param_1, byte param_2,s32 param_3,s32 param_4);
UNKNOWN_FUNCTION(FUN_801140ec)
UNKNOWN_FUNCTION(FUN_801143c8)
//s32 FUN_80114598(SwdpDef *param_1,s32 param_2,u32 param_3,undefined4 param_4,undefined4 param_5);
UNKNOWN_FUNCTION(FUN_80114598)
void FUN_801147c0(u32 *param_1);
void FUN_80114968(s32 param_1);
void FUN_80114af0();
//void FUN_80114b24(double param_1,u32 *param_2,Vec3 *param_3);
UNKNOWN_FUNCTION(FUN_80114b24)
void FUN_80114fa4();
UNKNOWN_FUNCTION(FUN_8011574c)
UNKNOWN_FUNCTION(FUN_80115838)
UNKNOWN_FUNCTION(FUN_801159a8)
void FUN_801159f4();
void FUN_80115a48(u32 *param_1);
UNKNOWN_FUNCTION(FUN_80115a70)
UNKNOWN_FUNCTION(FUN_80115b04)
UNKNOWN_FUNCTION(FUN_80115b98)
UNKNOWN_FUNCTION(FUN_80115c44)
UNKNOWN_FUNCTION(FUN_80115d84)
void FUN_80115e20();
u32 FUN_80115f00();
void FUN_80115fd4();
UNKNOWN_FUNCTION(FUN_801161b0)
u32 FUN_80116224();
void FUN_801162a8();
void FUN_801163c8();
void FUN_80116844();
void FUN_8011730c();
void FUN_801173b4();
void FUN_801174ec();
u32 FUN_801177e4();
UNKNOWN_FUNCTION(FUN_80117840)
s32 FUN_80117ae8();
void FUN_80117b34();
UNKNOWN_FUNCTION(FUN_80117c78)
UNKNOWN_FUNCTION(FUN_80117d18)
void marioDamageSpace(float *param_1);
void marioDamageSwim(float *param_1);
UNKNOWN_FUNCTION(marioGetSwdpPtr)
void mot_space_swim(MarioWork *param_1);
void mot_space_swim_post(MarioWork *param_1);
void mot_swim(MarioWork *param_1);
void mot_swim_post(MarioWork *param_1);
void motSwimInitSwdp();

CPP_WRAPPER_END()