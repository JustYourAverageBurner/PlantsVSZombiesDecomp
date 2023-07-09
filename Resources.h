#ifndef __RESOURCES__
#define __RESOURCES__

extern int gNeedRecalcVariableToIdMap;

namespace Sexy
{
    class Font;
    class Image;
    class ResourceManager;

    enum class ResourceId : int
    {
        IMAGE_BLANK_ID,
        IMAGE_POPCAP_LOGO_ID,
        IMAGE_PARTNER_LOGO_ID,
        IMAGE_TITLESCREEN_ID,
        IMAGE_LOADBAR_DIRT_ID,
        IMAGE_LOADBAR_GRASS_ID,
        IMAGE_PVZ_LOGO_ID,
        IMAGE_REANIM_SODROLLCAP_ID,
        FONT_BRIANNETOD16_ID,
        SOUND_BUTTONCLICK_ID,
        SOUND_LOADINGBAR_FLOWER_ID,
        SOUND_LOADINGBAR_ZOMBIE_ID,
        FONT_IMAGE_HOUSEOFTERROR28_ID,
        FONT_HOUSEOFTERROR28_ID,
        FONT_HOUSEOFTERROR20_ID,
        FONT_HOUSEOFTERROR16_ID,
        FONT_TINYBOLD_ID,
        FONT_CONTINUUMBOLD14_ID,
        FONT_CONTINUUMBOLD14OUTLINE_ID,
        FONT_DWARVENTODCRAFT12_ID,
        FONT_DWARVENTODCRAFT15_ID,
        FONT_DWARVENTODCRAFT18_ID,
        FONT_DWARVENTODCRAFT18BRIGHTGREENINSET_ID,
        FONT_DWARVENTODCRAFT18GREENINSET_ID,
        FONT_DWARVENTODCRAFT18YELLOW_ID,
        FONT_DWARVENTODCRAFT24_ID,
        FONT_DWARVENTODCRAFT36BRIGHTGREENINSET_ID,
        FONT_DWARVENTODCRAFT36GREENINSET_ID,
        FONT_PICO129_ID,
        FONT_BRIANNETOD12_ID,
        IMAGE_EDITBOX_ID,
        IMAGE_DIALOG_TOPLEFT_ID,
        IMAGE_DIALOG_TOPMIDDLE_ID,
        IMAGE_DIALOG_TOPRIGHT_ID,
        IMAGE_DIALOG_CENTERLEFT_ID,
        IMAGE_DIALOG_CENTERMIDDLE_ID,
        IMAGE_DIALOG_CENTERRIGHT_ID,
        IMAGE_DIALOG_BOTTOMLEFT_ID,
        IMAGE_DIALOG_BOTTOMMIDDLE_ID,
        IMAGE_DIALOG_BOTTOMRIGHT_ID,
        IMAGE_DIALOG_BIGBOTTOMLEFT_ID,
        IMAGE_DIALOG_BIGBOTTOMMIDDLE_ID,
        IMAGE_DIALOG_BIGBOTTOMRIGHT_ID,
        IMAGE_DIALOG_HEADER_ID,
        IMAGE_BUTTON_LEFT_ID,
        IMAGE_BUTTON_MIDDLE_ID,
        IMAGE_BUTTON_RIGHT_ID,
        IMAGE_BUTTON_DOWN_LEFT_ID,
        IMAGE_BUTTON_DOWN_MIDDLE_ID,
        IMAGE_BUTTON_DOWN_RIGHT_ID,
        IMAGE_SEEDCHOOSER_BACKGROUND_ID,
        IMAGE_SEEDCHOOSER_BUTTON_ID,
        IMAGE_SEEDCHOOSER_BUTTON_DISABLED_ID,
        IMAGE_SEEDCHOOSER_BUTTON_GLOW_ID,
        IMAGE_SEEDCHOOSER_BUTTON2_ID,
        IMAGE_SEEDCHOOSER_BUTTON2_GLOW_ID,
        IMAGE_SEEDCHOOSER_IMITATERADDON_ID,
        IMAGE_SEEDS_ID,
        IMAGE_SEEDPACKET_LARGER_ID,
        IMAGE_SEEDPACKETSILHOUETTE_ID,
        IMAGE_FLAGMETER_ID,
        IMAGE_FLAGMETERLEVELPROGRESS_ID,
        IMAGE_FLAGMETERPARTS_ID,
        IMAGE_TROPHY_ID,
        IMAGE_TROPHY_HI_RES_ID,
        IMAGE_MINIGAME_TROPHY_ID,
        IMAGE_ZOMBIE_NOTE_SMALL_ID,
        IMAGE_TACO_ID,
        IMAGE_CARKEYS_ID,
        IMAGE_ALMANAC_ID,
        IMAGE_ICON_POOLCLEANER_ID,
        IMAGE_ICON_ROOFCLEANER_ID,
        IMAGE_ICON_RAKE_ID,
        IMAGE_BRAIN_ID,
        IMAGE_MONEYBAG_ID,
        IMAGE_MONEYBAG_HI_RES_ID,
        IMAGE_CHOCOLATE_ID,
        IMAGE_OPTIONS_BACKTOGAMEBUTTON0_ID,
        IMAGE_OPTIONS_BACKTOGAMEBUTTON2_ID,
        IMAGE_OPTIONS_CHECKBOX0_ID,
        IMAGE_OPTIONS_CHECKBOX1_ID,
        IMAGE_OPTIONS_MENUBACK_ID,
        IMAGE_OPTIONS_SLIDERKNOB2_ID,
        IMAGE_OPTIONS_SLIDERSLOT_ID,
       // IMAGE_OPTIONS_VSLIDERKNOB2_ID,
        //IMAGE_OPTIONS_VSLIDERSLOT_ID,
        IMAGE_SELECTORSCREEN_HELP1_ID,
        IMAGE_SELECTORSCREEN_HELP2_ID,
        IMAGE_SELECTORSCREEN_OPTIONS1_ID,
        IMAGE_SELECTORSCREEN_OPTIONS2_ID,
        IMAGE_SELECTORSCREEN_QUIT1_ID,
        IMAGE_SELECTORSCREEN_QUIT2_ID,
        IMAGE_SELECTORSCREEN_ALMANAC_ID,
        IMAGE_SELECTORSCREEN_ALMANACHIGHLIGHT_ID,
        IMAGE_SELECTORSCREEN_STORE_ID,
        IMAGE_SELECTORSCREEN_STOREHIGHLIGHT_ID,
        IMAGE_SELECTORSCREEN_LEVELNUMBERS_ID,
        IMAGE_SELECTORSCREEN_ZENGARDEN_ID,
        IMAGE_SELECTORSCREEN_ZENGARDENHIGHLIGHT_ID,
        IMAGE_STORE_SPEECHBUBBLE_ID,
        IMAGE_STORE_SPEECHBUBBLE2_ID,
        IMAGE_SHOVEL_ID,
        IMAGE_SHOVEL_HI_RES_ID,
        IMAGE_TOMBSTONES_ID,
        IMAGE_TOMBSTONE_MOUNDS_ID,
        IMAGE_NIGHT_GRAVE_GRAPHIC_ID,
        IMAGE_CRATER_ID,
        IMAGE_CRATER_FADING_ID,
        IMAGE_CRATER_ROOF_CENTER_ID,
        IMAGE_CRATER_ROOF_LEFT_ID,
        IMAGE_CRATER_WATER_DAY_ID,
        IMAGE_CRATER_WATER_NIGHT_ID,
        IMAGE_COBCANNON_TARGET_ID,
        IMAGE_COBCANNON_POPCORN_ID,
        IMAGE_FERTILIZER_ID,
        IMAGE_WATERINGCAN_ID,
        IMAGE_WATERINGCANGOLD_ID,
        IMAGE_PHONOGRAPH_ID,
        IMAGE_BEGHOULED_TWIST_OVERLAY_ID,
        IMAGE_ZEN_GOLDTOOLRETICLE_ID,
        IMAGE_ZEN_GARDENGLOVE_ID,
        IMAGE_ZEN_MONEYSIGN_ID,
        IMAGE_ZEN_NEXTGARDEN_ID,
        IMAGE_ZEN_WHEELBARROW_ID,
        IMAGE_ZENSHOPBUTTON_ID,
        IMAGE_ZENSHOPBUTTON_HIGHLIGHT_ID,
        IMAGE_PRESENT_ID,
        IMAGE_PRESENTOPEN_ID,
        IMAGE_SUNFLOWER_TROPHY_ID,
        IMAGE_SLOTMACHINE_OVERLAY_ID,
        IMAGE_SCARY_POT_ID,
        IMAGE_BUG_SPRAY_ID,
        IMAGE_PLANTSPEECHBUBBLE_ID,
        IMAGE_WATERDROP_ID,
        IMAGE_TREEFOOD_ID,
        IMAGE_PACKET_PLANTS_ID,
        IMAGE_ZEN_NEED_ICONS_ID,
        IMAGE_PROJECTILEPEA_ID,
        IMAGE_PROJECTILESNOWPEA_ID,
        IMAGE_PROJECTILECACTUS_ID,
        IMAGE_DIRTSMALL_ID,
        IMAGE_DIRTBIG_ID,
        IMAGE_ROCKSMALL_ID,
        IMAGE_WATERPARTICLE_ID,
        IMAGE_WHITEWATER_ID,
        IMAGE_WHITEWATER_SHADOW_ID,
        IMAGE_MELONPULT_PARTICLES_ID,
        IMAGE_WINTERMELON_PARTICLES_ID,
        IMAGE_PROJECTILE_STAR_ID,
        IMAGE_SEEDBANK_ID,
        IMAGE_CONVEYORBELT_BACKDROP_ID,
        IMAGE_CONVEYORBELT_ID,
        IMAGE_SHOVELBANK_ID,
        IMAGE_SUNBANK_ID,
        IMAGE_COINBANK_ID,
        IMAGE_POOL_ID,
        IMAGE_POOL_NIGHT_ID,
        IMAGE_POOL_BASE_ID,
        IMAGE_POOL_BASE_NIGHT_ID,
        IMAGE_POOL_SHADING_ID,
        IMAGE_POOL_SHADING_NIGHT_ID,
        IMAGE_POOL_CAUSTIC_EFFECT_ID,
        IMAGE_PLANTSHADOW_ID,
        IMAGE_PLANTSHADOW2_ID,
        IMAGE_PEA_SHADOWS_ID,
        IMAGE_WALLNUT_BOWLINGSTRIPE_ID,
        IMAGE_ICE_ID,
        IMAGE_ICE_CAP_ID,
        IMAGE_ICE_SPARKLES_ID,
        IMAGE_IMITATERSEED_ID,
        IMAGE_ALMANAC_IMITATER_ID,
        IMAGE_IMITATERSEEDDISABLED_ID,
        IMAGE_ICETRAP_ID,
        IMAGE_ICETRAP2_ID,
        IMAGE_ICETRAP_PARTICLES_ID,
        IMAGE_ZOMBIE_BOBSLED1_ID,
        IMAGE_ZOMBIE_BOBSLED2_ID,
        IMAGE_ZOMBIE_BOBSLED3_ID,
        IMAGE_ZOMBIE_BOBSLED4_ID,
        IMAGE_ZOMBIE_BOBSLED_INSIDE_ID,
        IMAGE_BUNGEECORD_ID,
        IMAGE_BUNGEETARGET_ID,
        IMAGE_SPOTLIGHT_ID,
        IMAGE_SPOTLIGHT2_ID,
        IMAGE_WHITEPIXEL_ID,
        IMAGE_ZOMBIEPOLEVAULTERHEAD_ID,
        IMAGE_ZOMBIEFOOTBALLHEAD_ID,
        IMAGE_POOLSPARKLY_ID,
        IMAGE_WALLNUTPARTICLESSMALL_ID,
        IMAGE_WALLNUTPARTICLESLARGE_ID,
        IMAGE_PEA_SPLATS_ID,
        IMAGE_STAR_PARTICLES_ID,
        IMAGE_STAR_SPLATS_ID,
        IMAGE_PEA_PARTICLES_ID,
        IMAGE_SNOWPEA_SPLATS_ID,
        IMAGE_SNOWPEA_PARTICLES_ID,
        IMAGE_SNOWPEA_PUFF_ID,
        IMAGE_SNOWFLAKES_ID,
        IMAGE_POTATOMINE_PARTICLES_ID,
        IMAGE_PUFFSHROOM_PUFF1_ID,
        IMAGE_ZAMBONISMOKE_ID,
        IMAGE_ZOMBIEDANCERHEAD_ID,
        IMAGE_ZOMBIEBALLOONHEAD_ID,
        IMAGE_ZOMBIEIMPHEAD_ID,
        IMAGE_ZOMBIEDIGGERHEAD_ID,
        IMAGE_ZOMBIEDIGGERARM_ID,
        IMAGE_ZOMBIEDOLPHINRIDERHEAD_ID,
        IMAGE_ZOMBIEPOGO_ID,
        IMAGE_ZOMBIEBACKUPDANCERHEAD_ID,
        IMAGE_ZOMBIEBOBSLEDHEAD_ID,
        IMAGE_ZOMBIELADDERHEAD_ID,
        IMAGE_ZOMBIEYETIHEAD_ID,
        IMAGE_SEEDPACKETFLASH_ID,
        IMAGE_ZOMBIEJACKBOXARM_ID,
        IMAGE_IMITATERCLOUDS_ID,
        IMAGE_IMITATERPUFFS_ID,
        IMAGE_ZOMBIE_BOSS_FIREBALL_PARTICLES_ID,
        IMAGE_ZOMBIE_BOSS_ICEBALL_PARTICLES_ID,
        IMAGE_ZOMBIE_BOSS_FIREBALL_GROUNDPARTICLES_ID,
        IMAGE_ZOMBIE_BOSS_ICEBALL_GROUNDPARTICLES_ID,
        IMAGE_DOOMSHROOM_EXPLOSION_BASE_ID,
        IMAGE_RAIN_ID,
        IMAGE_VASE_CHUNKS_ID,
        IMAGE_ZOMBOSS_PARTICLES_ID,
        IMAGE_AWARDPICKUPGLOW_ID,
        IMAGE_ZOMBIE_SEAWEED_ID,
        IMAGE_PINATA_ID,
        IMAGE_ZOMBIEFUTUREGLASSES_ID,
        IMAGE_DUST_PUFFS_ID,
        IMAGE_REANIM_WALLNUT_BODY_ID,
        IMAGE_REANIM_WALLNUT_CRACKED1_ID,
        IMAGE_REANIM_WALLNUT_CRACKED2_ID,
        IMAGE_REANIM_TALLNUT_CRACKED1_ID,
        IMAGE_REANIM_TALLNUT_CRACKED2_ID,
        IMAGE_REANIM_PUMPKIN_DAMAGE1_ID,
        IMAGE_REANIM_PUMPKIN_DAMAGE3_ID,
        IMAGE_REANIM_ZOMBIE_CONE1_ID,
        IMAGE_REANIM_ZOMBIE_CONE2_ID,
        IMAGE_REANIM_ZOMBIE_CONE3_ID,
        IMAGE_REANIM_ZOMBIE_BUCKET1_ID,
        IMAGE_REANIM_ZOMBIE_BUCKET2_ID,
        IMAGE_REANIM_ZOMBIE_BUCKET3_ID,
        IMAGE_REANIM_ZOMBIE_DIGGER_HARDHAT_ID,
        IMAGE_REANIM_ZOMBIE_DIGGER_HARDHAT2_ID,
        IMAGE_REANIM_ZOMBIE_DIGGER_HARDHAT3_ID,
        IMAGE_REANIM_ZOMBIE_SCREENDOOR1_ID,
        IMAGE_REANIM_ZOMBIE_SCREENDOOR2_ID,
        IMAGE_REANIM_ZOMBIE_SCREENDOOR3_ID,
        IMAGE_REANIM_ZOMBIE_FLAG1_ID,
        IMAGE_REANIM_ZOMBIE_FLAG3_ID,
        IMAGE_REANIM_ZOMBIE_OUTERARM_UPPER2_ID,
        IMAGE_REANIM_ZOMBIE_FOOTBALL_HELMET_ID,
        IMAGE_REANIM_ZOMBIE_FOOTBALL_HELMET2_ID,
        IMAGE_REANIM_ZOMBIE_FOOTBALL_HELMET3_ID,
        IMAGE_REANIM_ZOMBIE_FOOTBALL_LEFTARM_HAND_ID,
        IMAGE_REANIM_ZOMBIE_FOOTBALL_LEFTARM_UPPER2_ID,
        IMAGE_REANIM_ZOMBIE_PAPER_LEFTARM_UPPER2_ID,
        IMAGE_REANIM_ZOMBIE_PAPER_LEFTARM_LOWER_ID,
        IMAGE_REANIM_ZOMBIE_PAPER_PAPER2_ID,
        IMAGE_REANIM_ZOMBIE_PAPER_PAPER3_ID,
        IMAGE_REANIM_ZOMBIE_PAPER_MADHEAD_ID,
        IMAGE_REANIM_ZOMBIE_ZAMBONI_1_DAMAGE1_ID,
        IMAGE_REANIM_ZOMBIE_ZAMBONI_1_DAMAGE2_ID,
        IMAGE_REANIM_ZOMBIE_ZAMBONI_2_DAMAGE1_ID,
        IMAGE_REANIM_ZOMBIE_ZAMBONI_2_DAMAGE2_ID,
        IMAGE_REANIM_ZOMBIE_ZAMBONI_WHEEL_FLAT_ID,
        IMAGE_REANIM_COIN_SILVER_DOLLAR_ID,
        IMAGE_REANIM_COIN_GOLD_DOLLAR_ID,
        IMAGE_REANIM_DIAMOND_ID,
        IMAGE_REANIM_COINGLOW_ID,
        IMAGE_REANIM_ZOMBIE_JACKSON_OUTERARM_HAND_ID,
        IMAGE_REANIM_ZOMBIE_JACKSON_OUTERARM_UPPER2_ID,
        IMAGE_REANIM_ZOMBIE_DANCER_INNERARM_HAND_ID,
        IMAGE_REANIM_ZOMBIE_POLEVAULTER_OUTERARM_UPPER2_ID,
        IMAGE_REANIM_ZOMBIE_OUTERARM_HAND_ID,
        IMAGE_REANIM_ZOMBIE_BALLOON_OUTERARM_UPPER2_ID,
        IMAGE_REANIM_ZOMBIE_IMP_ARM1_BONE_ID,
        IMAGE_REANIM_ZOMBIE_IMP_ARM2_ID,
        IMAGE_REANIM_ZOMBIE_GARGANTUAR_BODY1_2_ID,
        IMAGE_REANIM_ZOMBIE_GARGANTUAR_BODY1_3_ID,
        IMAGE_REANIM_ZOMBIE_GARGANTUAR_DUCKXING_ID,
        IMAGE_REANIM_ZOMBIE_GARGANTUAR_ZOMBIE_ID,
        IMAGE_REANIM_ZOMBIE_GARGANTUAR_FOOT2_ID,
        IMAGE_REANIM_ZOMBIE_GARGANTUAR_HEAD2_ID,
        IMAGE_REANIM_ZOMBIE_GARGANTUAR_OUTERARM_LOWER2_ID,
        IMAGE_REANIM_ZOMBIE_GARGANTUAR_HEAD2_REDEYE_ID,
        IMAGE_REANIM_ZOMBIE_GARGANTUAR_HEAD_REDEYE_ID,
        IMAGE_REANIM_ZOMBIE_DIGGER_OUTERARM_UPPER2_ID,
        IMAGE_REANIM_ZOMBIE_DOLPHINRIDER_OUTERARM_UPPER2_ID,
        IMAGE_REANIM_ZOMBIE_POGO_OUTERARM_UPPER2_ID,
        IMAGE_REANIM_ZOMBIE_POGO_STICKDAMAGE1_ID,
        IMAGE_REANIM_ZOMBIE_POGO_STICKDAMAGE2_ID,
        IMAGE_REANIM_ZOMBIE_POGO_STICK2DAMAGE1_ID,
        IMAGE_REANIM_ZOMBIE_POGO_STICK2DAMAGE2_ID,
        IMAGE_REANIM_ZOMBIE_POGO_STICKHANDS2_ID,
        IMAGE_REANIM_ZOMBIE_BOBSLED_OUTERARM_UPPER2_ID,
        IMAGE_REANIM_ZOMBIE_BOBSLED_OUTERARM_HAND_ID,
        IMAGE_REANIM_ZOMBIE_JACKBOX_BOX_ID,
        IMAGE_REANIM_ZOMBIE_JACKBOX_OUTERARM_LOWER2_ID,
        IMAGE_REANIM_ZOMBIE_SNORKLE_OUTERARM_UPPER2_ID,
        IMAGE_REANIM_ZOMBIE_BUNGI_HEAD_SCARED_ID,
        IMAGE_REANIM_ZOMBIE_CATAPULT_BASKETBALL_ID,
        IMAGE_REANIM_ZOMBIE_CATAPULT_POLE_ID,
        IMAGE_REANIM_ZOMBIE_CATAPULT_POLE_DAMAGE_ID,
        IMAGE_REANIM_ZOMBIE_CATAPULT_POLE_WITHBALL_ID,
        IMAGE_REANIM_ZOMBIE_CATAPULT_POLE_DAMAGE_WITHBALL_ID,
        IMAGE_REANIM_ZOMBIE_CATAPULT_SIDING_DAMAGE_ID,
        IMAGE_REANIM_ZOMBIE_LADDER_1_ID,
        IMAGE_REANIM_ZOMBIE_LADDER_1_DAMAGE1_ID,
        IMAGE_REANIM_ZOMBIE_LADDER_1_DAMAGE2_ID,
        IMAGE_REANIM_ZOMBIE_LADDER_5_ID,
        IMAGE_REANIM_ZOMBIE_LADDER_OUTERARM_UPPER2_ID,
        IMAGE_REANIM_ZOMBIE_BOSS_ICEBALL_ID,
        IMAGE_REANIM_ZOMBIE_BOSS_HEAD_DAMAGE1_ID,
        IMAGE_REANIM_ZOMBIE_BOSS_HEAD_DAMAGE2_ID,
        IMAGE_REANIM_ZOMBIE_BOSS_JAW_DAMAGE1_ID,
        IMAGE_REANIM_ZOMBIE_BOSS_JAW_DAMAGE2_ID,
        IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_HAND_DAMAGE1_ID,
        IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_HAND_DAMAGE2_ID,
        IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_THUMB_DAMAGE1_ID,
        IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_THUMB_DAMAGE2_ID,
        IMAGE_REANIM_ZOMBIE_BOSS_FOOT_DAMAGE1_ID,
        IMAGE_REANIM_ZOMBIE_BOSS_FOOT_DAMAGE2_ID,
        IMAGE_REANIM_ZOMBIE_BOSS_EYEGLOW_BLUE_ID,
        IMAGE_REANIM_ZOMBIE_BOSS_MOUTHGLOW_BLUE_ID,
        IMAGE_REANIM_CABBAGEPULT_CABBAGE_ID,
        IMAGE_REANIM_CORNPULT_KERNAL_ID,
        IMAGE_REANIM_CORNPULT_BUTTER_ID,
        IMAGE_REANIM_CORNPULT_BUTTER_SPLAT_ID,
        IMAGE_REANIM_MELONPULT_MELON_ID,
        IMAGE_REANIM_WINTERMELON_PROJECTILE_ID,
        IMAGE_REANIM_ZOMBIE_DIGGER_PICKAXE_ID,
        IMAGE_REANIM_ZOMBIE_HEAD_GROSSOUT_ID,
        IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES1_ID,
        IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES2_ID,
        IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES3_ID,
        IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES4_ID,
        IMAGE_REANIM_GARLIC_BODY2_ID,
        IMAGE_REANIM_GARLIC_BODY3_ID,
        IMAGE_REANIM_COBCANNON_COB_ID,
        IMAGE_REANIM_ZOMBIE_YETI_OUTERARM_UPPER2_ID,
        IMAGE_REANIM_ZOMBIE_YETI_OUTERARM_HAND_ID,
        IMAGE_REANIM_ZOMBIE_SNORKLE_HEAD_ID,
        IMAGE_REANIM_SELECTORSCREEN_ADVENTURE_BUTTON_ID,
        IMAGE_REANIM_SELECTORSCREEN_ADVENTURE_HIGHLIGHT_ID,
        IMAGE_REANIM_SELECTORSCREEN_STARTADVENTURE_BUTTON_ID,
        IMAGE_REANIM_SELECTORSCREEN_STARTADVENTURE_HIGHLIGHT_ID,
        IMAGE_REANIM_SELECTORSCREEN_SURVIVAL_BUTTON_ID,
        IMAGE_REANIM_SELECTORSCREEN_SURVIVAL_HIGHLIGHT_ID,
        IMAGE_REANIM_SELECTORSCREEN_CHALLENGES_BUTTON_ID,
        IMAGE_REANIM_SELECTORSCREEN_CHALLENGES_HIGHLIGHT_ID,
        IMAGE_REANIM_SELECTORSCREEN_VASEBREAKER_BUTTON_ID,
        IMAGE_REANIM_SELECTORSCREEN_VASEBREAKER_HIGHLIGHT_ID,
        IMAGE_REANIM_SELECTORSCREEN_WOODSIGN2_PRESS_ID,
        IMAGE_REANIM_SELECTORSCREEN_BG_ID,
        IMAGE_REANIM_SELECTORSCREEN_ALMANAC_SHADOW_ID,
        IMAGE_REANIM_SELECTORSCREEN_KEY_SHADOW_ID,
        IMAGE_REANIM_TREE_BG_ID,
        IMAGE_REANIM_POT_TOP_DARK_ID,
        IMAGE_REANIM_ZENGARDEN_BUGSPRAY_BOTTLE_ID,
        IMAGE_REANIM_STINKY_TURN3_ID,
        IMAGE_REANIM_CRAZYDAVE_MOUTH1_ID,
        IMAGE_REANIM_CRAZYDAVE_MOUTH4_ID,
        IMAGE_REANIM_CRAZYDAVE_MOUTH5_ID,
        IMAGE_REANIM_CRAZYDAVE_MOUTH6_ID,
        IMAGE_REANIM_ZOMBIE_MUSTACHE2_ID,
        IMAGE_REANIM_ZOMBIE_MUSTACHE3_ID,
        SOUND_AWOOGA_ID,
        SOUND_BLEEP_ID,
        SOUND_BUZZER_ID,
        SOUND_CHOMP_ID,
        SOUND_CHOMP2_ID,
        SOUND_CHOMPSOFT_ID,
        SOUND_EVILLAUGH_ID,
        SOUND_FLOOP_ID,
        SOUND_FROZEN_ID,
        SOUND_GULP_ID,
        SOUND_GROAN_ID,
        SOUND_GROAN2_ID,
        SOUND_GROAN3_ID,
        SOUND_GROAN4_ID,
        SOUND_GROAN5_ID,
        SOUND_GROAN6_ID,
        SOUND_LOSEMUSIC_ID,
        SOUND_MINDCONTROLLED_ID,
        SOUND_PAUSE_ID,
        SOUND_PLANT_ID,
        SOUND_PLANT2_ID,
        SOUND_POINTS_ID,
        SOUND_SEEDLIFT_ID,
        SOUND_SIREN_ID,
        SOUND_SLURP_ID,
        SOUND_SPLAT_ID,
        SOUND_SPLAT2_ID,
        SOUND_SPLAT3_ID,
        SOUND_SUKHBIR_ID,
        SOUND_SUKHBIR2_ID,
        SOUND_SUKHBIR3_ID,
        SOUND_SUKHBIR4_ID,
        SOUND_SUKHBIR5_ID,
        SOUND_SUKHBIR6_ID,
        SOUND_TAP_ID,
        SOUND_TAP2_ID,
        SOUND_THROW_ID,
        SOUND_THROW2_ID,
        SOUND_BLOVER_ID,
        SOUND_WINMUSIC_ID,
        SOUND_LAWNMOWER_ID,
        SOUND_BOING_ID,
        SOUND_JACKINTHEBOX_ID,
        SOUND_DIAMOND_ID,
        SOUND_DOLPHIN_APPEARS_ID,
        SOUND_DOLPHIN_BEFORE_JUMPING_ID,
        SOUND_POTATO_MINE_ID,
        SOUND_ZAMBONI_ID,
        SOUND_BALLOON_POP_ID,
        SOUND_THUNDER_ID,
        SOUND_ZOMBIESPLASH_ID,
        SOUND_BOWLING_ID,
        SOUND_BOWLINGIMPACT_ID,
        SOUND_BOWLINGIMPACT2_ID,
        SOUND_GRAVEBUSTERCHOMP_ID,
        SOUND_GRAVEBUTTON_ID,
        SOUND_LIMBS_POP_ID,
        SOUND_PLANTERN_ID,
        SOUND_POGO_ZOMBIE_ID,
        SOUND_SNOW_PEA_SPARKLES_ID,
        SOUND_PLANT_WATER_ID,
        SOUND_ZOMBIE_ENTERING_WATER_ID,
        SOUND_ZOMBIE_FALLING_1_ID,
        SOUND_ZOMBIE_FALLING_2_ID,
        SOUND_PUFF_ID,
        SOUND_FUME_ID,
        SOUND_HUGE_WAVE_ID,
        SOUND_SLOT_MACHINE_ID,
        SOUND_COIN_ID,
        SOUND_ROLL_IN_ID,
        SOUND_DIGGER_ZOMBIE_ID,
        SOUND_HATCHBACK_CLOSE_ID,
        SOUND_HATCHBACK_OPEN_ID,
        SOUND_KERNELPULT_ID,
        SOUND_KERNELPULT2_ID,
        SOUND_ZOMBAQUARIUM_DIE_ID,
        SOUND_BUNGEE_SCREAM_ID,
        SOUND_BUNGEE_SCREAM2_ID,
        SOUND_BUNGEE_SCREAM3_ID,
        SOUND_BUTTER_ID,
        SOUND_JACK_SURPRISE_ID,
        SOUND_JACK_SURPRISE2_ID,
        SOUND_NEWSPAPER_RARRGH_ID,
        SOUND_NEWSPAPER_RARRGH2_ID,
        SOUND_NEWSPAPER_RIP_ID,
        SOUND_SQUASH_HMM_ID,
        SOUND_SQUASH_HMM2_ID,
        SOUND_VASE_BREAKING_ID,
        SOUND_POOL_CLEANER_ID,
        SOUND_MAGNETSHROOM_ID,
        SOUND_LADDER_ZOMBIE_ID,
        SOUND_GARGANTUAR_THUMP_ID,
        SOUND_BASKETBALL_ID,
        SOUND_FIREPEA_ID,
        SOUND_IGNITE_ID,
        SOUND_IGNITE2_ID,
        SOUND_READYSETPLANT_ID,
        SOUND_DOOMSHROOM_ID,
        SOUND_EXPLOSION_ID,
        SOUND_FINALWAVE_ID,
        SOUND_REVERSE_EXPLOSION_ID,
        SOUND_RVTHROW_ID,
        SOUND_SHIELDHIT_ID,
        SOUND_SHIELDHIT2_ID,
        SOUND_BOSSEXPLOSION_ID,
        SOUND_CHERRYBOMB_ID,
        SOUND_BONK_ID,
        SOUND_SWING_ID,
        SOUND_RAIN_ID,
        SOUND_LIGHTFILL_ID,
        SOUND_PLASTICHIT_ID,
        SOUND_PLASTICHIT2_ID,
        SOUND_JALAPENO_ID,
        SOUND_BALLOONINFLATE_ID,
        SOUND_BIGCHOMP_ID,
        SOUND_MELONIMPACT_ID,
        SOUND_MELONIMPACT2_ID,
        SOUND_PLANTGROW_ID,
        SOUND_SHOOP_ID,
        SOUND_TAPGLASS_ID,
        SOUND_JUICY_ID,
        SOUND_COFFEE_ID,
        SOUND_WAKEUP_ID,
        SOUND_LOWGROAN_ID,
        SOUND_LOWGROAN2_ID,
        SOUND_PRIZE_ID,
        SOUND_YUCK_ID,
        SOUND_YUCK2_ID,
        SOUND_GRASSSTEP_ID,
        SOUND_SHOVEL_ID,
        SOUND_COBLAUNCH_ID,
        SOUND_WATERING_ID,
        SOUND_POLEVAULT_ID,
        SOUND_GRAVESTONE_RUMBLE_ID,
        SOUND_DIRT_RISE_ID,
        SOUND_FERTILIZER_ID,
        SOUND_PORTAL_ID,
        SOUND_BUGSPRAY_ID,
        SOUND_SCREAM_ID,
        SOUND_PAPER_ID,
        SOUND_MONEYFALLS_ID,
        SOUND_IMP_ID,
        SOUND_IMP2_ID,
        SOUND_HYDRAULIC_SHORT_ID,
        SOUND_HYDRAULIC_ID,
        SOUND_GARGANTUDEATH_ID,
        SOUND_CERAMIC_ID,
        SOUND_BOSSBOULDERATTACK_ID,
        SOUND_CHIME_ID,
        SOUND_CRAZYDAVESHORT1_ID,
        SOUND_CRAZYDAVESHORT2_ID,
        SOUND_CRAZYDAVESHORT3_ID,
        SOUND_CRAZYDAVELONG1_ID,
        SOUND_CRAZYDAVELONG2_ID,
        SOUND_CRAZYDAVELONG3_ID,
        SOUND_CRAZYDAVEEXTRALONG1_ID,
        SOUND_CRAZYDAVEEXTRALONG2_ID,
        SOUND_CRAZYDAVEEXTRALONG3_ID,
        SOUND_CRAZYDAVECRAZY_ID,
        SOUND_PHONOGRAPH_ID,
        SOUND_DANCER_ID,
        SOUND_FINALFANFARE_ID,
        SOUND_CRAZYDAVESCREAM_ID,
        SOUND_CRAZYDAVESCREAM2_ID,
        IMAGE_BACKGROUND1_ID,
        IMAGE_BACKGROUND1_GAMEOVER_INTERIOR_OVERLAY_ID,
        IMAGE_BACKGROUND1_GAMEOVER_MASK_ID,
        IMAGE_BACKGROUND1UNSODDED_ID,
        IMAGE_SOD1ROW_ID,
        IMAGE_SOD3ROW_ID,
        IMAGE_BACKGROUND2_ID,
        IMAGE_BACKGROUND2_GAMEOVER_INTERIOR_OVERLAY_ID,
        IMAGE_BACKGROUND2_GAMEOVER_MASK_ID,
        IMAGE_BACKGROUND3_ID,
        IMAGE_BACKGROUND3_GAMEOVER_INTERIOR_OVERLAY_ID,
        IMAGE_BACKGROUND3_GAMEOVER_MASK_ID,
        IMAGE_BACKGROUND4_ID,
        IMAGE_BACKGROUND4_GAMEOVER_INTERIOR_OVERLAY_ID,
        IMAGE_BACKGROUND4_GAMEOVER_MASK_ID,
        IMAGE_FOG_ID,
        IMAGE_FOG_SOFTWARE_ID,
        IMAGE_BACKGROUND5_ID,
        IMAGE_BACKGROUND5_GAMEOVER_MASK_ID,
        IMAGE_BACKGROUND6BOSS_ID,
        IMAGE_BACKGROUND6_GAMEOVER_MASK_ID,
        IMAGE_BACKGROUND_MUSHROOMGARDEN_ID,
        IMAGE_BACKGROUND_GREENHOUSE_ID,
        IMAGE_BACKGROUND_GREENHOUSE_OVERLAY_ID,
        IMAGE_AQUARIUM1_ID,
        IMAGE_WAVECENTER_ID,
        IMAGE_WAVESIDE_ID,
        IMAGE_AWARDSCREEN_BACK_ID,
        IMAGE_CHALLENGE_BACKGROUND_ID,
        IMAGE_CHALLENGE_WINDOW_ID,
        IMAGE_CHALLENGE_WINDOW_HIGHLIGHT_ID,
        IMAGE_CHALLENGE_BLANK_ID,
        IMAGE_CHALLENGE_THUMBNAILS_ID,
        IMAGE_SURVIVAL_THUMBNAILS_ID,
        IMAGE_LOCK_ID,
        IMAGE_LOCK_OPEN_ID,
        IMAGE_ALMANAC_INDEXBACK_ID,
        IMAGE_ALMANAC_PLANTBACK_ID,
        IMAGE_ALMANAC_ZOMBIEBACK_ID,
        IMAGE_ALMANAC_PLANTCARD_ID,
        IMAGE_ALMANAC_ZOMBIECARD_ID,
        IMAGE_ALMANAC_ZOMBIEWINDOW_ID,
        IMAGE_ALMANAC_ZOMBIEWINDOW2_ID,
        IMAGE_ALMANAC_ZOMBIEBLANK_ID,
        IMAGE_ALMANAC_GROUNDDAY_ID,
        IMAGE_ALMANAC_GROUNDNIGHT_ID,
        IMAGE_ALMANAC_GROUNDPOOL_ID,
        IMAGE_ALMANAC_GROUNDNIGHTPOOL_ID,
        IMAGE_ALMANAC_GROUNDROOF_ID,
        IMAGE_ALMANAC_GROUNDICE_ID,
        IMAGE_ALMANAC_CLOSEBUTTON_ID,
        IMAGE_ALMANAC_CLOSEBUTTONHIGHLIGHT_ID,
        IMAGE_ALMANAC_INDEXBUTTON_ID,
        IMAGE_ALMANAC_INDEXBUTTONHIGHLIGHT_ID, 
        IMAGE_ALMANAC_INDEXBUTTON_FLIP_ID,
        IMAGE_ALMANAC_INDEXBUTTONHIGHLIGHT_FLIP_ID,
        IMAGE_STORE_BACKGROUND_ID,
        IMAGE_STORE_BACKGROUNDNIGHT_ID,
        IMAGE_STORE_CAR_ID,
        IMAGE_STORE_CAR_NIGHT_ID,
        IMAGE_STORE_CARCLOSED_ID,
        IMAGE_STORE_CARCLOSED_NIGHT_ID,
        IMAGE_STORE_HATCHBACKOPEN_ID,
        IMAGE_STORE_SIGN_ID,
        IMAGE_STORE_MAINMENUBUTTON_ID,
        IMAGE_STORE_MAINMENUBUTTONDOWN_ID,
        IMAGE_STORE_MAINMENUBUTTONHIGHLIGHT_ID,
        IMAGE_STORE_NEXTBUTTON_ID,
        IMAGE_STORE_NEXTBUTTONHIGHLIGHT_ID,
        IMAGE_STORE_NEXTBUTTONDISABLED_ID,
        IMAGE_STORE_PREVBUTTON_ID,
        IMAGE_STORE_PREVBUTTONHIGHLIGHT_ID,
        IMAGE_STORE_PREVBUTTONDISABLED_ID,
        IMAGE_STORE_PRICETAG_ID,
        IMAGE_STORE_PACKETUPGRADE_ID,
        IMAGE_STORE_MUSHROOMGARDENICON_ID,
        IMAGE_STORE_AQUARIUMGARDENICON_ID,
        IMAGE_STORE_TREEOFWISDOMICON_ID,
        IMAGE_STORE_FIRSTAIDWALLNUTICON_ID,
        IMAGE_STORE_PVZICON_ID,
        IMAGE_ZOMBIE_NOTE_ID,
        IMAGE_ZOMBIE_NOTE1_ID,
        IMAGE_ZOMBIE_NOTE2_ID,
        IMAGE_ZOMBIE_NOTE3_ID,
        IMAGE_ZOMBIE_NOTE4_ID,
        IMAGE_ZOMBIE_FINAL_NOTE_ID,
        IMAGE_ZOMBIE_NOTE_HELP_ID,
        FONT_BRIANNETOD32_ID,
        FONT_BRIANNETOD32BLACK_ID,
        IMAGE_REANIM_SUNFLOWER_HEAD_SING1_ID,
        IMAGE_REANIM_SUNFLOWER_HEAD_SING2_ID,
        IMAGE_REANIM_SUNFLOWER_HEAD_SING3_ID,
        IMAGE_REANIM_SUNFLOWER_HEAD_SING4_ID,
        IMAGE_REANIM_SUNFLOWER_HEAD_SING5_ID,
        IMAGE_REANIM_SUNFLOWER_HEAD_WINK_ID,
        IMAGE_REANIM_CREDITS_DISCOLIGHTS_ID,
        IMAGE_REANIM_CREDITS_FOGMACHINE_ID,
        IMAGE_CREDITS_ZOMBIENOTE_ID,
        IMAGE_CREDITS_PLAYBUTTON_ID,
        RESOURCE_ID_MAX
    };

    ////////////////////////////////////////////////////////////////////////////////////////////////////
    
    extern int          SOUND_SHIELDHIT;                                        //0x6A71A0
    extern int		    SOUND_PAUSE;                                            //0x6A71A4
    extern Image*       IMAGE_TROPHY_HI_RES;                                    //0x6A71A8
    extern Image*       IMAGE_REANIM_ZOMBIE_BOSS_ICEBALL;                       //0x6A71AC
    extern Image*       IMAGE_POOL;                                             //0x6A71B0
    extern Image*       IMAGE_OPTIONS_CHECKBOX1;                                //0x6A71B4
    extern int          SOUND_GRASSSTEP;                                        //0x6A71B8
    extern Image*       IMAGE_DOOMSHROOM_EXPLOSION_BASE;                        //0x6A71BC
    extern Image*       IMAGE_BACKGROUND3;                                      //0x6A71C0
    extern int          SOUND_HATCHBACK_OPEN;                                   //0x6A71C4
    extern Image*       IMAGE_TROPHY;                                           //0x6A71C8
    extern Image*       IMAGE_SHOVELBANK;                                       //0x6A71CC
    extern Image*       IMAGE_FERTILIZER;                                       //0x6A71D0
    extern Image*       IMAGE_BACKGROUND6_GAMEOVER_MASK;                        //0x6A71D4
    extern int          SOUND_CRAZYDAVESCREAM;                                  //0x6A71D8
    extern Image*       IMAGE_IMITATERSEEDDISABLED;                             //0x6A71DC
    extern Image*       IMAGE_STORE_PRICETAG;                                   //0x6A71E0
    extern Image*       IMAGE_REANIM_ZOMBIE_JACKBOX_OUTERARM_LOWER2;            //0x6A71E4
    extern Image*       IMAGE_PACKET_PLANTS;                                    //0x6A71E8
    extern int          SOUND_PLANT;                                            //0x6A71EC
    extern Image*       IMAGE_REANIM_ZOMBIE_IMP_ARM1_BONE;                      //0x6A71F0
    extern Image*       IMAGE_ZOMBIE_NOTE2;                                     //0x6A71F4
    extern Image*       IMAGE_REANIM_CREDITS_FOGMACHINE;                        //0x6A71F8
    extern Image*       IMAGE_REANIM_ZOMBIE_BOSS_HEAD_DAMAGE2;                  //0x6A71FC
    extern Image*       IMAGE_REANIM_TALLNUT_CRACKED1;                          //0x6A7200
    extern Image*       IMAGE_COBCANNON_TARGET;                                 //0x6A7204
    extern int          SOUND_ZOMBAQUARIUM_DIE;                                 //0x6A7208
    extern Image*       IMAGE_REANIM_ZOMBIE_BOSS_JAW_DAMAGE2;                   //0x6A720C
    extern Image*       IMAGE_REANIM_SELECTORSCREEN_CHALLENGES_HIGHLIGHT;       //0x6A7210
    extern Image*       IMAGE_BACKGROUND4_GAMEOVER_MASK;                        //0x6A7214
    extern Image*       IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES4;                   //0x6A7218
    extern Image*       IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_HAND_DAMAGE1;         //0x6A721C
    extern Image*       IMAGE_CRATER_FADING;                                    //0x6A7220
    extern Font*        FONT_BRIANNETOD16;                                      //0x6A7224
    extern int          SOUND_HYDRAULIC_SHORT;                                  //0x6A7228
    extern int          SOUND_BASKETBALL;                                       //0x6A722C
    extern int          SOUND_HATCHBACK_CLOSE;                                  //0x6A7230
    extern Image*       IMAGE_REANIM_CRAZYDAVE_MOUTH4;                          //0x6A7234
    extern Image*       IMAGE_COBCANNON_POPCORN;                                //0x6A7238
    extern Image*       IMAGE_TOMBSTONES;                                       //0x6A723C
    extern Image*       IMAGE_REANIM_WALLNUT_BODY;                              //0x6A7240
    extern Image*       IMAGE_REANIM_ZOMBIE_ZAMBONI_2_DAMAGE2;                  //0x6A7244
    extern Font*        FONT_DWARVENTODCRAFT18BRIGHTGREENINSET;                 //0x6A7248
    extern Image*       IMAGE_WAVESIDE;                                         //0x6A724C
    extern Image*       IMAGE_REANIM_ZOMBIE_PAPER_LEFTARM_UPPER2;               //0x6A7250
    extern Image*       IMAGE_REANIM_ZOMBIE_CATAPULT_POLE_WITHBALL;             //0x6A7254
    extern Image*       IMAGE_BUTTON_RIGHT;                                     //0x6A7258
    extern Image*       IMAGE_STORE_TREEOFWISDOMICON;                           //0x6A725C
    extern Image*       IMAGE_ZOMBIEIMPHEAD;                                    //0x6A7260
    extern Image*       IMAGE_ZOMBIEBALLOONHEAD;                                //0x6A7264
    extern Image*       IMAGE_SELECTORSCREEN_QUIT2;                             //0x6A7268
    extern Image*       IMAGE_BACKGROUND1_GAMEOVER_MASK;                        //0x6A726C
    extern Image*       IMAGE_REANIM_ZOMBIE_PAPER_PAPER2;                       //0x6A7270
    extern int          SOUND_BOING;                                            //0x6A7274
    extern Image*       IMAGE_SNOWFLAKES;                                       //0x6A7278
    extern int          SOUND_LADDER_ZOMBIE;                                    //0x6A727C
    extern Image*       IMAGE_REANIM_ZOMBIE_DIGGER_HARDHAT2;                    //0x6A7280
    extern Image*       IMAGE_REANIM_CORNPULT_BUTTER;                           //0x6A7284
    extern int          SOUND_SUKHBIR2;                                         //0x6A7288
    extern int          SOUND_PUFF;                                             //0x6A728C
    extern int          SOUND_DOLPHIN_APPEARS;                                  //0x6A7290
    extern Image*       IMAGE_REANIM_CRAZYDAVE_MOUTH6;                          //0x6A7294
    extern Image*       IMAGE_SOD3ROW;                                          //0x6A7298
    extern Image*       IMAGE_SELECTORSCREEN_ALMANACHIGHLIGHT;                  //0x6A729C
    extern Image*       IMAGE_BUTTON_LEFT;                                      //0x6A72A0
    extern Image*       IMAGE_ZOMBIE_FINAL_NOTE;                                //0x6A72A4
    extern int          SOUND_CERAMIC;                                          //0x6A72A8
    extern Image*       IMAGE_ZEN_GOLDTOOLRETICLE;                              //0x6A72AC
    extern Image*       IMAGE_STORE_SPEECHBUBBLE;                               //0x6A72B0
    extern Image*       IMAGE_ZOMBIE_NOTE4;                                     //0x6A72B4
    extern int          SOUND_READYSETPLANT;                                    //0x6A72B8
    extern Image*       IMAGE_REANIM_ZOMBIE_DANCER_INNERARM_HAND;               //0x6A72BC
    extern int          SOUND_PLASTICHIT2;                                      //0x6A72C0
    extern Image*       IMAGE_WATERINGCAN;                                      //0x6A72C4
    extern Image*       IMAGE_CHALLENGE_WINDOW;                                 //0x6A72C8
    extern Image*       IMAGE_PINATA;                                           //0x6A72CC
    extern int          SOUND_EVILLAUGH;                                        //0x6A72D0
    extern int          SOUND_BOSSEXPLOSION;                                    //0x6A72D4
    extern Font*        FONT_TINYBOLD;                                          //0x6A72D8
    extern int          SOUND_GROAN5;                                           //0x6A72DC
    extern Image*       IMAGE_SELECTORSCREEN_STORE;                             //0x6A72E0
    extern Image*       IMAGE_REANIM_SUNFLOWER_HEAD_SING3;                      //0x6A72E4
    extern Image*       IMAGE_SEEDPACKETSILHOUETTE;                             //0x6A72E8
    extern Font*        FONT_DWARVENTODCRAFT15;                                 //0x6A72EC
    extern int          SOUND_POTATO_MINE;                                      //0x6A72F0
    extern Image*       IMAGE_ZOMBIE_BOSS_ICEBALL_GROUNDPARTICLES;              //0x6A72F4
    extern Image*       IMAGE_REANIM_ZOMBIE_CATAPULT_BASKETBALL;                //0x6A72F8
    extern Image*       IMAGE_REANIM_WALLNUT_CRACKED1;                          //0x6A72FC
    extern Image*       IMAGE_REANIM_COIN_SILVER_DOLLAR;                        //0x6A7300
    extern int          SOUND_GRAVEBUSTERCHOMP;                                 //0x6A7304
    extern Image*       IMAGE_REANIM_WINTERMELON_PROJECTILE;                    //0x6A7308
    extern Image*       IMAGE_REANIM_ZOMBIE_YETI_OUTERARM_UPPER2;               //0x6A730C
    extern Image*       IMAGE_DIALOG_BIGBOTTOMMIDDLE;                           //0x6A7310
    extern Font*        FONT_DWARVENTODCRAFT18;                                 //0x6A7314
    extern Image*       IMAGE_BACKGROUND2_GAMEOVER_INTERIOR_OVERLAY;            //0x6A7318
    extern Image*       IMAGE_ZOMBIEDOLPHINRIDERHEAD;                           //0x6A731C
    extern Image*       IMAGE_ICON_POOLCLEANER;                                 //0x6A7320
    extern int          SOUND_RVTHROW;                                          //0x6A7324
    extern int          SOUND_ROLL_IN;                                          //0x6A7328
    extern int          SOUND_MONEYFALLS;                                       //0x6A732C
    extern Image*       IMAGE_REANIM_ZOMBIE_BUCKET3;                            //0x6A7330
    extern Image*       IMAGE_OPTIONS_MENUBACK;                                 //0x6A7334
    extern Image*       IMAGE_CREDITS_PLAYBUTTON;                               //0x6A7338
    extern int          SOUND_COIN;                                             //0x6A733C
    extern Image*       IMAGE_BACKGROUND1UNSODDED;                              //0x6A7340
    extern Image*       IMAGE_REANIM_SELECTORSCREEN_VASEBREAKER_HIGHLIGHT;      //0x6A7344
    extern int          SOUND_THROW2;                                           //0x6A7348
    extern int          SOUND_SUKHBIR4;                                         //0x6A734C
    extern Image*       IMAGE_REANIM_ZOMBIE_ZAMBONI_1_DAMAGE1;                  //0x6A7350
    extern int          SOUND_PORTAL;                                           //0x6A7354
    extern Image*       IMAGE_PLANTSHADOW2;                                     //0x6A7358
    extern Image*       IMAGE_DIALOG_TOPRIGHT;                                  //0x6A735C
    extern int          SOUND_NEWSPAPER_RARRGH2;                                //0x6A7360
    extern Image*       IMAGE_ZOMBIE_BOSS_FIREBALL_GROUNDPARTICLES;             //0x6A7364
    extern Image*       IMAGE_SHOVEL_HI_RES;                                    //0x6A7368
    extern int          SOUND_BUTTER;                                           //0x6A736C
    extern int		    SOUND_LOSEMUSIC;                                        //0x6A7370
    extern int          SOUND_BUGSPRAY;                                         //0x6A7374
    extern Image*       IMAGE_TREEFOOD;                                         //0x6A7378
    extern Image*       IMAGE_REANIM_ZOMBIE_FOOTBALL_HELMET2;                   //0x6A737C
    extern Image*       IMAGE_IMITATERSEED;                                     //0x6A7380
    extern Font*	    FONT_CONTINUUMBOLD14;                                   //0x6A7384
    extern Image*       IMAGE_STORE_AQUARIUMGARDENICON;                         //0x6A7388
    extern Image*       IMAGE_REANIM_ZOMBIE_ZAMBONI_2_DAMAGE1;                  //0x6A738C
    extern int          SOUND_SQUASH_HMM2;                                      //0x6A7390
    extern Image*       IMAGE_ZOMBIEYETIHEAD;                                   //0x6A7394
    extern Image*       IMAGE_REANIM_ZOMBIE_SCREENDOOR1;                        //0x6A7398
    extern Image*       IMAGE_BUTTON_DOWN_LEFT;                                 //0x6A739C
    extern int          SOUND_SQUASH_HMM;                                       //0x6A73A0
    extern Image*       IMAGE_REANIM_ZOMBIE_GARGANTUAR_BODY1_3;                 //0x6A73A4
    extern Image*       IMAGE_REANIM_GARLIC_BODY3;                              //0x6A73A8
    extern int          SOUND_SLOT_MACHINE;                                     //0x6A73AC
    extern Image*       IMAGE_REANIM_ZOMBIE_OUTERARM_HAND;                      //0x6A73B0
    extern Image*       IMAGE_REANIM_ZOMBIE_DOLPHINRIDER_OUTERARM_UPPER2;       //0x6A73B4
    extern Image*       IMAGE_REANIM_ZOMBIE_BUCKET1;                            //0x6A73B8
    extern Image*       IMAGE_MELONPULT_PARTICLES;                              //0x6A73BC
    extern Image*       IMAGE_STORE_PREVBUTTONDISABLED;                         //0x6A73C0
    extern int          SOUND_POOL_CLEANER;                                     //0x6A73C4
    extern Image*       IMAGE_CONVEYORBELT;                                     //0x6A73C8
    extern Image*       IMAGE_ALMANAC_GROUNDNIGHTPOOL;                          //0x6A73CC
    extern Image*       IMAGE_WALLNUTPARTICLESLARGE;                            //0x6A73D0
    extern Image*       IMAGE_ZOMBIE_NOTE_HELP;                                 //0x6A73D4
    extern Image*       IMAGE_ZOMBIE_NOTE1;                                     //0x6A73D8
    extern Image*       IMAGE_STORE_HATCHBACKOPEN;                              //0x6A73DC
    extern Image*       IMAGE_SEEDS;                                            //0x6A73E0
    extern Image*       IMAGE_REANIM_ZOMBIE_CONE2;                              //0x6A73E4
    extern Image*       IMAGE_POTATOMINE_PARTICLES;                             //0x6A73E8
    extern int          SOUND_IMP2;                                             //0x6A73EC
    extern Image*       IMAGE_REANIM_ZOMBIE_DIGGER_PICKAXE;                     //0x6A73F0
    extern Image*       IMAGE_ALMANAC_INDEXBUTTONHIGHLIGHT;                     //0x6A73F4
    extern int          SOUND_YUCK2;                                            //0x6A73F8
    extern Image*       IMAGE_ALMANAC_INDEXBUTTON;                              //0x6A73FC
    extern Image* IMAGE_ALMANAC_INDEXBUTTONHIGHLIGHT_FLIP;                     //0x6A73F4
  //  extern int          SOUND_YUCK2;                                            //0x6A73F8
    extern Image* IMAGE_ALMANAC_INDEXBUTTON_FLIP;
    extern Image*       IMAGE_REANIM_ZOMBIE_CATAPULT_POLE_DAMAGE_WITHBALL;      //0x6A7400
    extern Image*       IMAGE_REANIM_SELECTORSCREEN_KEY_SHADOW;                 //0x6A7404
    extern Image*       IMAGE_PROJECTILESNOWPEA;                                //0x6A7408
    extern Image*       IMAGE_AWARDPICKUPGLOW;                                  //0x6A740C
    extern Image*       IMAGE_WALLNUT_BOWLINGSTRIPE;                            //0x6A7410
    extern int          SOUND_PLANT_WATER;                                      //0x6A7414
    extern Image*       IMAGE_POOL_CAUSTIC_EFFECT;                              //0x6A7418
    extern Image*       IMAGE_DIALOG_HEADER;                                    //0x6A741C
    extern Image*       IMAGE_ZOMBIE_BOBSLED1;                                  //0x6A7420
    extern Image*       IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_HAND_DAMAGE2;         //0x6A7424
    extern Image*       IMAGE_ZAMBONISMOKE;                                     //0x6A7428
    extern Image*       IMAGE_SELECTORSCREEN_ZENGARDEN;                         //0x6A742C
    extern Image*       IMAGE_SEEDPACKET_LARGER;                                //0x6A7430
    extern Image*       IMAGE_STORE_FIRSTAIDWALLNUTICON;                        //0x6A7434
    extern int          SOUND_JACK_SURPRISE;                                    //0x6A7438
    extern Image*       IMAGE_PHONOGRAPH;                                       //0x6A743C
    extern Image*       IMAGE_BACKGROUND5_GAMEOVER_MASK;                        //0x6A7440
    extern Image*       IMAGE_REANIM_ZOMBIE_BOSS_FOOT_DAMAGE2;                  //0x6A7444
    extern Image*       IMAGE_FLAGMETER;                                        //0x6A7448
    extern Image*       IMAGE_BUG_SPRAY;                                        //0x6A744C
    extern Image*       IMAGE_AWARDSCREEN_BACK;                                 //0x6A7450
    extern int		    SOUND_TAPGLASS;                                         //0x6A7454
    extern int          SOUND_IGNITE;                                           //0x6A7458
    extern Image*       IMAGE_REANIM_ZOMBIE_IMP_ARM2;                           //0x6A745C
    extern Image*       IMAGE_SEEDCHOOSER_BACKGROUND;                           //0x6A7460
    extern Image*       IMAGE_REANIM_ZOMBIE_PAPER_PAPER3;                       //0x6A7464
    extern Image*       IMAGE_REANIM_STINKY_TURN3;                              //0x6A7468
    extern Image*       IMAGE_AQUARIUM1;                                        //0x6A746C
    extern int          SOUND_CRAZYDAVESHORT1;                                  //0x6A7470
    extern Image*       IMAGE_SUNFLOWER_TROPHY;                                 //0x6A7474
    extern Image*       IMAGE_REANIM_ZOMBIE_MUSTACHE3;                          //0x6A7478
    extern Image*       IMAGE_FLAGMETERLEVELPROGRESS;                           //0x6A747C
    extern Image*       IMAGE_BACKGROUND3_GAMEOVER_MASK;                        //0x6A7480
    extern Image*       IMAGE_WHITEWATER_SHADOW;                                //0x6A7484
    extern Image*       IMAGE_REANIM_SELECTORSCREEN_STARTADVENTURE_HIGHLIGHT;   //0x6A7488
    extern Image*       IMAGE_POOL_BASE_NIGHT;                                  //0x6A748C
    extern Image*       IMAGE_REANIM_ZOMBIE_GARGANTUAR_OUTERARM_LOWER2;         //0x6A7490
    extern Image*       IMAGE_REANIM_ZOMBIE_FOOTBALL_LEFTARM_HAND;              //0x6A7494
    extern Font*        FONT_PICO129;                                           //0x6A7498
    extern Image*       IMAGE_REANIM_ZOMBIE_POLEVAULTER_OUTERARM_UPPER2;        //0x6A749C
    extern Image*       IMAGE_STORE_CARCLOSED;                                  //0x6A74A0
    extern Image*       IMAGE_ALMANAC_PLANTCARD;                                //0x6A74A4
    extern int          SOUND_SWING;                                            //0x6A74A8
    extern int          SOUND_PLANTGROW;                                        //0x6A74AC
    extern Font*        FONT_HOUSEOFTERROR16;                                   //0x6A74B0
    extern Image*       IMAGE_LOCK_OPEN;                                        //0x6A74B4
    extern Image*       IMAGE_REANIM_GARLIC_BODY2;                              //0x6A74B8
    extern int          SOUND_MELONIMPACT;                                      //0x6A74BC
    extern Image*       IMAGE_REANIM_ZOMBIE_SNORKLE_OUTERARM_UPPER2;            //0x6A74C0
    extern int          SOUND_PHONOGRAPH;                                       //0x6A74C4
    extern Image*       IMAGE_REANIM_ZOMBIE_DIGGER_OUTERARM_UPPER2;             //0x6A74C8
    extern Image*       IMAGE_DIALOG_TOPLEFT;                                   //0x6A74CC
    extern Image*       IMAGE_DIALOG_BIGBOTTOMLEFT;                             //0x6A74D0
    extern Image*       IMAGE_TITLESCREEN;                                      //0x6A74D4
    extern int          SOUND_CHOMP;                                            //0x6A74D8
    extern Image*       IMAGE_REANIM_ZOMBIE_GARGANTUAR_DUCKXING;                //0x6A74DC
    extern Image*       IMAGE_REANIM_SODROLLCAP;                                //0x6A74E0
    extern int		    SOUND_HUGE_WAVE;                                        //0x6A74E4
    extern Image*       IMAGE_ZOMBIEFOOTBALLHEAD;                               //0x6A74E8
    extern Image*       IMAGE_WATERINGCANGOLD;                                  //0x6A74EC
    extern int          SOUND_CRAZYDAVEEXTRALONG2;                              //0x6A74F0
    extern Image*       IMAGE_REANIM_SUNFLOWER_HEAD_SING2;                      //0x6A74F4
    extern Image*       IMAGE_PROJECTILE_STAR;                                  //0x6A74F8
    extern Image*       IMAGE_STORE_PACKETUPGRADE;                              //0x6A74FC
    extern Image*       IMAGE_REANIM_ZOMBIE_POGO_STICKHANDS2;                   //0x6A7500
    extern Image*       IMAGE_REANIM_ZOMBIE_CONE1;                              //0x6A7504
    extern Image*       IMAGE_REANIM_CRAZYDAVE_MOUTH1;                          //0x6A7508
    extern Image*       IMAGE_REANIM_SELECTORSCREEN_SURVIVAL_BUTTON;            //0x6A750C
    extern Image*       IMAGE_RAIN;                                             //0x6A7510
    extern Image*       IMAGE_FOG;                                              //0x6A7514
    extern int          SOUND_CHOMPSOFT;                                        //0x6A7518
    extern Image*       IMAGE_SELECTORSCREEN_QUIT1;                             //0x6A751C
    extern Image*       IMAGE_REANIM_ZOMBIE_GARGANTUAR_ZOMBIE;                  //0x6A7520
    extern Image*       IMAGE_SEEDCHOOSER_IMITATERADDON;                        //0x6A7524
    extern Image*       IMAGE_REANIM_ZOMBIE_DIGGER_HARDHAT3;                    //0x6A7528
    extern Image*       IMAGE_ALMANAC_GROUNDICE;                                //0x6A752C
    extern int          SOUND_GARGANTUDEATH;                                    //0x6A7530
    extern Image*       IMAGE_REANIM_ZOMBIE_POGO_OUTERARM_UPPER2;               //0x6A7534
    extern Image*       IMAGE_ZEN_WHEELBARROW;                                  //0x6A7538
    extern Image*       IMAGE_ZEN_NEED_ICONS;                                   //0x6A753C
    extern Image*       IMAGE_CHOCOLATE;                                        //0x6A7540
    extern int          SOUND_LOWGROAN2;                                        //0x6A7544
    extern Image*       IMAGE_SELECTORSCREEN_ZENGARDENHIGHLIGHT;                //0x6A7548
    extern Image*       IMAGE_NIGHT_GRAVE_GRAPHIC;                              //0x6A754C
    extern int          SOUND_COFFEE;                                           //0x6A7550
    extern Image*       IMAGE_REANIM_WALLNUT_CRACKED2;                          //0x6A7554
    extern Image*       IMAGE_REANIM_SUNFLOWER_HEAD_SING1;                      //0x6A7558
    extern int          SOUND_FINALFANFARE;                                     //0x6A755C
    extern Image*       IMAGE_STORE_CARCLOSED_NIGHT;                            //0x6A7560
    extern int          SOUND_KERNELPULT;                                       //0x6A7564
    extern Image*       IMAGE_BACKGROUND1_GAMEOVER_INTERIOR_OVERLAY;            //0x6A7568
    extern int          SOUND_VASE_BREAKING;                                    //0x6A756C
    extern Image*       IMAGE_FOG_SOFTWARE;                                     //0x6A7570
    extern Image*       IMAGE_BACKGROUND4;                                      //0x6A7574
    extern int          SOUND_GARGANTUAR_THUMP;                                 //0x6A7578
    extern Image*       IMAGE_TACO;                                             //0x6A757C
    extern int          SOUND_ZOMBIE_ENTERING_WATER;                            //0x6A7580
    extern int		    SOUND_AWOOGA;                                           //0x6A7584
    extern int		    SOUND_BUNGEE_SCREAM;                                    //0x6A7588
    extern Image*       IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_THUMB_DAMAGE1;        //0x6A758C
    extern Image*       IMAGE_SELECTORSCREEN_OPTIONS1;                          //0x6A7590
    extern int		    SOUND_BUTTONCLICK;                                      //0x6A7594
    extern Image*       IMAGE_BACKGROUND_MUSHROOMGARDEN;                        //0x6A7598
    extern Image*       IMAGE_REANIM_ZOMBIE_LADDER_OUTERARM_UPPER2;             //0x6A759C
    extern Image*       IMAGE_REANIM_ZOMBIE_CATAPULT_POLE_DAMAGE;               //0x6A75A0
    extern Image*       IMAGE_ALMANAC_CLOSEBUTTONHIGHLIGHT;                     //0x6A75A4
    extern int          SOUND_SUKHBIR3;                                         //0x6A75A8
    extern Image*       IMAGE_CHALLENGE_WINDOW_HIGHLIGHT;                       //0x6A75AC
    extern Image*       IMAGE_ZOMBIEPOLEVAULTERHEAD;                            //0x6A75B0
    extern Image*       IMAGE_ZEN_NEXTGARDEN;                                   //0x6A75B4
    extern Image*       IMAGE_POOLSPARKLY;                                      //0x6A75B8
    extern Image*       IMAGE_REANIM_ZOMBIE_JACKSON_OUTERARM_HAND;              //0x6A75BC
    extern Image*       IMAGE_FLAGMETERPARTS;                                   //0x6A75C0
    extern Image*       IMAGE_REANIM_ZOMBIE_GARGANTUAR_BODY1_2;                 //0x6A75C4
    extern Font*        FONT_HOUSEOFTERROR20;                                   //0x6A75C8
    extern Image*       IMAGE_ZEN_GARDENGLOVE;                                  //0x6A75CC
    extern Image*       IMAGE_OPTIONS_BACKTOGAMEBUTTON0;                        //0x6A75D0
    extern Font*        FONT_DWARVENTODCRAFT36BRIGHTGREENINSET;                 //0x6A75D4
    extern int          SOUND_CRAZYDAVESCREAM2;                                 //0x6A75D8
    extern int		    SOUND_FINALWAVE;                                        //0x6A75DC
    extern int          SOUND_CHIME;                                            //0x6A75E0
    extern Image*       IMAGE_SEEDCHOOSER_BUTTON2;                              //0x6A75E4
    extern Image*       IMAGE_STORE_MUSHROOMGARDENICON;                         //0x6A75E8
    extern int		    SOUND_LIGHTFILL;                                        //0x6A75EC
    extern Image*       IMAGE_REANIM_ZOMBIE_LADDER_5;                           //0x6A75F0
    extern Image*       IMAGE_REANIM_CRAZYDAVE_MOUTH5;                          //0x6A75F4
    extern int          SOUND_PLANTERN;                                         //0x6A75F8
    extern Image*       IMAGE_SELECTORSCREEN_OPTIONS2;                          //0x6A75FC
    extern Image*       IMAGE_REANIM_ZOMBIE_ZAMBONI_WHEEL_FLAT;                 //0x6A7600
    extern Image*       IMAGE_REANIM_ZOMBIE_JACKBOX_BOX;                        //0x6A7604
    extern Image*       IMAGE_POOL_NIGHT;                                       //0x6A7608
    extern Image*       IMAGE_ICETRAP_PARTICLES;                                //0x6A760C
    extern Image*       IMAGE_ALMANAC_ZOMBIEWINDOW;                             //0x6A7610
    extern Image*       IMAGE_CHALLENGE_THUMBNAILS;                             //0x6A7614
    extern int          SOUND_PAPER;                                            //0x6A7618
    extern Image*       IMAGE_SELECTORSCREEN_HELP1;                             //0x6A761C
    extern Image*       IMAGE_REANIM_ZOMBIE_POGO_STICK2DAMAGE2;                 //0x6A7620
    extern Image*       IMAGE_REANIM_ZOMBIE_LADDER_1_DAMAGE1;                   //0x6A7624
    extern Image*       IMAGE_IMITATERPUFFS;                                    //0x6A7628
    extern Image*       IMAGE_DIALOG_TOPMIDDLE;                                 //0x6A762C
    extern Font*        FONT_DWARVENTODCRAFT12;                                 //0x6A7630
    extern Image*       IMAGE_POOL_BASE;                                        //0x6A7634
    extern Image*       IMAGE_TOMBSTONE_MOUNDS;                                 //0x6A7638
    extern Image*       IMAGE_STORE_CAR;                                        //0x6A763C
    extern int          SOUND_CHOMP2;                                           //0x6A7640
    extern Image*       IMAGE_STORE_NEXTBUTTON;                                 //0x6A7644
    extern Image*       IMAGE_SNOWPEA_PUFF;                                     //0x6A7648
    extern Image*       IMAGE_ICE_SPARKLES;                                     //0x6A764C
    extern int          SOUND_SNOW_PEA_SPARKLES;                                //0x6A7650
    extern Image*       IMAGE_CRATER_WATER_NIGHT;                               //0x6A7654
    extern Image*       IMAGE_ZOMBIE_NOTE3;                                     //0x6A7658
    extern Image*       IMAGE_ALMANAC_INDEXBACK;                                //0x6A765C
    extern Image*       IMAGE_ALMANAC_CLOSEBUTTON;                              //0x6A7660
    extern Image*       IMAGE_REANIM_COBCANNON_COB;                             //0x6A7664
    extern Image*       IMAGE_CONVEYORBELT_BACKDROP;                            //0x6A7668
    extern Image*       IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES1;                   //0x6A766C
    extern Image*       IMAGE_REANIM_POT_TOP_DARK;                              //0x6A7670
    extern Image*       IMAGE_STORE_SIGN;                                       //0x6A7674
    extern int          SOUND_IMP;                                              //0x6A7678
    extern Image*       IMAGE_ALMANAC_IMITATER;                                 //0x6A767C
    extern Image*       IMAGE_BACKGROUND6BOSS;                                  //0x6A7680
    extern Image*       IMAGE_REANIM_DIAMOND;                                   //0x6A7684
    extern Image*       IMAGE_PRESENTOPEN;                                      //0x6A7688
    extern Image*       IMAGE_POOL_SHADING;                                     //0x6A768C
    extern Image*       IMAGE_REANIM_ZOMBIE_SCREENDOOR3;                        //0x6A7690
    extern Image*       IMAGE_REANIM_ZOMBIE_GARGANTUAR_HEAD2_REDEYE;            //0x6A7694
    extern Image*       IMAGE_ALMANAC_ZOMBIEBLANK;                              //0x6A7698
    extern int          SOUND_JALAPENO;                                         //0x6A769C
    extern int		    SOUND_GRAVEBUTTON;                                      //0x6A76A0
    extern Image*       IMAGE_ZOMBOSS_PARTICLES;                                //0x6A76A4
    extern Image*       IMAGE_PROJECTILEPEA;                                    //0x6A76A8
    extern int          SOUND_GROAN2;                                           //0x6A76AC
    extern Image*       IMAGE_REANIM_ZOMBIE_LADDER_1;                           //0x6A76B0
    extern int          SOUND_LOADINGBAR_FLOWER;                                //0x6A76B4
    extern Image*       IMAGE_ALMANAC_ZOMBIEBACK;                               //0x6A76B8
    extern int          SOUND_THUNDER;                                          //0x6A76BC
    extern Image*       IMAGE_STAR_SPLATS;                                      //0x6A76C0
    extern Image*       IMAGE_REANIM_SELECTORSCREEN_SURVIVAL_HIGHLIGHT;         //0x6A76C4
    extern Image*       IMAGE_PROJECTILECACTUS;                                 //0x6A76C8
    extern int          SOUND_THROW;                                            //0x6A76CC
    extern int          SOUND_GROAN3;                                           //0x6A76D0
    extern Image*       IMAGE_ZOMBIE_SEAWEED;                                   //0x6A76D4
    extern Image*       IMAGE_REANIM_ZOMBIE_OUTERARM_UPPER2;                    //0x6A76D8
    extern Image*       IMAGE_REANIM_ZOMBIE_GARGANTUAR_FOOT2;                   //0x6A76DC
    extern int          SOUND_SPLAT;                                            //0x6A76E0
    extern int          SOUND_NEWSPAPER_RARRGH;                                 //0x6A76E4
    extern Image*       IMAGE_REANIM_SUNFLOWER_HEAD_SING4;                      //0x6A76E8
    extern int          SOUND_CRAZYDAVEEXTRALONG3;                              //0x6A76EC
    extern Image*       IMAGE_DIALOG_BOTTOMRIGHT;                               //0x6A76F0
    extern Image*       IMAGE_REANIM_ZOMBIE_FOOTBALL_HELMET;                    //0x6A76F4
    extern Image*       IMAGE_REANIM_SUNFLOWER_HEAD_WINK;                       //0x6A76F8
    extern Image*       IMAGE_SEEDCHOOSER_BUTTON_DISABLED;                      //0x6A76FC
    extern Image*       IMAGE_REANIM_CORNPULT_KERNAL;                           //0x6A7700
    extern Image*       IMAGE_ALMANAC_GROUNDNIGHT;                              //0x6A7704
    extern int          SOUND_DIAMOND;                                          //0x6A7708
    extern Image*       IMAGE_REANIM_ZOMBIE_YETI_OUTERARM_HAND;                 //0x6A770C
    extern Image*       IMAGE_PEA_PARTICLES;                                    //0x6A7710
    extern Font*	    FONT_HOUSEOFTERROR28;                                   //0x6A7714
    extern int          SOUND_SUKHBIR;                                          //0x6A7718
    extern Image*       IMAGE_ZOMBIE_BOSS_FIREBALL_PARTICLES;                   //0x6A771C
    extern Image*       IMAGE_PVZ_LOGO;                                         //0x6A7720
    extern Image*	    IMAGE_BACKGROUND5;                                      //0x6A7724
    extern int          SOUND_DIRT_RISE;                                        //0x6A7728
    extern Image*	    IMAGE_DIRTSMALL;                                        //0x6A772C
    extern Image*	    IMAGE_STORE_NEXTBUTTONHIGHLIGHT;                        //0x6A7730
    extern Font*	    FONT_CONTINUUMBOLD14OUTLINE;                            //0x6A7734
    extern int          SOUND_LOADINGBAR_ZOMBIE;                                //0x6A7738
    extern Image*	    IMAGE_CHALLENGE_BLANK;                                  //0x6A773C
    extern int          SOUND_BLEEP;                                            //0x6A7740
    extern Image*       IMAGE_SPOTLIGHT2;                                       //0x6A7744
    extern Image*       IMAGE_REANIM_ZENGARDEN_BUGSPRAY_BOTTLE;                 //0x6A7748
    extern int          SOUND_IGNITE2;                                          //0x6A774C
    extern Image*       IMAGE_ZOMBIE_NOTE_SMALL;                                //0x6A7750
    extern Image*       IMAGE_ROCKSMALL;                                        //0x6A7754
    extern Image*       IMAGE_REANIM_SELECTORSCREEN_WOODSIGN2_PRESS;            //0x6A7758
    extern Image*       IMAGE_IMITATERCLOUDS;                                   //0x6A775C
    extern Image*       IMAGE_ALMANAC_GROUNDROOF;                               //0x6A7760
    extern int          SOUND_SHOOP;                                            //0x6A7764
    extern Image*       IMAGE_ZOMBIEPOGO;                                       //0x6A7768
    extern Image*       IMAGE_MONEYBAG_HI_RES;                                  //0x6A776C
    extern Image*       IMAGE_REANIM_ZOMBIE_BOSS_MOUTHGLOW_BLUE;                //0x6A7770
    extern Image*	    IMAGE_LOCK;                                             //0x6A7774
    extern Image*	    IMAGE_WALLNUTPARTICLESSMALL;                            //0x6A7778
    extern int          SOUND_YUCK;                                             //0x6A777C
    extern Image*	    IMAGE_SEEDCHOOSER_BUTTON2_GLOW;                         //0x6A7780
    extern Image*       IMAGE_REANIM_ZOMBIE_GARGANTUAR_HEAD_REDEYE;             //0x6A7784
    extern Image*	    IMAGE_ICE;                                              //0x6A7788
    extern Image*	    IMAGE_STORE_BACKGROUND;                                 //0x6A778C
    extern int          SOUND_JUICY;                                            //0x6A7790
    extern int		    SOUND_GULP;                                             //0x6A7794
    extern Image*       IMAGE_GOOGLYEYE;
    extern Image*	    IMAGE_BACKGROUND2_GAMEOVER_MASK;                        //0x6A7798
    extern int		    SOUND_POINTS;                                           //0x6A779C
    extern Image*	    IMAGE_DIRTBIG;                                          //0x6A77A0
    extern Image*	    IMAGE_DIALOG_CENTERMIDDLE;                              //0x6A77A4
    extern Image*	    IMAGE_ZOMBIEBOBSLEDHEAD;                                //0x6A77A8
    extern int          SOUND_WAKEUP;                                           //0x6A77AC
    extern Image*	    IMAGE_STAR_PARTICLES;                                   //0x6A77B0
    extern Image*	    IMAGE_CRATER_ROOF_LEFT;                                 //0x6A77B4
    extern Font*	    FONT_DWARVENTODCRAFT36GREENINSET;                       //0x6A77B8
    extern Image*	    IMAGE_BLANK;                                            //0x6A77BC
    extern Image*	    IMAGE_DIALOG_BOTTOMLEFT;                                //0x6A77C0
    extern Image*	    IMAGE_BACKGROUND1;                                      //0x6A77C4
    extern Image*	    IMAGE_REANIM_ZOMBIE_SCREENDOOR2;                        //0x6A77C8
    extern Image*	    IMAGE_REANIM_ZOMBIE_LADDER_1_DAMAGE2;                   //0x6A77CC
    extern Image*       IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES2;                   //0x6A77D0
    extern Image*       IMAGE_REANIM_ZOMBIE_CONE3;                              //0x6A77D4
    extern Image*       IMAGE_REANIM_TALLNUT_CRACKED2;                          //0x6A77D8
    extern int          SOUND_ZAMBONI;                                          //0x6A77DC
    extern Image*	    IMAGE_SEEDCHOOSER_BUTTON_GLOW;                          //0x6A77E0
    extern Image*       IMAGE_MONEYBAG;                                         //0x6A77E4
    extern int          SOUND_WATERING;                                         //0x6A77E8
    extern int          SOUND_FROZEN;                                           //0x6A77EC
    extern Image*       IMAGE_ZOMBIEBACKUPDANCERHEAD;                           //0x6A77F0
    extern Image*       IMAGE_SUNBANK;                                          //0x6A77F4
    extern Font*	    FONT_BRIANNETOD12;                                      //0x6A77F8
    extern Image*	    IMAGE_STORE_CAR_NIGHT;                                  //0x6A77FC
    extern int          SOUND_SUKHBIR5;                                         //0x6A7800
    extern Image*	    IMAGE_STORE_NEXTBUTTONDISABLED;                         //0x6A7804
    extern Image*	    IMAGE_STORE_MAINMENUBUTTONHIGHLIGHT;                    //0x6A7808
    extern Image*	    IMAGE_CHALLENGE_BACKGROUND;                             //0x6A780C
    extern int          SOUND_HYDRAULIC;                                        //0x6A7810
    extern int          SOUND_FUME;                                             //0x6A7814
    extern Image*	    IMAGE_ZOMBIELADDERHEAD;                                 //0x6A7818
    extern Image*	    IMAGE_REANIM_ZOMBIE_FLAG3;                              //0x6A781C
    extern Image*	    IMAGE_REANIM_ZOMBIE_GARGANTUAR_HEAD2;                   //0x6A7820
    extern Image*	    IMAGE_CREDITS_ZOMBIENOTE;                               //0x6A7824
    extern int          SOUND_SEEDLIFT;                                         //0x6A7828
    extern Image*	    IMAGE_REANIM_ZOMBIE_POGO_STICK2DAMAGE1;                 //0x6A782C
    extern Image*	    IMAGE_PUFFSHROOM_PUFF1;                                 //0x6A7830
    extern Image*	    IMAGE_SELECTORSCREEN_ALMANAC;                           //0x6A7834
    extern Image*	    IMAGE_REANIM_ZOMBIE_ZAMBONI_1_DAMAGE2;                  //0x6A7838
    extern Image*	    IMAGE_ICON_RAKE;                                        //0x6A783C
    extern Image*	    IMAGE_SURVIVAL_THUMBNAILS;                              //0x6A7840
    extern Image*	    IMAGE_ALMANAC_ZOMBIEWINDOW2;                            //0x6A7844
    extern Image*	    IMAGE_ALMANAC_GROUNDDAY;                                //0x6A7848
    extern Image*	    IMAGE_SELECTORSCREEN_STOREHIGHLIGHT;                    //0x6A784C
    extern Image*	    IMAGE_BUNGEECORD;                                       //0x6A7850
    extern Image*	    IMAGE_ZOMBIE_BOBSLED_INSIDE;                            //0x6A7854
    extern Image*	    IMAGE_REANIM_ZOMBIE_BOSS_JAW_DAMAGE1;                   //0x6A7858
    extern Image*	    IMAGE_OPTIONS_SLIDERSLOT;                               //0x6A785C
    extern Image*       IMAGE_MINIGAME_TROPHY;                                  //0x6A7860
    //extern Image* IMAGE_OPTIONS_VSLIDERSLOT;
    extern Image*       IMAGE_DIALOG_CENTERLEFT;                                //0x6A7864
    extern Image*	    IMAGE_STORE_PVZICON;                                    //0x6A7868
    extern int          SOUND_FLOOP;                                            //0x6A786C
    extern Image*       IMAGE_WHITEPIXEL;                                       //0x6A7870
    extern Image*       IMAGE_REANIM_ZOMBIE_POGO_STICKDAMAGE2;                  //0x6A7874
    extern Image*       IMAGE_BRAIN;                                            //0x6A7878
    extern Image*       IMAGE_SNOWPEA_SPLATS;                                   //0x6A787C
    extern Image*       IMAGE_SLOTMACHINE_OVERLAY;                              //0x6A7880
    extern Image*       IMAGE_OPTIONS_BACKTOGAMEBUTTON2;                        //0x6A7884
    extern int          SOUND_LIMBS_POP;                                        //0x6A7888
    extern int          SOUND_DIGGER_ZOMBIE;                                    //0x6A788C
    extern Image*       IMAGE_EDITBOX;                                          //0x6A7890
    extern int          SOUND_POLEVAULT;                                        //0x6A7894
    extern int          SOUND_DOOMSHROOM;                                       //0x6A7898
    extern Image*       IMAGE_ZOMBIEFUTUREGLASSES;                              //0x6A789C
    extern Image*       IMAGE_REANIM_ZOMBIE_PAPER_LEFTARM_LOWER;                //0x6A78A0
    extern Image*       IMAGE_BUTTON_DOWN_RIGHT;                                //0x6A78A4
    extern int          SOUND_JACK_SURPRISE2;                                   //0x6A78A8
    extern Image*       IMAGE_WINTERMELON_PARTICLES;                            //0x6A78AC
    extern Image*       IMAGE_REANIM_ZOMBIE_BOSS_EYEGLOW_BLUE;                  //0x6A78B0
    extern Image*       IMAGE_PARTNER_LOGO;                                     //0x6A78B4
    extern Image*	    IMAGE_STORE_PREVBUTTONHIGHLIGHT;                        //0x6A78B8
    extern int          SOUND_TAP2;                                             //0x6A78BC
    extern int          SOUND_PLANT2;                                           //0x6A78C0
    extern Image*	    IMAGE_REANIM_ZOMBIE_POGO_STICKDAMAGE1;                  //0x6A78C4
    extern Image*	    IMAGE_REANIM_CORNPULT_BUTTER_SPLAT;                     //0x6A78C8
    extern int          SOUND_WINMUSIC;                                         //0x6A78CC
    extern Image*	    IMAGE_REANIM_ZOMBIE_FOOTBALL_LEFTARM_UPPER2;            //0x6A78D0
    extern Image*       IMAGE_REANIM_TREE_BG;                                   //0x6A78D4
    extern Image*       IMAGE_ZOMBIEJACKBOXARM;                                 //0x6A78D8
    extern Image*       IMAGE_PLANTSHADOW;                                      //0x6A78DC
    extern Image*       IMAGE_CRATER_WATER_DAY;                                 //0x6A78E0
    extern int          SOUND_SCREAM;                                           //0x6A78E4
    extern Image*       IMAGE_REANIM_MELONPULT_MELON;                           //0x6A78E8
    extern int          SOUND_REVERSE_EXPLOSION;                                //0x6A78EC
    extern int          SOUND_GROAN4;                                           //0x6A78F0
    extern Image*       IMAGE_BUTTON_MIDDLE;                                    //0x6A78F4
    extern int          SOUND_SPLAT2;                                           //0x6A78F8
    extern int		    SOUND_SIREN;                                            //0x6A78FC
    extern Image*       IMAGE_WATERDROP;                                        //0x6A7900
    extern Image*       IMAGE_REANIM_PUMPKIN_DAMAGE3;                           //0x6A7904
    extern Image*       IMAGE_REANIM_CREDITS_DISCOLIGHTS;                       //0x6A7908
    extern int          SOUND_ZOMBIE_FALLING_2;                                 //0x6A790C
    extern Image*       IMAGE_ZOMBIEDIGGERARM;                                  //0x6A7910
    extern int          SOUND_SLURP;                                            //0x6A7914
    extern int          SOUND_CRAZYDAVECRAZY;                                   //0x6A7918
    extern int		    SOUND_BONK;                                             //0x6A791C
    extern Image*       IMAGE_REANIM_COIN_GOLD_DOLLAR;                          //0x6A7920
    extern Image*       IMAGE_ZOMBIE_BOBSLED4;                                  //0x6A7924
    extern Image*       IMAGE_REANIM_CABBAGEPULT_CABBAGE;                       //0x6A7928
    extern Image*	    IMAGE_SOD1ROW;                                          //0x6A792C
    extern Image*	    IMAGE_ALMANAC;                                          //0x6A7930
    extern Image*       IMAGE_LOADBAR_GRASS;                                    //0x6A7934
    extern Image*       IMAGE_SHOVEL;                                           //0x6A7938
    extern Image*	    IMAGE_BACKGROUND4_GAMEOVER_INTERIOR_OVERLAY;            //0x6A793C
    extern Image*       IMAGE_CARKEYS;                                          //0x6A7940
    extern int          SOUND_DANCER;                                           //0x6A7944
    extern Image*       IMAGE_WHITEWATER;                                       //0x6A7948
    extern int          SOUND_ZOMBIE_FALLING_1;                                 //0x6A794C
    extern Image*	    IMAGE_SEEDBANK;                                         //0x6A7950
    extern Image*	    IMAGE_REANIM_ZOMBIE_SNORKLE_HEAD;                       //0x6A7954
    extern Image*       IMAGE_REANIM_SUNFLOWER_HEAD_SING5;                      //0x6A7958
    extern Image*       IMAGE_REANIM_ZOMBIE_HEAD_GROSSOUT;                      //0x6A795C
    extern Image*       IMAGE_REANIM_ZOMBIE_BOBSLED_OUTERARM_HAND;              //0x6A7960
    extern int          SOUND_LOWGROAN;                                         //0x6A7964
    extern int          SOUND_BUNGEE_SCREAM2;                                   //0x6A7968
    extern Image*       IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES3;                   //0x6A796C
    extern int          SOUND_BLOVER;                                           //0x6A7970
    extern int          SOUND_SHIELDHIT2;                                       //0x6A7974
    extern Image*       IMAGE_REANIM_SELECTORSCREEN_VASEBREAKER_BUTTON;         //0x6A7978
    extern Image*       IMAGE_ALMANAC_GROUNDPOOL;                               //0x6A797C
    extern int		    SOUND_TAP;                                              //0x6A7980
    extern Image*       IMAGE_BUTTON_DOWN_MIDDLE;                               //0x6A7984
    extern int          SOUND_PRIZE;                                            //0x6A7988
    extern Image*       IMAGE_ICETRAP2;                                         //0x6A798C
    extern Font*        FONT_BRIANNETOD32BLACK;                                 //0x6A7990
    extern Image*       IMAGE_ZOMBIE_BOBSLED2;                                  //0x6A7994
    extern Image*       IMAGE_REANIM_ZOMBIE_BUNGI_HEAD_SCARED;                  //0x6A7998
    extern int          SOUND_NEWSPAPER_RIP;                                    //0x6A799C
    extern Image*       IMAGE_ICE_CAP;                                          //0x6A79A0
    extern Image*       IMAGE_DUST_PUFFS;                                       //0x6A79A4
    extern int          SOUND_LAWNMOWER;                                        //0x6A79A8
    extern int          SOUND_BOSSBOULDERATTACK;                                //0x6A79AC
    extern Image*       IMAGE_ICON_ROOFCLEANER;                                 //0x6A79B0
    extern Image*       IMAGE_LOADBAR_DIRT;                                     //0x6A79B4
    extern Image*	    IMAGE_STORE_PREVBUTTON;                                 //0x6A79B8
    extern int          SOUND_FERTILIZER;                                       //0x6A79BC
    extern int          SOUND_CRAZYDAVELONG2;                                   //0x6A79C0
    extern Image*	    IMAGE_WATERPARTICLE;                                    //0x6A79C4
    extern int          SOUND_GROAN6;                                           //0x6A79C8
    extern Image*	    IMAGE_SEEDCHOOSER_BUTTON;                               //0x6A79CC
    extern Image*	    IMAGE_SELECTORSCREEN_HELP2;                             //0x6A79D0
    extern Image*	    IMAGE_REANIM_PUMPKIN_DAMAGE1;                           //0x6A79D4
    extern Image*	    IMAGE_POOL_SHADING_NIGHT;                               //0x6A79D8
    extern Image*	    IMAGE_DIALOG_BIGBOTTOMRIGHT;                            //0x6A79DC
    extern Image*	    IMAGE_STORE_MAINMENUBUTTONDOWN;                         //0x6A79E0
    extern Image*	    IMAGE_SPOTLIGHT;                                        //0x6A79E4
    extern int          SOUND_BOWLINGIMPACT2;                                   //0x6A79E8
    extern Image*       IMAGE_STORE_SPEECHBUBBLE2;                              //0x6A79EC
    extern int          SOUND_SUKHBIR6;                                         //0x6A79F0
    extern Font*	    FONT_DWARVENTODCRAFT18YELLOW;                           //0x6A79F4
    extern Image*       IMAGE_REANIM_ZOMBIE_FLAG1;                              //0x6A79F8
    extern Image*       IMAGE_DIALOG_CENTERRIGHT;                               //0x6A79FC
    extern Image*	    IMAGE_COINBANK;                                         //0x6A7A00
    extern Image*       IMAGE_BEGHOULED_TWIST_OVERLAY;                          //0x6A7A04
    extern Image*       IMAGE_PRESENT;                                          //0x6A7A08
    extern Image*       IMAGE_BUNGEETARGET;                                     //0x6A7A0C
    extern Image*       IMAGE_ZOMBIE_BOSS_ICEBALL_PARTICLES;                    //0x6A7A10
    extern Image*       IMAGE_ALMANAC_PLANTBACK;                                //0x6A7A14
    extern int          SOUND_RAIN;                                             //0x6A7A18
    extern int          SOUND_CHERRYBOMB;                                       //0x6A7A1C
    extern int          SOUND_BIGCHOMP;                                         //0x6A7A20
    extern Image*       IMAGE_REANIM_SELECTORSCREEN_ADVENTURE_HIGHLIGHT;        //0x6A7A24
    extern Image*       IMAGE_DIALOG_BOTTOMMIDDLE;                              //0x6A7A28
    extern int          SOUND_PLASTICHIT;                                       //0x6A7A2C
    extern int          SOUND_MAGNETSHROOM;                                     //0x6A7A30
    extern int          SOUND_CRAZYDAVESHORT3;                                  //0x6A7A34
    extern int          SOUND_CRAZYDAVELONG1;                                   //0x6A7A38
    extern Image*       IMAGE_REANIM_SELECTORSCREEN_ALMANAC_SHADOW;             //0x6A7A3C
    extern Font*	    FONT_DWARVENTODCRAFT24;                                 //0x6A7A40
    extern Image*	    IMAGE_ZOMBIE_NOTE;                                      //0x6A7A44
    extern Image*	    IMAGE_VASE_CHUNKS;                                      //0x6A7A48
    extern Image*	    IMAGE_REANIM_ZOMBIE_BOBSLED_OUTERARM_UPPER2;            //0x6A7A4C
    extern int          SOUND_POGO_ZOMBIE;                                      //0x6A7A50
    extern Image*       IMAGE_REANIM_ZOMBIE_JACKSON_OUTERARM_UPPER2;            //0x6A7A54
    extern Image*       IMAGE_SQUIRREL;
    extern int          SOUND_FIREPEA;                                          //0x6A7A58
    extern Image*       IMAGE_ZENSHOPBUTTON_HIGHLIGHT;                          //0x6A7A5C
    extern Image*       IMAGE_REANIM_ZOMBIE_FOOTBALL_HELMET3;                   //0x6A7A60
    extern Image*       IMAGE_REANIM_ZOMBIE_BALLOON_OUTERARM_UPPER2;            //0x6A7A64
    extern Image*       IMAGE_ICETRAP;                                          //0x6A7A68
    extern int          SOUND_MELONIMPACT2;                                     //0x6A7A6C
    extern int          SOUND_JACKINTHEBOX;                                     //0x6A7A70
    extern int          SOUND_CRAZYDAVELONG3;                                   //0x6A7A74
    extern Image*       IMAGE_ZOMBIE_BOBSLED3;                                  //0x6A7A78
    extern Image*       IMAGE_REANIM_ZOMBIE_BOSS_FOOT_DAMAGE1;                  //0x6A7A7C
    extern Image*       IMAGE_OPTIONS_SLIDERKNOB2;                              //0x6A7A80
    //extern Image* IMAGE_OPTIONS_VSLIDERKNOB2;                              //0x6A7A80
    extern int          SOUND_SPLAT3;                                           //0x6A7A84
    extern int		    SOUND_BOWLING;                                          //0x6A7A88
    extern Image*       IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_THUMB_DAMAGE2;        //0x6A7A8C
    extern Image*       IMAGE_REANIM_ZOMBIE_BOSS_HEAD_DAMAGE1;                  //0x6A7A90
    extern int          SOUND_GRAVESTONE_RUMBLE;                                //0x6A7A94
    extern Image*	    IMAGE_BACKGROUND3_GAMEOVER_INTERIOR_OVERLAY;            //0x6A7A98
    extern Image*	    IMAGE_REANIM_SELECTORSCREEN_BG;                         //0x6A7A9C
    extern int          SOUND_BALLOONINFLATE;                                   //0x6A7AA0
    extern Image*       IMAGE_PLANTSPEECHBUBBLE;                                //0x6A7AA4
    extern int          SOUND_SHOVEL;                                           //0x6A7AA8
    extern int          SOUND_MINDCONTROLLED;                                   //0x6A7AAC
    extern int          SOUND_DOLPHIN_BEFORE_JUMPING;                           //0x6A7AB0
    extern int          SOUND_CRAZYDAVESHORT2;                                  //0x6A7AB4
    extern int          SOUND_BOWLINGIMPACT;                                    //0x6A7AB8
    extern Image*       IMAGE_ZENSHOPBUTTON;                                    //0x6A7ABC
    extern Image*       IMAGE_SCARY_POT;                                        //0x6A7AC0
    extern Image*       IMAGE_REANIM_SELECTORSCREEN_ADVENTURE_BUTTON;           //0x6A7AC4
    extern int          SOUND_ZOMBIESPLASH;                                     //0x6A7AC8
    extern Image*       IMAGE_PEA_SHADOWS;                                      //0x6A7ACC
    extern Image*       IMAGE_WAVECENTER;                                       //0x6A7AD0
    extern Font*	    FONT_DWARVENTODCRAFT18GREENINSET;                       //0x6A7AD4
    extern Font*        FONT_BRIANNETOD32;                                      //0x6A7AD8
    extern int          SOUND_CRAZYDAVEEXTRALONG1;                              //0x6A7ADC
    extern Image*       IMAGE_ZOMBIEDIGGERHEAD;                                 //0x6A7AE0
    extern Image*       IMAGE_REANIM_SELECTORSCREEN_CHALLENGES_BUTTON;          //0x6A7AE4
    extern Image*       IMAGE_SELECTORSCREEN_LEVELNUMBERS;                      //0x6A7AE8
    extern Image*       IMAGE_POPCAP_LOGO;                                      //0x6A7AEC
    extern Image*	    IMAGE_BACKGROUND_GREENHOUSE;                            //0x6A7AF0
    extern int          SOUND_GROAN;                                            //0x6A7AF4
    extern Image*	    IMAGE_REANIM_ZOMBIE_BUCKET2;                            //0x6A7AF8
    extern Image*	    IMAGE_SEEDPACKETFLASH;                                  //0x6A7AFC
    extern Image*	    IMAGE_REANIM_ZOMBIE_CATAPULT_POLE;                      //0x6A7B00
    extern Image*	    IMAGE_STORE_MAINMENUBUTTON;                             //0x6A7B04
    extern Image*	    IMAGE_BACKGROUND2;                                      //0x6A7B08
    extern Image*	    IMAGE_ALMANAC_ZOMBIECARD;                               //0x6A7B0C
    extern Image*	    IMAGE_REANIM_COINGLOW;                                  //0x6A7B10
    extern Image*	    IMAGE_CRATER_ROOF_CENTER;                               //0x6A7B14
    extern Image*	    IMAGE_ZOMBIEDANCERHEAD;                                 //0x6A7B18
    extern Image*       IMAGE_REANIM_ZOMBIE_MUSTACHE2;                          //0x6A7B1C
    extern Image*       IMAGE_CRATER;                                           //0x6A7B20
    extern Image*       FONT_IMAGE_HOUSEOFTERROR28;                             //0x6A7B24
    extern Image*	    IMAGE_STORE_BACKGROUNDNIGHT;                            //0x6A7B28
    extern int          SOUND_COBLAUNCH;                                        //0x6A7B2C
    extern Image*	    IMAGE_SNOWPEA_PARTICLES;                                //0x6A7B30
    extern Image*	    IMAGE_REANIM_ZOMBIE_PAPER_MADHEAD;                      //0x6A7B34
    extern Image*	    IMAGE_PEA_SPLATS;                                       //0x6A7B38
    extern int          SOUND_BUNGEE_SCREAM3;                                   //0x6A7B3C
    extern int          SOUND_BALLOON_POP;                                      //0x6A7B40
    extern Image*	    IMAGE_REANIM_SELECTORSCREEN_STARTADVENTURE_BUTTON;      //0x6A7B44
    extern Image*	    IMAGE_ZEN_MONEYSIGN;                                    //0x6A7B48
    extern Image*	    IMAGE_OPTIONS_CHECKBOX0;                                //0x6A7B4C
    extern int          SOUND_KERNELPULT2;                                      //0x6A7B50
    extern int          SOUND_EXPLOSION;                                        //0x6A7B54
    extern Image*	    IMAGE_REANIM_ZOMBIE_DIGGER_HARDHAT;                     //0x6A7B58
    extern Image*	    IMAGE_BACKGROUND_GREENHOUSE_OVERLAY;                    //0x6A7B5C
    extern int		    SOUND_BUZZER;                                           //0x6A7B60
    extern Image*       IMAGE_REANIM_ZOMBIE_CATAPULT_SIDING_DAMAGE;             //0x6A7B64
    
    int                ExtractResourcesByName(ResourceManager* theResourceManager, const char* theName);
    int                ExtractDelayLoad_AlmanacResources(ResourceManager* theResourceManager);
    int                ExtractDelayLoad_AwardScreenResources(ResourceManager* theResourceManager);
    int                ExtractDelayLoad_Background1Resources(ResourceManager* theResourceManager);
    int                ExtractDelayLoad_Background2Resources(ResourceManager* theResourceManager);
    int                ExtractDelayLoad_Background3Resources(ResourceManager* theResourceManager);
    int                ExtractDelayLoad_Background4Resources(ResourceManager* theResourceManager);
    int                ExtractDelayLoad_Background5Resources(ResourceManager* theResourceManager);
    int                ExtractDelayLoad_Background6Resources(ResourceManager* theResourceManager);
    int                ExtractDelayLoad_BackgroundUnsoddedResources(ResourceManager* theResourceManager);
    int                ExtractDelayLoad_ChallengeScreenResources(ResourceManager* theResourceManager);
    int                ExtractDelayLoad_CreditsResources(ResourceManager* theResourceManager);
    int                ExtractDelayLoad_GreenHouseGardenResources(ResourceManager* theResourceManager);
    int                ExtractDelayLoad_GreenHouseOverlayResources(ResourceManager* theResourceManager);
    int                ExtractDelayLoad_MushroomGardenResources(ResourceManager* theResourceManager);
    int                ExtractDelayLoad_StoreResources(ResourceManager* theResourceManager);
    int                ExtractDelayLoad_TreeOfWisdomResources(ResourceManager* theResourceManager);
    int                ExtractDelayLoad_ZombieFinalNoteResources(ResourceManager* theResourceManager);
    int                ExtractDelayLoad_ZombieNoteResources(ResourceManager* theResourceManager);
    int                ExtractDelayLoad_ZombieNote1Resources(ResourceManager* theResourceManager);
    int                ExtractDelayLoad_ZombieNote2Resources(ResourceManager* theResourceManager);
    int                ExtractDelayLoad_ZombieNote3Resources(ResourceManager* theResourceManager);
    int                ExtractDelayLoad_ZombieNote4Resources(ResourceManager* theResourceManager);
    int                ExtractDelayLoad_ZombieNoteHelpResources(ResourceManager* theResourceManager);
    int                ExtractDelayLoad_ZombiquariumResources(ResourceManager* theResourceManager);
    int                ExtractInitResources(ResourceManager* theResourceManager);
    int                ExtractLoaderBarResources(ResourceManager* theResourceManager);
    int                ExtractLoadingFontsResources(ResourceManager* theResourceManager);
    int                ExtractLoadingImagesResources(ResourceManager* theResourceManager);
    int                ExtractLoadingSoundsResources(ResourceManager* theResourceManager);

    /* #################################################################################################### */

    Image*              GetImageById(ResourceId theId);
    Font*               GetFontById(ResourceId theId);
    int                 GetSoundById(ResourceId theId);
    
    Image*&             GetImageRefById(ResourceId theId);
    Font*&              GetFontRefById(ResourceId theId);
    int&                GetSoundRefById(ResourceId theId);

    ResourceId          GetIdByVariable(void* theVariable);
    ResourceId          GetIdByImage(Image* theImage);
    ResourceId          GetIdByFont(Font* theFont);
    ResourceId          GetIdBySound(int theSound);
    
    //const char*         GetStringIdById(ResourceId theId);
    //ResourceId          GetIdByString(const char* theStringId);
};
extern int (*gExtractResourcesByName)(Sexy::ResourceManager* theResourceManager, const char* theName);

extern void* gResources[(int)Sexy::ResourceId::RESOURCE_ID_MAX];

#endif
