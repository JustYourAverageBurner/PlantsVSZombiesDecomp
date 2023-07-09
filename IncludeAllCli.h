#pragma once
using namespace System;
/*
namespace Lawn
{
    public enum class ParticleSystemID {};
    public enum class ReanimationID {};
    public enum class ZombieID {};
    public enum class SeedType
    {
        SEED_PEASHOOTER = 0,                    // Íã¶¹ÉäÊÖ
        SEED_SUNFLOWER = 1,                     // ÏòÈÕ¿û
        SEED_CHERRYBOMB = 2,                    // Ó£ÌÒÕ¨µ¯
        SEED_WALLNUT = 3,                       // ¼á¹û
        SEED_POTATOMINE = 4,                    // ÍÁ¶¹µØÀ×
        SEED_SNOWPEA = 5,                       // º®±ùÉäÊÖ
        SEED_CHOMPER = 6,                       // ´ó×ì»¨
        SEED_REPEATER = 7,                      // Ë«·¢ÉäÊÖ
        SEED_PUFFSHROOM = 8,                    // Ð¡Åç¹½
        SEED_SUNSHROOM = 9,                     // Ñô¹â¹½
        SEED_FUMESHROOM = 10,                   // ´óÅç¹½
        SEED_GRAVEBUSTER = 11,                  // Ä¹±®ÍÌÊÉÕß
        SEED_HYPNOSHROOM = 12,                  // ÷È»ó¹½
        SEED_SCAREDYSHROOM = 13,                // µ¨Ð¡¹½
        SEED_ICESHROOM = 14,                    // º®±ù¹½
        SEED_DOOMSHROOM = 15,                   // »ÙÃð¹½
        SEED_LILYPAD = 16,                      // Ë¯Á«
        SEED_SQUASH = 17,                       // ÎÑ¹Ï
        SEED_THREEPEATER = 18,                  // ÈýÏßÉäÊÖ
        SEED_TANGLEKELP = 19,                   // ²øÈÆº£²Ý
        SEED_JALAPENO = 20,                     // »ð±¬À±½·
        SEED_SPIKEWEED = 21,                    // µØ´Ì
        SEED_TORCHWOOD = 22,                    // »ð¾æÊ÷×®
        SEED_TALLNUT = 23,
        SEED_SEASHROOM = 24,
        SEED_PLANTERN = 25,
        SEED_CACTUS = 26,
        SEED_BLOVER = 27,
        SEED_SPLITPEA = 28,
        SEED_STARFRUIT = 29,
        SEED_PUMPKINSHELL = 30,
        SEED_MAGNETSHROOM = 31,
        SEED_CABBAGEPULT = 32,
        SEED_FLOWERPOT = 33,
        SEED_KERNELPULT = 34,
        SEED_INSTANT_COFFEE = 35,
        SEED_GARLIC = 36,
        SEED_UMBRELLA = 37,
        SEED_MARIGOLD = 38,
        SEED_MELONPULT = 39,
        SEED_GATLINGPEA = 40,
        SEED_TWINSUNFLOWER = 41,
        SEED_GLOOMSHROOM = 42,
        SEED_CATTAIL = 43,
        SEED_WINTERMELON = 44,
        SEED_GOLD_MAGNET = 45,
        SEED_SPIKEROCK = 46,
        SEED_COBCANNON = 47,
        SEED_IMITATER = 48,
        SEED_EXPLODE_O_NUT,
        SEED_GIANT_WALLNUT,
        SEED_SPROUT,
        SEED_LEFTPEATER,
        SEED_BEGHOULED_BUTTON_SHUFFLE = -2,
        SEED_BEGHOULED_BUTTON_CRATER = -3,
        SEED_SLOT_MACHINE_SUN = -4,
        SEED_SLOT_MACHINE_DIAMOND = -5,
        SEED_ZOMBIQUARIUM_SNORKLE = -6,
        SEED_ZOMBIQUARIUM_TROPHY = -7,
        SEED_ZOMBIE_NORMAL = -8,
        SEED_ZOMBIE_TRAFFIC_CONE = -9,
        SEED_ZOMBIE_POLEVAULTER = -10,
        SEED_ZOMBIE_PAIL = -11,
        SEED_ZOMBIE_LADDER = -12,
        SEED_ZOMBIE_DIGGER = -13,
        SEED_ZOMBIE_BUNGEE = -14,
        SEED_ZOMBIE_FOOTBALL = -15,
        SEED_ZOMBIE_BALLOON = -16,
        SEED_ZOMBIE_SCREEN_DOOR = -17,
        SEED_ZOMBONI = -18,
        SEED_ZOMBIE_POGO = -19,
        SEED_ZOMBIE_DANCER = -20,
        SEED_ZOMBIE_GARGANTUAR = -21,
        SEED_ZOMBIE_IMP = -22,
        SEED_NONE = -1
    };
    public value struct Rect
    {
    public:
        int x, y, width, height;

    };
    public enum class RefreshTime
    {
        Short = 750,
        Long = 3000,
        VeryLong = 4500,
    };
    public enum class ShieldType
    {
        SHIELDTYPE_NONE,
        SHIELDTYPE_DOOR,
        SHIELDTYPE_NEWSPAPER,
        SHIELDTYPE_LADDER
    };
    public enum class HelmType
    {
        HELMTYPE_NONE = 0,
        HELMTYPE_TRAFFIC_CONE = 1,
        HELMTYPE_PAIL = 2,
        HELMTYPE_FOOTBALL = 3,
        HELMTYPE_DIGGER = 4,
        HELMTYPE_REDEYES = 5,
        HELMTYPE_HEADBAND = 6,
        HELMTYPE_BOBSLED = 7,
        HELMTYPE_WALLNUT = 8,
        HELMTYPE_TALLNUT = 9
    };

    public enum class ZombiePhase
    {
        PHASE_ZOMBIE_NORMAL,
        PHASE_ZOMBIE_DYING,
        PHASE_ZOMBIE_BURNED,
        PHASE_ZOMBIE_MOWERED,
        PHASE_BUNGEE_DIVING,
        PHASE_BUNGEE_DIVING_SCREAMING,
        PHASE_BUNGEE_AT_BOTTOM,
        PHASE_BUNGEE_GRABBING,
        PHASE_BUNGEE_RISING,
        PHASE_BUNGEE_HIT_OUCHY,
        PHASE_BUNGEE_CUTSCENE,
        PHASE_POLEVAULTER_PRE_VAULT,
        PHASE_POLEVAULTER_IN_VAULT,
        PHASE_POLEVAULTER_POST_VAULT,
        PHASE_RISING_FROM_GRAVE,
        PHASE_JACK_IN_THE_BOX_RUNNING,
        PHASE_JACK_IN_THE_BOX_POPPING,
        PHASE_BOBSLED_SLIDING,
        PHASE_BOBSLED_BOARDING,
        PHASE_BOBSLED_CRASHING,
        PHASE_POGO_BOUNCING,
        PHASE_POGO_HIGH_BOUNCE_1,
        PHASE_POGO_HIGH_BOUNCE_2,
        PHASE_POGO_HIGH_BOUNCE_3,
        PHASE_POGO_HIGH_BOUNCE_4,
        PHASE_POGO_HIGH_BOUNCE_5,
        PHASE_POGO_HIGH_BOUNCE_6,
        PHASE_POGO_FORWARD_BOUNCE_2,
        PHASE_POGO_FORWARD_BOUNCE_7,
        PHASE_NEWSPAPER_READING,
        PHASE_NEWSPAPER_MADDENING,
        PHASE_NEWSPAPER_MAD,
        PHASE_DIGGER_TUNNELING,
        PHASE_DIGGER_RISING,
        PHASE_DIGGER_TUNNELING_PAUSE_WITHOUT_AXE,
        PHASE_DIGGER_RISE_WITHOUT_AXE,
        PHASE_DIGGER_STUNNED,
        PHASE_DIGGER_WALKING,
        PHASE_DIGGER_WALKING_WITHOUT_AXE,
        PHASE_DIGGER_CUTSCENE,
        PHASE_DANCER_DANCING_IN,
        PHASE_DANCER_SNAPPING_FINGERS,
        PHASE_DANCER_SNAPPING_FINGERS_WITH_LIGHT,
        PHASE_DANCER_SNAPPING_FINGERS_HOLD,
        PHASE_DANCER_DANCING_LEFT,
        PHASE_DANCER_WALK_TO_RAISE,
        PHASE_DANCER_RAISE_LEFT_1,
        PHASE_DANCER_RAISE_RIGHT_1,
        PHASE_DANCER_RAISE_LEFT_2,
        PHASE_DANCER_RAISE_RIGHT_2,
        PHASE_DANCER_RISING,
        PHASE_DOLPHIN_WALKING,
        PHASE_DOLPHIN_INTO_POOL,
        PHASE_DOLPHIN_RIDING,
        PHASE_DOLPHIN_IN_JUMP,
        PHASE_DOLPHIN_WALKING_IN_POOL,
        PHASE_DOLPHIN_WALKING_WITHOUT_DOLPHIN,
        PHASE_SNORKEL_WALKING,
        PHASE_SNORKEL_INTO_POOL,
        PHASE_SNORKEL_WALKING_IN_POOL,
        PHASE_SNORKEL_UP_TO_EAT,
        PHASE_SNORKEL_EATING_IN_POOL,
        PHASE_SNORKEL_DOWN_FROM_EAT,
        PHASE_ZOMBIQUARIUM_ACCEL,
        PHASE_ZOMBIQUARIUM_DRIFT,
        PHASE_ZOMBIQUARIUM_BACK_AND_FORTH,
        PHASE_ZOMBIQUARIUM_BITE,
        PHASE_CATAPULT_LAUNCHING,
        PHASE_CATAPULT_RELOADING,
        PHASE_GARGANTUAR_THROWING,
        PHASE_GARGANTUAR_SMASHING,
        PHASE_IMP_GETTING_THROWN,
        PHASE_IMP_LANDING,
        PHASE_BALLOON_FLYING,
        PHASE_BALLOON_POPPING,
        PHASE_BALLOON_WALKING,
        PHASE_LADDER_CARRYING,
        PHASE_LADDER_PLACING,
        PHASE_BOSS_ENTER,
        PHASE_BOSS_IDLE,
        PHASE_BOSS_SPAWNING,
        PHASE_BOSS_STOMPING,
        PHASE_BOSS_BUNGEES_ENTER,
        PHASE_BOSS_BUNGEES_DROP,
        PHASE_BOSS_BUNGEES_LEAVE,
        PHASE_BOSS_DROP_RV,
        PHASE_BOSS_HEAD_ENTER,
        PHASE_BOSS_HEAD_IDLE_BEFORE_SPIT,
        PHASE_BOSS_HEAD_IDLE_AFTER_SPIT,
        PHASE_BOSS_HEAD_SPIT,
        PHASE_BOSS_HEAD_LEAVE,
        PHASE_YETI_RUNNING,
        PHASE_SQUASH_PRE_LAUNCH,
        PHASE_SQUASH_RISING,
        PHASE_SQUASH_FALLING,
        PHASE_SQUASH_DONE_FALLING
    };
    public enum class ZombieType
    {
        ZOMBIE_INVALID = -1,
        ZOMBIE_NORMAL,
        ZOMBIE_FLAG,
        ZOMBIE_TRAFFIC_CONE,
        ZOMBIE_POLEVAULTER,
        ZOMBIE_PAIL,
        ZOMBIE_NEWSPAPER,
        ZOMBIE_DOOR,
        ZOMBIE_FOOTBALL,
        ZOMBIE_DANCER,
        ZOMBIE_BACKUP_DANCER,
        ZOMBIE_DUCKY_TUBE,
        ZOMBIE_SNORKEL,
        ZOMBIE_ZAMBONI,
        ZOMBIE_BOBSLED,
        ZOMBIE_DOLPHIN_RIDER,
        ZOMBIE_JACK_IN_THE_BOX,
        ZOMBIE_BALLOON,
        ZOMBIE_DIGGER,
        ZOMBIE_POGO,
        ZOMBIE_YETI,
        ZOMBIE_BUNGEE,
        ZOMBIE_LADDER,
        ZOMBIE_CATAPULT,
        ZOMBIE_GARGANTUAR,
        ZOMBIE_IMP,
        ZOMBIE_BOSS,
        ZOMBIE_PEA_HEAD,
        ZOMBIE_WALLNUT_HEAD,
        ZOMBIE_JALAPENO_HEAD,
        ZOMBIE_GATLING_HEAD,
        ZOMBIE_SQUASH_HEAD,
        ZOMBIE_TALLNUT_HEAD,
        ZOMBIE_REDEYE_GARGANTUAR,
        NUM_ZOMBIE_TYPES,
        ZOMBIE_CACHED_POLEVAULTER_WITH_POLE,
        NUM_CACHED_ZOMBIE_TYPES
    };
    public enum class ProjectileMotion
    {
        MOTION_STRAIGHT = 0,  // Ë®Æ½ÏòÓÒ
        MOTION_LOBBED = 1,  // Å×ÎïÏß
        MOTION_THREEPEATER = 2,  // Æ«×ªÏòÓÒ
        MOTION_BEE = 3,  // 
        MOTION_BEE_BACKWARDS = 4,  // 
        MOTION_PUFF = 5,  // Ë®Æ½ÏòÓÒ£¨Ò»¶ÎÊ±¼äºóÏûÊ§£©
        MOTION_BACKWARDS = 6,  // Ë®Æ½Ïò×ó
        MOTION_STAR = 7,  // Ð±ÏòÔË¶¯
        MOTION_FLOAT_OVER = 8,  // »ºÂýÆ¯¸¡ÏòÓÒ£¨ÎÞÅö×²£©
        MOTION_HOMING = 9   // ×·×Ù
    };
    [Flags]
    public enum class DamageFlags : UInt32
    {
        DAMAGE_NORMAL=0,
        DAMAGE_BYPASSES_SHIELD = 1,
        DAMAGE_HITS_SHIELD_AND_BODY = 2,
        DAMAGE_FREEZE = 4,
        DAMAGE_DOESNT_CAUSE_FLASH = 8,
        DAMAGE_DOESNT_LEAVE_BODY = 16,
        DAMAGE_SPIKE = 32
    };
    [Flags]
    public enum class DamageRangeFlags : UInt32
    {
        DANAGES_NONE,
        DAMAGES_GROUND=1,
        DAMAGES_FLYING=2,
        DAMAGES_SUBMERGED=4,
        DAMAGES_DOG=8,
        DAMAGES_OFF_GROUND=16,
        DAMAGES_DYING=32,
        DAMAGES_UNDERGROUND=64,
        DAMAGES_ONLY_MINDCONTROLLED=128
    };
    public enum class ProjectileType
    {
        PROJECTILE_PEA = 0,   // Íã¶¹
        PROJECTILE_SNOWPEA = 1,   // ±ùÍã¶¹
        PROJECTILE_CABBAGE = 2,   // ¾íÐÄ²Ë
        PROJECTILE_MELON = 3,   // Î÷¹Ï
        PROJECTILE_PUFF = 4,   // æß×Ó
        PROJECTILE_WINTERMELON = 5,   // ±ù¹Ï
        PROJECTILE_FIREBALL = 6,   // »ðÍã¶¹
        PROJECTILE_STAR = 7,   // ÐÇÐÇ
        PROJECTILE_SPIKE = 8,   // ¼â´Ì
        PROJECTILE_BASKETBALL = 9,   // ÀºÇò
        PROJECTILE_KERNEL = 10,  // ÓñÃ×Á£
        PROJECTILE_COBBIG = 11,  // ÓñÃ×¼ÓÅ©ÅÚ
        PROJECTILE_BUTTER = 12,  // »ÆÓÍ
        PROJECTILE_ZOMBIE_PEA = 13,  // ½©Ê¬Íã¶¹
    };
    public enum class PlantWeapon
    {
        WEAPON_PRIMARY,
        WEAPON_SECONDARY
    };
    public enum class ReanimationType
    {
        REANIM_NONE = -1,
        REANIM_LOADBAR_SPROUT,
        REANIM_LOADBAR_ZOMBIEHEAD,
        REANIM_SODROLL,
        REANIM_FINAL_WAVE,
        REANIM_PEASHOOTER,
        REANIM_WALLNUT,
        REANIM_LILYPAD,
        REANIM_SUNFLOWER,
        REANIM_LAWNMOWER,
        REANIM_READYSETPLANT,
        REANIM_CHERRYBOMB,
        REANIM_SQUASH,
        REANIM_DOOMSHROOM,
        REANIM_SNOWPEA,
        REANIM_REPEATER,
        REANIM_SUNSHROOM,
        REANIM_TALLNUT,
        REANIM_FUMESHROOM,
        REANIM_PUFFSHROOM,
        REANIM_HYPNOSHROOM,
        REANIM_CHOMPER,
        REANIM_ZOMBIE,
        REANIM_SUN,
        REANIM_POTATOMINE,
        REANIM_SPIKEWEED,
        REANIM_SPIKEROCK,
        REANIM_THREEPEATER,
        REANIM_MARIGOLD,
        REANIM_ICESHROOM,
        REANIM_ZOMBIE_FOOTBALL,
        REANIM_ZOMBIE_NEWSPAPER,
        REANIM_ZOMBIE_ZAMBONI,
        REANIM_SPLASH,
        REANIM_JALAPENO,
        REANIM_JALAPENO_FIRE,
        REANIM_COIN_SILVER,
        REANIM_ZOMBIE_CHARRED,
        REANIM_ZOMBIE_CHARRED_IMP,
        REANIM_ZOMBIE_CHARRED_DIGGER,
        REANIM_ZOMBIE_CHARRED_ZAMBONI,
        REANIM_ZOMBIE_CHARRED_CATAPULT,
        REANIM_ZOMBIE_CHARRED_GARGANTUAR,
        REANIM_SCRAREYSHROOM,
        REANIM_PUMPKIN,
        REANIM_PLANTERN,
        REANIM_TORCHWOOD,
        REANIM_SPLITPEA,
        REANIM_SEASHROOM,
        REANIM_BLOVER,
        REANIM_FLOWER_POT,
        REANIM_CACTUS,
        REANIM_DANCER,
        REANIM_TANGLEKELP,
        REANIM_STARFRUIT,
        REANIM_POLEVAULTER,
        REANIM_BALLOON,
        REANIM_GARGANTUAR,
        REANIM_IMP,
        REANIM_DIGGER,
        REANIM_DIGGER_DIRT,
        REANIM_ZOMBIE_DOLPHINRIDER,
        REANIM_POGO,
        REANIM_BACKUP_DANCER,
        REANIM_BOBSLED,
        REANIM_JACKINTHEBOX,
        REANIM_SNORKEL,
        REANIM_BUNGEE,
        REANIM_CATAPULT,
        REANIM_LADDER,
        REANIM_PUFF,
        REANIM_SLEEPING,
        REANIM_GRAVE_BUSTER,
        REANIM_ZOMBIES_WON,
        REANIM_MAGNETSHROOM,
        REANIM_BOSS,
        REANIM_CABBAGEPULT,
        REANIM_KERNELPULT,
        REANIM_MELONPULT,
        REANIM_COFFEEBEAN,
        REANIM_UMBRELLALEAF,
        REANIM_GATLINGPEA,
        REANIM_CATTAIL,
        REANIM_GLOOMSHROOM,
        REANIM_BOSS_ICEBALL,
        REANIM_BOSS_FIREBALL,
        REANIM_COBCANNON,
        REANIM_GARLIC,
        REANIM_GOLD_MAGNET,
        REANIM_WINTER_MELON,
        REANIM_TWIN_SUNFLOWER,
        REANIM_POOL_CLEANER,
        REANIM_ROOF_CLEANER,
        REANIM_FIRE_PEA,
        REANIM_IMITATER,
        REANIM_YETI,
        REANIM_BOSS_DRIVER,
        REANIM_LAWN_MOWERED_ZOMBIE,
        REANIM_CRAZY_DAVE,
        REANIM_TEXT_FADE_ON,
        REANIM_HAMMER,
        REANIM_SLOT_MACHINE_HANDLE,
        REANIM_CREDITS_FOOTBALL,
        REANIM_CREDITS_JACKBOX,
        REANIM_SELECTOR_SCREEN,
        REANIM_PORTAL_CIRCLE,
        REANIM_PORTAL_SQUARE,
        REANIM_ZENGARDEN_SPROUT,
        REANIM_ZENGARDEN_WATERINGCAN,
        REANIM_ZENGARDEN_FERTILIZER,
        REANIM_ZENGARDEN_BUGSPRAY,
        REANIM_ZENGARDEN_PHONOGRAPH,
        REANIM_DIAMOND,
        REANIM_ZOMBIE_HAND,
        REANIM_STINKY,
        REANIM_RAKE,
        REANIM_RAIN_CIRCLE,
        REANIM_RAIN_SPLASH,
        REANIM_ZOMBIE_SURPRISE,
        REANIM_COIN_GOLD,
        REANIM_TREEOFWISDOM,
        REANIM_TREEOFWISDOM_CLOUDS,
        REANIM_TREEOFWISDOM_TREEFOOD,
        REANIM_CREDITS_MAIN,
        REANIM_CREDITS_MAIN2,
        REANIM_CREDITS_MAIN3,
        REANIM_ZOMBIE_CREDITS_DANCE,
        REANIM_CREDITS_STAGE,
        REANIM_CREDITS_BIGBRAIN,
        REANIM_CREDITS_FLOWER_PETALS,
        REANIM_CREDITS_INFANTRY,
        REANIM_CREDITS_THROAT,
        REANIM_CREDITS_CRAZYDAVE,
        REANIM_CREDITS_BOSSDANCE,
        REANIM_ZOMBIE_CREDITS_SCREEN_DOOR,
        REANIM_ZOMBIE_CREDITS_CONEHEAD,
        REANIM_CREDITS_ZOMBIEARMY1,
        REANIM_CREDITS_ZOMBIEARMY2,
        REANIM_CREDITS_TOMBSTONES,
        REANIM_CREDITS_SOLARPOWER,
        REANIM_CREDITS_ANYHOUR,
        REANIM_CREDITS_WEARETHEUNDEAD,
        REANIM_CREDITS_DISCOLIGHTS,
        REANIM_FLAG,
        NUM_REANIMS
    };



    public enum class PlantSubClass
    {
        SUBCLASS_NORMAL = 0,
        SUBCLASS_SHOOTER = 1
    };


}
*/