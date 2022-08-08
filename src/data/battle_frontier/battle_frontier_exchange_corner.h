static const u16 sFrontierExchangeCorner_Decor1[] =
{ 
    DECOR_KISS_POSTER, 
    DECOR_KISS_CUSHION, 
    DECOR_SMOOCHUM_DOLL, 
    DECOR_TOGEPI_DOLL, 
    DECOR_MEOWTH_DOLL, 
    DECOR_CLEFAIRY_DOLL, 
    DECOR_DITTO_DOLL, 
    DECOR_CYNDAQUIL_DOLL, 
    DECOR_CHIKORITA_DOLL, 
    DECOR_TOTODILE_DOLL, 
    0xFFFF 
};

static const u16 sFrontierExchangeCorner_Decor2[] =
{ 
    DECOR_LAPRAS_DOLL, 
    DECOR_SNORLAX_DOLL, 
    DECOR_VENUSAUR_DOLL, 
    DECOR_CHARIZARD_DOLL, 
    DECOR_BLASTOISE_DOLL,
    DECOR_REGIROCK_DOLL,
    DECOR_REGICE_DOLL,
    DECOR_REGISTEEL_DOLL,
    0xFFFF 
};

static const u16 sFrontierExchangeCorner_Vitamins[] =
{ 
    ITEM_PROTEIN, 
    ITEM_CALCIUM, 
    ITEM_IRON, 
    ITEM_ZINC, 
    ITEM_CARBOS, 
    ITEM_HP_UP, 
    0xFFFF 
};

static const u16 sFrontierExchangeCorner_HoldItems[] =
{ 
    ITEM_SCOPE_LENS,
    ITEM_WIDE_LENS,
    ITEM_TOXIC_ORB,
    ITEM_FLAME_ORB,
    ITEM_ADRENALINE_ORB,
    ITEM_RED_CARD,
    ITEM_DESTINY_KNOT,
    ITEM_METRONOME,
    ITEM_SHED_SHELL,
    ITEM_STICKY_BARB,
    ITEM_LAGGING_TAIL,
    ITEM_QUICK_CLAW,
    ITEM_SNOWBALL,
    ITEM_LIGHT_CLAY,
    ITEM_BLACK_SLUDGE,
    ITEM_WISE_GLASSES,
    ITEM_MUSCLE_BAND,
    ITEM_HEAT_ROCK,
    ITEM_DAMP_ROCK,
    ITEM_SMOOTH_ROCK,
    ITEM_ICY_ROCK,
    ITEM_WEAKNESS_POLICY,
    ITEM_BLUNDER_POLICY,
    ITEM_LEFTOVERS, 
    ITEM_AIR_BALLOON, 
    ITEM_CHOICE_BAND,
    ITEM_CHOICE_SPECS,
    ITEM_CHOICE_SCARF,
    ITEM_FOCUS_SASH, 
    ITEM_LIFE_ORB,
    0xFFFF 
};

static const u8 *const sFrontierExchangeCorner_Decor1Descriptions[] =
{
    BattleFrontier_ExchangeServiceCorner_Text_KissPosterDesc,
    BattleFrontier_ExchangeServiceCorner_Text_KissCushionDesc,
    BattleFrontier_ExchangeServiceCorner_Text_SmoochumDollDesc,
    BattleFrontier_ExchangeServiceCorner_Text_MeowthDollDesc,
    BattleFrontier_ExchangeServiceCorner_Text_ClefairyDollDesc,
    BattleFrontier_ExchangeServiceCorner_Text_TogepiDollDesc,
    BattleFrontier_ExchangeServiceCorner_Text_DittoDollDesc,
    BattleFrontier_ExchangeServiceCorner_Text_CyndaquilDollDesc,
    BattleFrontier_ExchangeServiceCorner_Text_ChikoritaDollDesc,
    BattleFrontier_ExchangeServiceCorner_Text_TotodileDollDesc,
    gText_Exit,
};

static const u8 *const sFrontierExchangeCorner_Decor2Descriptions[] = 
{
    BattleFrontier_ExchangeServiceCorner_Text_LargeDollDesc,
    BattleFrontier_ExchangeServiceCorner_Text_LargeDollDesc,
    BattleFrontier_ExchangeServiceCorner_Text_LargeDollDesc,
    BattleFrontier_ExchangeServiceCorner_Text_LargeDollDesc,
    BattleFrontier_ExchangeServiceCorner_Text_LargeDollDesc,
    BattleFrontier_ExchangeServiceCorner_Text_LargeDollDesc,
    BattleFrontier_ExchangeServiceCorner_Text_LargeDollDesc,
    BattleFrontier_ExchangeServiceCorner_Text_LargeDollDesc,
    gText_Exit
};

static const u8 *const sFrontierExchangeCorner_EvoItemsDescriptions[] = 
{
    BattleFrontier_ExchangeServiceCorner_Text_OvalStoneDesc,
    BattleFrontier_ExchangeServiceCorner_Text_ReaperClothDesc,
    BattleFrontier_ExchangeServiceCorner_Text_ProtectorDesc,
    BattleFrontier_ExchangeServiceCorner_Text_ElectirizerDesc,
    BattleFrontier_ExchangeServiceCorner_Text_MagmarizerDesc,
    BattleFrontier_ExchangeServiceCorner_Text_DeepSeaScaleDesc,
    BattleFrontier_ExchangeServiceCorner_Text_DeepSeaToothDesc,
    BattleFrontier_ExchangeServiceCorner_Text_DragonScaleDesc,
    BattleFrontier_ExchangeServiceCorner_Text_UpgradeDesc,
    BattleFrontier_ExchangeServiceCorner_Text_DubiousDiscDesc,
    BattleFrontier_ExchangeServiceCorner_Text_KingsRockDesc,
    BattleFrontier_ExchangeServiceCorner_Text_RazorClawDesc,
    BattleFrontier_ExchangeServiceCorner_Text_RazorFangDesc,
    BattleFrontier_ExchangeServiceCorner_Text_MetalCoatDesc,
    gText_Exit
};

static const u8 *const sFrontierExchangeCorner_VitaminsDescriptions[] = 
{
    BattleFrontier_ExchangeServiceCorner_Text_ProteinDesc,
    BattleFrontier_ExchangeServiceCorner_Text_CalciumDesc,
    BattleFrontier_ExchangeServiceCorner_Text_IronDesc,
    BattleFrontier_ExchangeServiceCorner_Text_ZincDesc,
    BattleFrontier_ExchangeServiceCorner_Text_CarbosDesc,
    BattleFrontier_ExchangeServiceCorner_Text_HPUpDesc,
    gText_Exit
};

static const u8 *const sFrontierExchangeCorner_HoldItemsDescriptions[] = 
{
    BattleFrontier_ExchangeServiceCorner_Text_ScopeLensDesc,
    BattleFrontier_ExchangeServiceCorner_Text_WideLensDesc,
    BattleFrontier_ExchangeServiceCorner_Text_ToxicOrbDesc,
    BattleFrontier_ExchangeServiceCorner_Text_FlameOrbDesc,
    BattleFrontier_ExchangeServiceCorner_Text_AdrenalineOrbDesc,
    BattleFrontier_ExchangeServiceCorner_Text_RedCardDesc,
    BattleFrontier_ExchangeServiceCorner_Text_DestinyKnotDesc,
    BattleFrontier_ExchangeServiceCorner_Text_MetronomeDesc,
    BattleFrontier_ExchangeServiceCorner_Text_ShedShellDesc,
    BattleFrontier_ExchangeServiceCorner_Text_StickyBarbDesc,
    BattleFrontier_ExchangeServiceCorner_Text_LaggingTailDesc,
    BattleFrontier_ExchangeServiceCorner_Text_QuickClawDesc,
    BattleFrontier_ExchangeServiceCorner_Text_SnowballDesc,
    BattleFrontier_ExchangeServiceCorner_Text_LightClayDesc,
    BattleFrontier_ExchangeServiceCorner_Text_BlackSludgeDesc,
    BattleFrontier_ExchangeServiceCorner_Text_WiseGlassesDesc,
    BattleFrontier_ExchangeServiceCorner_Text_MuscleBandDesc,
    BattleFrontier_ExchangeServiceCorner_Text_HeatRockDesc,
    BattleFrontier_ExchangeServiceCorner_Text_DampRockDesc,
    BattleFrontier_ExchangeServiceCorner_Text_SmoothRockDesc,
    BattleFrontier_ExchangeServiceCorner_Text_IcyRockDesc,
    BattleFrontier_ExchangeServiceCorner_Text_WeaknessPolicyDesc,
    BattleFrontier_ExchangeServiceCorner_Text_BlunderPolicyDesc,
    BattleFrontier_ExchangeServiceCorner_Text_LeftoversDesc,
    BattleFrontier_ExchangeServiceCorner_Text_AirBalloonDesc,
    BattleFrontier_ExchangeServiceCorner_Text_ChoiceBandDesc,
    BattleFrontier_ExchangeServiceCorner_Text_ChoiceSpecsDesc,
    BattleFrontier_ExchangeServiceCorner_Text_ChoiceScarfDesc,
    BattleFrontier_ExchangeServiceCorner_Text_FocusSashDesc,
    BattleFrontier_ExchangeServiceCorner_Text_LifeOrbDesc,
    gText_Exit
};
