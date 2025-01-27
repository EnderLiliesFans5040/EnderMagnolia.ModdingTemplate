#pragma once
#include "CoreMinimal.h"
#include "EZionAchievement.generated.h"

UENUM(BlueprintType)
enum class EZionAchievement : uint8 {
    Invalid,
    SpiritGet_s5000,
    SpiritGet_s5010,
    SpiritGet_s5030,
    SpiritGet_s5040,
    SpiritGet_s5050,
    SpiritGet_s5060,
    SpiritGet_s5070,
    SpiritGet_s5080,
    SpiritGet_s5090,
    SpiritGet_s5110,
    SpiritAptGet_s5200_PileAttack,
    SpiritAptGet_s5200_HighJump,
    SpiritAptGet_s5210_FastTravel,
    SpiritAptGet_s5210_DashCharge,
    SpiritAptGet_s5220_Hook,
    SpiritAptGet_s5220_UnderwaterCharge,
    SpiritAptGet_s5230_WallGrab,
    SpiritAptGet_s5230_WallCharge,
    AptGet_Dive,
    AptGet_SP,
    Skill_Count_All,
    Skill_MaxLevel_All,
    Passive_Count_1,
    Passive_Count_All,
    Passive_Upgrade_1,
    Equipment_Default_Count_1,
    Equipment_Default_Count_All,
    Equipment_Extra_Count_1,
    Equipment_Extra_Count_All,
    Assist_Count_1,
    Assist_Count_All,
    Tip_Count_All,
    Stats_HPUp_All,
    Stats_ShopLevelUp_All,
    Story_Progress_1,
    Story_Progress_2,
    Story_Progress_3,
    Story_Progress_4,
    Ending_A,
    Ending_B,
};

