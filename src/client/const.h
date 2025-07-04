/*
 * Copyright (c) 2010-2017 OTClient <https://github.com/edubart/otclient>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef CLIENT_CONST_H
#define CLIENT_CONST_H

#include <cstdint>

namespace Otc
{
    enum : int {
        MAX_ELEVATION = 24,

        SEA_FLOOR = 7,
        MAX_Z = 15,
        UNDERGROUND_FLOOR = SEA_FLOOR+1,
        AWARE_UNDEGROUND_FLOOR_RANGE = 2,

        INVISIBLE_TICKS_PER_FRAME = 500,
        INVISIBLE_TICKS_PER_FRAME_FAST = 100,
        ITEM_TICKS_PER_FRAME = 500,
        ITEM_TICKS_PER_FRAME_FAST = 100,
        ANIMATED_TEXT_DURATION = 1000,
        STATIC_DURATION_PER_CHARACTER = 60,
        MIN_STATIC_TEXT_DURATION = 3000,
        MAX_STATIC_TEXT_WIDTH = 200,
        MAX_AUTOWALK_STEPS_RETRY = 10,
        MAX_AUTOWALK_DIST = 127
    };

    enum DepthConst {
        MAX_DEPTH = 16384 - 2048
    };

    enum DrawFlags {
        DrawGround = 1,
        DrawGroundBorders = 2,
        DrawOnBottom = 4,
        DrawOnTop = 8,
        DrawItems = 16,
        DrawCreatures = 32,
        DrawEffects = 64,
        DrawMissiles = 128,
        DrawCreaturesInformation = 256,
        DrawStaticTexts = 512,
        DrawAnimatedTexts = 1024,
        DrawAnimations = 2048,
        DrawBars = 4096,
        DrawNames = 8192,
        DrawLights = 16384,
        DrawManaBar = 32768,
        DontDrawLocalPlayer = 65536,
        DrawIcons = 131072,
        DrawWalls = DrawOnBottom | DrawOnTop,
        DrawEverything = DrawGround | DrawGroundBorders | DrawWalls | DrawItems |
                         DrawCreatures | DrawEffects | DrawMissiles | DrawCreaturesInformation |
                         DrawStaticTexts | DrawAnimatedTexts | DrawAnimations | DrawBars | DrawNames |
                         DrawLights | DrawManaBar | DrawIcons
    };

    enum DatOpts {
        DatGround = 0,
        DatGroundClip,
        DatOnBottom,
        DatOnTop,
        DatContainer,
        DatStackable,
        DatForceUse,
        DatMultiUse,
        DatWritable,
        DatWritableOnce,
        DatFluidContainer,
        DatSplash,
        DatBlockWalk,
        DatNotMoveable,
        DatBlockProjectile,
        DatBlockPathFind,
        DatPickupable,
        DatHangable,
        DatHookSouth,
        DatHookEast,
        DatRotable,
        DatLight,
        DatDontHide,
        DatTranslucent,
        DatDisplacement,
        DatElevation,
        DatLyingCorpse,
        DatAnimateAlways,
        DatMinimapColor,
        DatLensHelp,
        DatFullGround,
        DatIgnoreLook,
        DatCloth,
        DatAnimation, // lastest tibia
        DatLastOpt = 255
    };

    enum InventorySlot {
        InventorySlotHead = 1,
        InventorySlotNecklace,
        InventorySlotBackpack,
        InventorySlotArmor,
        InventorySlotRight,
        InventorySlotLeft,
        InventorySlotLegs,
        InventorySlotFeet,
        InventorySlotRing,
        InventorySlotAmmo,
        InventorySlotPurse,
        InventorySlotExt1,
        InventorySlotExt2,
        InventorySlotExt3,
        InventorySlotExt4,
        LastInventorySlot
    };

    enum Statistic {
        Health = 0,
        MaxHealth,
        FreeCapacity,
        Experience,
        Level,
        LevelPercent,
        Mana,
        MaxMana,
        MagicLevel,
        MagicLevelPercent,
        Soul,
        Stamina,
        LastStatistic
    };

    enum Skill {
        Fist = 0,
        Club,
        Sword,
        Axe,
        Distance,
        Shielding,
        Fishing,
        CriticalChance,
        CriticalDamage,
        LifeLeechChance,
        LifeLeechAmount,
        ManaLeechChance,
        ManaLeechAmount,
        Fatal,
        Dodge,
        Momentum,
        LastSkill
    };

    enum Direction {
        North = 0,
        East,
        South,
        West,
        NorthEast,
        SouthEast,
        SouthWest,
        NorthWest,
        InvalidDirection
    };

    enum FluidsColor {
        FluidTransparent = 0,
        FluidBlue,
        FluidRed,
        FluidBrown,
        FluidGreen,
        FluidYellow,
        FluidWhite,
        FluidPurple
    };

    enum FluidsType {
        FluidNone = 0,
        FluidWater,
        FluidMana,
        FluidBeer,
        FluidOil,
        FluidBlood,
        FluidSlime,
        FluidMud,
        FluidLemonade,
        FluidMilk,
        FluidWine,
        FluidHealth,
        FluidUrine,
        FluidRum,
        FluidFruidJuice,
        FluidCoconutMilk,
        FluidTea,
        FluidMead
    };

    enum FightModes {
        FightOffensive = 1,
        FightBalanced = 2,
        FightDefensive = 3
    };

    enum ChaseModes {
        DontChase = 0,
        ChaseOpponent = 1
    };

    enum PVPModes {
        WhiteDove = 0,
        WhiteHand = 1,
        YellowHand = 2,
        RedFist = 3
    };

    enum PlayerSkulls {
        SkullNone = 0,
        SkullYellow,
        SkullGreen,
        SkullWhite,
        SkullRed,
        SkullBlack,
        SkullOrange
    };

    enum PlayerShields {
        ShieldNone = 0,
        ShieldWhiteYellow, // 1 party leader
        ShieldWhiteBlue, // 2 party member
        ShieldBlue, // 3 party member sexp off
        ShieldYellow, // 4 party leader sexp off
        ShieldBlueSharedExp, // 5 party member sexp on
        ShieldYellowSharedExp, // 6 // party leader sexp on
        ShieldBlueNoSharedExpBlink, // 7 party member sexp inactive guilty
        ShieldYellowNoSharedExpBlink, // 8 // party leader sexp inactive guilty
        ShieldBlueNoSharedExp, // 9 party member sexp inactive innocent
        ShieldYellowNoSharedExp, // 10 party leader sexp inactive innocent
        ShieldGray // 11 member of another party
    };

    enum PlayerEmblems {
        EmblemNone = 0,
        EmblemGreen,
        EmblemRed,
        EmblemBlue,
        EmblemMember,
        EmblemOther
    };

    enum CreatureIcons {
        NpcIconNone = 0,
        NpcIconChat,
        NpcIconTrade,
        NpcIconQuest,
        NpcIconTradeQuest
    };

    enum PlayerStates {
        IconNone = 0,
        IconPoison = 1,
        IconBurn = 2,
        IconEnergy = 4,
        IconDrunk = 8,
        IconManaShield = 16,
        IconParalyze = 32,
        IconHaste = 64,
        IconSwords = 128,
        IconDrowning = 256,
        IconFreezing = 512,
        IconDazzled = 1024,
        IconCursed = 2048,
        IconPartyBuff = 4096,
        IconPzBlock = 8192,
        IconPz = 16384,
        IconBleeding = 32768,
        IconHungry = 65536
    };

    enum MessageMode {
        MessageNone                    = 0,
        MessageSay                     = 1,
        MessageWhisper                 = 2,
        MessageYell                    = 3,
        MessagePrivateFrom             = 4,
        MessagePrivateTo               = 5,
        MessageChannelManagement       = 6,
        MessageChannel                 = 7,
        MessageChannelHighlight        = 8,
        MessageSpell                   = 9,
        MessageNpcFrom                 = 10,
        MessageNpcTo                   = 11,
        MessageGamemasterBroadcast     = 12,
        MessageGamemasterChannel       = 13,
        MessageGamemasterPrivateFrom   = 14,
        MessageGamemasterPrivateTo     = 15,
        MessageLogin                   = 16,
        MessageWarning                 = 17,
        MessageGame                    = 18,
        MessageFailure                 = 19,
        MessageLook                    = 20,
        MessageDamageDealed            = 21,
        MessageDamageReceived          = 22,
        MessageHeal                    = 23,
        MessageExp                     = 24,
        MessageDamageOthers            = 25,
        MessageHealOthers              = 26,
        MessageExpOthers               = 27,
        MessageStatus                  = 28,
        MessageLoot                    = 29,
        MessageTradeNpc                = 30,
        MessageGuild                   = 31,
        MessagePartyManagement         = 32,
        MessageParty                   = 33,
        MessageBarkLow                 = 34,
        MessageBarkLoud                = 35,
        MessageReport                  = 36,
        MessageHotkeyUse               = 37,
        MessageTutorialHint            = 38,
        MessageThankyou                = 39,
        MessageMarket                  = 40,
        MessageMana                    = 41,
        MessageBeyondLast              = 42,

        // deprecated
        MessageMonsterYell             = 43,
        MessageMonsterSay              = 44,
        MessageRed                     = 45,
        MessageBlue                    = 46,
        MessageRVRChannel              = 47,
        MessageRVRAnswer               = 48,
        MessageRVRContinue             = 49,
        MessageGameHighlight           = 50,
        MessageNpcFromStartBlock       = 51,
        LastMessage                    = 52,
        MessageInvalid                 = 255
    };

    enum GameFeature {
        GameProtocolChecksum = 1,
        GameAccountNames = 2,
        GameChallengeOnLogin = 3,
        GamePenalityOnDeath = 4,
        GameNameOnNpcTrade = 5,
        GameDoubleFreeCapacity = 6,
        GameDoubleExperience = 7,
        GameTotalCapacity = 8,
        GameSkillsBase = 9,
        GamePlayerRegenerationTime = 10,
        GameChannelPlayerList = 11,
        GamePlayerMounts = 12,
        GameEnvironmentEffect = 13,
        GameCreatureEmblems = 14,
        GameItemAnimationPhase = 15,
        GameMagicEffectU16 = 16,
        GamePlayerMarket = 17,
        GameSpritesU32 = 18,
        GameTileAddThingWithStackpos = 19,
        GameOfflineTrainingTime = 20,
        GamePurseSlot = 21,
        GameFormatCreatureName = 22,
        GameSpellList = 23,
        GameClientPing = 24,
        GameExtendedClientPing = 25,
        GameDoubleHealth = 28,
        GameDoubleSkills = 29,
        GameChangeMapAwareRange = 30,
        GameMapMovePosition = 31,
        GameAttackSeq = 32,
        GameBlueNpcNameColor = 33,
        GameDiagonalAnimatedText = 34,
        GameLoginPending = 35,
        GameNewSpeedLaw = 36,
        GameForceFirstAutoWalkStep = 37,
        GameMinimapRemove = 38,
        GameDoubleShopSellAmount = 39,
        GameContainerPagination = 40,
        GameThingMarks = 41,
        GameLooktypeU16 = 42,
        GamePlayerStamina = 43,
        GamePlayerAddons = 44,
        GameMessageStatements = 45,
        GameMessageLevel = 46,
        GameNewFluids = 47,
        GamePlayerStateU16 = 48,
        GameNewOutfitProtocol = 49,
        GamePVPMode = 50,
        GameWritableDate = 51,
        GameAdditionalVipInfo = 52,
        GameBaseSkillU16 = 53,
        GameCreatureIcons = 54,
        GameHideNpcNames = 55,
        GameSpritesAlphaChannel = 56,
        GamePremiumExpiration = 57,
        GameBrowseField = 58,
        GameEnhancedAnimations = 59,
        GameOGLInformation = 60,
        GameMessageSizeCheck = 61,
        GamePreviewState = 62,
        GameLoginPacketEncryption = 63,
        GameClientVersion = 64,
        GameContentRevision = 65,
        GameExperienceBonus = 66,
        GameAuthenticator = 67,
        GameUnjustifiedPoints = 68,
        GameSessionKey = 69,
        GameDeathType = 70,
        GameIdleAnimations = 71,
        GameKeepUnawareTiles = 72,
        GameIngameStore = 73,
        GameIngameStoreHighlights = 74,
        GameIngameStoreServiceType = 75,
        GameAdditionalSkills = 76,
        GameDistanceEffectU16 = 77,
        GamePrey = 78,
        GameDoubleMagicLevel = 79,

        GameExtendedOpcode = 80,
        GameMinimapLimitedToSingleFloor = 81,
        GameSendWorldName = 82,

        GameDoubleLevel = 83,
        GameDoubleSoul = 84,
        GameDoublePlayerGoodsMoney = 85,
        GameCreatureWalkthrough = 86,
        GameDoubleTradeMoney = 87,
        GameSequencedPackets = 88,
        GameTibia12Protocol = 89,

        // 90-99 otclientv8 features
        GameNewWalking = 90,
        GameSlowerManualWalking = 91,

        GameItemTooltip = 93,

        GameBot = 95,
        GameBiggerMapCache = 96,
        GameForceLight = 97,
        GameNoDebug = 98,
        GameBotProtection = 99,

        // Custom features for customer
        GameCreatureDirectionPassable = 100,
        GameFasterAnimations = 101,
        GameCenteredOutfits = 102,
        GameSendIdentifiers = 103,
        GameWingsAndAura = 104,
        GamePlayerStateU32 = 105,
        GameOutfitShaders = 106,
        GameForceAllowItemHotkeys = 107,
        GameCountU16 = 108,
        GameDrawAuraOnTop = 109,

        // advanced features
        GamePacketSizeU32 = 110,
        GamePacketCompression = 111,

        // OTCv8-dev features
        GameOldInformationBar = 112,
        GameHealthInfoBackground = 113, 
        GameWingOffset = 114,
        GameAuraFrontAndBack = 115,

        GameMapDrawGroundFirst = 116,
        GameMapIgnoreCorpseCorrection = 117,
        GameDontCacheFiles = 118,
        GameBigAurasCenter = 119,
        GameNewUpdateWalk = 120,
        GameNewCreatureStacking = 121,
        GameCreaturesMana = 122,
        GameQuickLootFlags = 123,
        GameDontMergeAnimatedText = 124,
        GameMissionId = 125,
        GameItemCustomAttributes = 126,
        GameAnimatedTextCustomFont = 127,
        GameDrawFloorShadow = 128,
        GameDisplayItemDuration = 129,

        LastGameFeature = 130
    };

    enum MagicEffectsType_t : uint8_t {
        MAGIC_EFFECTS_END_LOOP = 0, // ends the magic effect loop
        MAGIC_EFFECTS_DELTA = 1, // needs uint8_t delta after type to adjust position
        MAGIC_EFFECTS_DELAY = 2, // needs uint16_t delay after type to delay in miliseconds effect display
        MAGIC_EFFECTS_CREATE_EFFECT = 3, // needs uint8_t effectid after type
        MAGIC_EFFECTS_CREATE_DISTANCEEFFECT = 4, // needs uint8_t and deltaX(int8_t), deltaY(int8_t) after type
        MAGIC_EFFECTS_CREATE_DISTANCEEFFECT_REVERSED = 5, // needs uint8_t and deltaX(int8_t), deltaY(int8_t) after type
    };

    enum PathFindResult {
        PathFindResultOk = 0,
        PathFindResultSamePosition,
        PathFindResultImpossible,
        PathFindResultTooFar,
        PathFindResultNoWay
    };

    enum PathFindFlags {
        PathFindAllowNotSeenTiles = 1,
        PathFindAllowCreatures = 2,
        PathFindAllowNonPathable = 4,
        PathFindAllowNonWalkable = 8,
        PathFindIgnoreCreatures = 16
    };

    enum AutomapFlags {
        MapMarkTick = 0,
        MapMarkQuestion,
        MapMarkExclamation,
        MapMarkStar,
        MapMarkCross,
        MapMarkTemple,
        MapMarkKiss,
        MapMarkShovel,
        MapMarkSword,
        MapMarkFlag,
        MapMarkLock,
        MapMarkBag,
        MapMarkSkull,
        MapMarkDollar,
        MapMarkRedNorth,
        MapMarkRedSouth,
        MapMarkRedEast,
        MapMarkRedWest,
        MapMarkGreenNorth,
        MapMarkGreenSouth
    };

    enum VipState {
        VipStateOffline = 0,
        VipStateOnline = 1,
        VipStatePending = 2
    };

    enum SpeedFormula {
        SpeedFormulaA = 0,
        SpeedFormulaB,
        SpeedFormulaC,
        LastSpeedFormula
    };

    enum Blessings {
        BlessingNone = 0,
        BlessingAdventurer = 1,
        BlessingSpiritualShielding = 1 << 1,
        BlessingEmbraceOfTibia = 1 << 2,
        BlessingFireOfSuns = 1 << 3,
        BlessingWisdomOfSolitude = 1 << 4,
        BlessingSparkOfPhoenix = 1 << 5
    };

    enum DeathType {
        DeathRegular = 0,
        DeathBlessed = 1
    };

    enum StoreProductTypes {
        ProductTypeOther = 0,
        ProductTypeNameChange = 1
    };

    enum StoreErrorTypes {
        StoreNoError = -1,
        StorePurchaseError = 0,
        StoreNetworkError = 1,
        StoreHistoryError = 2,
        StoreTransferError = 3,
        StoreInformation = 4
    };

    enum StoreStates {
        StateNone = 0,
        StateNew = 1,
        StateSale = 2,
        StateTimed = 3
    };

    enum PreySlotNum_t : uint8_t {
        PREY_SLOTNUM_FIRST = 0,
        PREY_SLOTNUM_SECOND = 1,
        PREY_SLOTNUM_THIRD = 2,
        PREY_SLOTNUM_LAST = PREY_SLOTNUM_THIRD
    };
    enum PreyState_t : uint8_t {
        PREY_STATE_LOCKED = 0,
        PREY_STATE_INACTIVE = 1,
        PREY_STATE_ACTIVE = 2,
        PREY_STATE_SELECTION = 3,
        PREY_STATE_SELECTION_CHANGE_MONSTER = 4,
        PREY_STATE_SELECTION_FROMALL = 5,
        PREY_STATE_CHANGE_FROMALL = 6,
    };
    enum PreyMessageDialog_t : uint8_t {
        //PREY_MESSAGEDIALOG_IMBUEMENT_SUCCESS = 0,
        //PREY_MESSAGEDIALOG_IMBUEMENT_ERROR = 1,
        //PREY_MESSAGEDIALOG_IMBUEMENT_ROLL_FAILED = 2,
        //PREY_MESSAGEDIALOG_IMBUEMENT_STATION_NOT_FOUND = 3,
        //PREY_MESSAGEDIALOG_IMBUEMENT_CHARM_SUCCESS = 10,
        //PREY_MESSAGEDIALOG_IMBUEMENT_CHARM_ERROR = 11,
        PREY_MESSAGEDIALOG_PREY_MESSAGE = 20,
        PREY_MESSAGEDIALOG_PREY_ERROR = 21,
    };
    enum PreyResourceType_t : uint8_t {
        PREY_RESOURCETYPE_BANK_GOLD = 0,
        PREY_RESOURCETYPE_INVENTORY_GOLD = 1,
        PREY_RESOURCETYPE_PREY_BONUS_REROLLS = 10
    };
    enum PreyBonusType_t : uint8_t {
        PREY_BONUS_DAMAGE_BOOST = 0,
        PREY_BONUS_DAMAGE_REDUCTION = 1,
        PREY_BONUS_XP_BONUS = 2,
        PREY_BONUS_IMPROVED_LOOT = 3,
        PREY_BONUS_NONE = 4, // internal usage but still added to client;
        PREY_BONUS_FIRST = PREY_BONUS_DAMAGE_BOOST,
        PREY_BONUS_LAST = PREY_BONUS_IMPROVED_LOOT,
    };
    enum PreyAction_t : uint8_t {
        PREY_ACTION_LISTREROLL = 0,
        PREY_ACTION_BONUSREROLL = 1,
        PREY_ACTION_MONSTERSELECTION = 2,
        PREY_ACTION_REQUEST_ALL_MONSTERS = 3,
        PREY_ACTION_CHANGE_FROM_ALL = 4,
        PREY_ACTION_LOCK_PREY = 5,

    };
    enum PreyConfigState {
        PREY_CONFIG_STATE_FREE,
        PREY_CONFIG_STATE_PREMIUM,
        PREY_CONFIG_STATE_TIBIACOINS
    };
    enum PreyUnlockState_t : uint8_t {
        PREY_UNLOCK_STORE_AND_PREMIUM = 0,
        PREY_UNLOCK_STORE = 1,
        PREY_UNLOCK_NONE = 2,
    };
}

#endif
