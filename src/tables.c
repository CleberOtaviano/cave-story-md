#include "tables.h"
#include "resources.h"

// Stage Info
const stage_info_def stage_info[STAGE_COUNT] = {
	{ NULL,			NULL,		NULL,		&PAL_Regu,	0,	0,	"" },
	{ PXM_Pens1,	PXE_Pens1,	TSC_Pens1,	&PAL_Regu,	16,	0,	"Arthur's House" },
	{ PXM_Eggs,		PXE_Eggs,	TSC_Eggs,	&PAL_Regu,	6,	12,	"Egg Corridor" },
	{ PXM_EggX,		PXE_EggX,	TSC_EggX,	&PAL_Regu,	7,	0,	"Egg No. 00" },
	{ PXM_Egg6,		PXE_Egg6,	TSC_Egg6,	&PAL_Regu,	5,	0,	"Egg No. 06" },
	{ PXM_EggR,		PXE_EggR,	TSC_EggR,	&PAL_Regu,	19,	0,	"Egg Observation Room" },
	{ PXM_Weed,		PXE_Weed,	TSC_Weed,	&PAL_Regu,	20,	2,	"Grasstown" },
	{ PXM_Santa,	PXE_Santa,	TSC_Santa,	&PAL_Regu,	2,	0,	"Santa's House" },
	{ PXM_Chako,	PXE_Chako,	TSC_Chako,	&PAL_Regu,	2,	0,	"Chako's House" },
	{ PXM_MazeI,	PXE_MazeI,	TSC_MazeI,	&PAL_Regu,	13,	8,	"Labyrinth I" },
	{ PXM_Sand,		PXE_Sand,	TSC_Sand,	&PAL_Regu,	18,	7,	"Sand Zone" },
	{ PXM_Mimi,		PXE_Mimi,	TSC_Mimi,	&PAL_Regu,	14,	2,	"Mimiga Village" },
	{ PXM_Cave,		PXE_Cave,	TSC_Cave,	&PAL_Regu,	3,	0,	"First Cave" },
	{ PXM_Start,	PXE_Start,	TSC_Start,	&PAL_Regu,	3,	0,	"Start Point" },
	{ PXM_Barr,		PXE_Barr,	TSC_Barr,	&PAL_Regu,	14,	0,	"Shack" },
	{ PXM_Pool,		PXE_Pool,	TSC_Pool,	&PAL_Regu,	14,	2,	"Reservoir" },
	{ PXM_Cemet,	PXE_Cemet,	TSC_Cemet,	&PAL_Regu,	14,	2,	"Graveyard" },
	{ PXM_Plant,	PXE_Plant,	TSC_Plant,	&PAL_Plant,	14,	2,	"Yamashita Farm" },
	{ PXM_Shelt,	PXE_Shelt,	TSC_Shelt,	&PAL_Regu,	19,	0,	"Shelter" },
	{ PXM_Comu,		PXE_Comu,	TSC_Comu,	&PAL_Regu,	16,	0,	"Assembly Hall" },
	{ PXM_MiBox,	PXE_MiBox,	TSC_MiBox,	&PAL_Regu,	14,	0,	"Shack" },
	{ PXM_EgEnd1,	PXE_EgEnd1,	TSC_EgEnd1,	&PAL_Regu,	19,	0,	"Side Room" },
	{ PXM_Cthu,		PXE_Cthu,	TSC_Cthu,	&PAL_Regu,	19,	0,	"Cthulhu's Abode" },
	{ PXM_Egg1,		PXE_Egg1,	TSC_Egg1,	&PAL_Regu,	5,	0,	"Egg No. 01" },
	{ PXM_Pens2,	PXE_Pens2,	TSC_Pens2,	&PAL_Regu,	16,	0,	"Arthur's House" },
	{ PXM_Malco,	PXE_Malco,	TSC_Malco,	&PAL_Regu,	2,	0,	"Power Room" },
	{ PXM_WeedS,	PXE_WeedS,	TSC_WeedS,	&PAL_Regu,	2,	0,	"Save Point" },
	{ PXM_WeedD,	PXE_WeedD,	TSC_WeedD,	&PAL_Regu,	19,	0,	"Execution Chamber" },
	{ PXM_Frog,		PXE_Frog,	TSC_Frog,	&PAL_Frog,	20,	2,	"Gum" },
	{ PXM_Curly,	PXE_Curly,	TSC_Curly,	&PAL_Regu,	18,	0,	"Sand Zone Residence" },
	{ PXM_WeedB,	PXE_WeedB,	TSC_WeedB,	&PAL_Regu,	16,	0,	"Grasstown Hut" },
	{ PXM_Stream,	PXE_Stream,	TSC_Stream,	&PAL_Regu,	17,	2,	"Main Artery" },
	{ PXM_CurlyS,	PXE_CurlyS,	TSC_CurlyS,	&PAL_Regu,	16,	0,	"Small Room" },
	{ PXM_Jenka1,	PXE_Jenka1,	TSC_Jenka1,	&PAL_Regu,	2,	0,	"Jenka's House" },
	{ PXM_Dark,		PXE_Dark,	TSC_Dark,	&PAL_Regu,	18,	0,	"Deserted House" },
	{ PXM_Gard,		PXE_Gard,	TSC_Gard,	&PAL_Regu,	9,	5,	"Sand Zone Storehouse" },
	{ PXM_Jenka2,	PXE_Jenka2,	TSC_Jenka2,	&PAL_Regu,	2,	0,	"Jenka's House" },
	{ PXM_SandE,	PXE_SandE,	TSC_SandE,	&PAL_Regu,	18,	7,	"Sand Zone" },
	{ PXM_MazeH,	PXE_MazeH,	TSC_MazeH,	&PAL_Regu,	13,	8,	"Labyrinth H" },
	{ PXM_MazeW,	PXE_MazeW,	TSC_MazeW,	&PAL_Regu,	13,	8,	"Labyrinth W" },
	{ PXM_MazeO,	PXE_MazeO,	TSC_MazeO,	&PAL_Regu,	13,	0,	"Camp" },
	{ PXM_MazeD,	PXE_MazeD,	TSC_MazeD,	&PAL_Regu,	13,	0,	"Clinic Ruins" },
	{ PXM_MazeA,	PXE_MazeA,	TSC_MazeA,	&PAL_Regu,	19,	0,	"Labyrinth Shop" },
	{ PXM_MazeB,	PXE_MazeB,	TSC_MazeB,	&PAL_Regu,	13,	8,	"Labyrinth B" },
	{ PXM_MazeS,	PXE_MazeS,	TSC_MazeS,	&PAL_Regu,	13,	0,	"Boulder Chamber" },
	{ PXM_MazeM,	PXE_MazeM,	TSC_MazeM,	&PAL_Regu,	13,	10,	"Labyrinth M" },
	{ PXM_Drain,	PXE_Drain,	TSC_Drain,	&PAL_Regu,	3,	0,	"Dark Place" },
	{ PXM_Almond,	PXE_Almond,	TSC_Almond,	&PAL_Regu,	1,	0,	"Core" },
	{ PXM_River,	PXE_River,	TSC_River,	&PAL_Regu,	17,	6,	"Waterway" },
	{ PXM_Eggs2,	PXE_Eggs2,	TSC_Eggs2,	&PAL_Regu,	6,	12,	"Egg Corridor?" },
	{ PXM_Cthu2,	PXE_Cthu2,	TSC_Cthu2,	&PAL_Regu,	19,	0,	"Cthulhu's Abode?" },
	{ PXM_EggR2,	PXE_EggR2,	TSC_EggR2,	&PAL_Regu,	19,	0,	"Egg Observation Room?" },
	{ PXM_EggX,		PXE_EggX2,	TSC_EggX2,	&PAL_Regu,	22,	0,	"Egg No. 00" },
	{ PXM_Oside,	PXE_Oside,	TSC_Oside,	&PAL_Regu,	15,	9,	"Outer Wall" },
	{ PXM_EgEnd2,	PXE_EgEnd2,	TSC_EgEnd2,	&PAL_Regu,	19,	0,	"Side Room" },
	{ PXM_Itoh,		PXE_Itoh,	TSC_Itoh,	&PAL_Regu,	19,	0,	"Storehouse" },
	{ PXM_Cent,		PXE_Cent,	TSC_Cent,	&PAL_Regu,	4,	6,	"Plantation" },
	{ PXM_Jail1,	PXE_Jail1,	TSC_Jail1,	&PAL_Regu,	11,	0,	"Jail No. 1" },
	{ PXM_Momo,		PXE_Momo,	TSC_Momo,	&PAL_Regu,	11,	0,	"Hideout" },
	{ PXM_Lounge,	PXE_Lounge,	TSC_Lounge,	&PAL_Regu,	11,	0,	"Rest Area" },
	{ PXM_CentW,	PXE_CentW,	TSC_CentW,	&PAL_Regu,	19,	0,	"Teleporter" },
	{ PXM_Jail2,	PXE_Jail2,	TSC_Jail2,	&PAL_Regu,	19,	0,	"Jail No. 2" },
	{ PXM_Blcny1,	PXE_Blcny1,	TSC_Blcny1,	&PAL_Regu,	21,	4,	"Balcony" },
	{ PXM_Priso1,	PXE_Priso1,	TSC_Priso1,	&PAL_Regu,	11,	0,	"Last Cave" },
	{ PXM_Ring1,	PXE_Ring1,	TSC_Ring1,	&PAL_Regu,	21,	4,	"Throne Room" },
	{ PXM_Ring2,	PXE_Ring2,	TSC_Ring2,	&PAL_Regu,	21,	4,	"The King's Table" },
	{ PXM_Prefa1,	PXE_Prefa1,	TSC_Prefa1,	&PAL_Regu,	16,	0,	"Prefab House" },
	{ PXM_Priso2,	PXE_Priso2,	TSC_Priso2,	&PAL_Regu,	11,	0,	"Last Cave" },
	{ PXM_Ring3,	PXE_Ring3,	TSC_Ring3,	&PAL_Regu,	21,	0,	"Black Space" },
	{ PXM_Little,	PXE_Little,	TSC_Little,	&PAL_Regu,	16,	0,	"Little House" },
	{ PXM_Blcny2,	PXE_Blcny2,	TSC_Blcny2,	&PAL_Regu,	21,	4,	"Balcony" },
	{ PXM_Fall,		PXE_Fall,	TSC_Fall,	&PAL_Regu,	8,	0,	"Ending" },
	{ PXM_Kings,	PXE_Kings,	TSC_Kings,	&PAL_Regu,	21,	0,	"Intro" },
	{ PXM_Pixel,	PXE_Pixel,	TSC_Pixel,	&PAL_Regu,	16,	0,	"Waterway Cabin" },
	{ PXM_e_Maze,	PXE_e_Maze,	TSC_e_Maze,	&PAL_Regu,	13,	0,	"Credits" },
	{ PXM_e_Jenk,	PXE_e_Jenk,	TSC_e_Jenk,	&PAL_Regu,	2,	0,	"Credits" },
	{ PXM_e_Malc,	PXE_e_Malc,	TSC_e_Malc,	&PAL_Regu,	2,	0,	"Credits" },
	{ PXM_e_Ceme,	PXE_e_Ceme,	TSC_e_Ceme,	&PAL_Regu,	14,	0,	"Credits" },
	{ PXM_e_Sky,	PXE_e_Sky,	TSC_e_Sky,	&PAL_Regu,	8,	0,	"Credits" },
	{ PXM_Prefa2,	PXE_Prefa2,	TSC_Prefa2,	&PAL_Regu,	16,	0,	"Prefab House" },
	{ PXM_Hell1,	PXE_Hell1,	TSC_Hell1,	&PAL_Regu,	10,	0,	"Sacred Ground B1" },
	{ PXM_Hell2,	PXE_Hell2,	TSC_Hell2,	&PAL_Regu,	10,	0,	"Sacred Ground B2" },
	{ PXM_Hell3,	PXE_Hell3,	TSC_Hell3,	&PAL_Regu,	10,	0,	"Sacred Ground B3" },
	{ PXM_Mapi,		PXE_Mapi,	TSC_Mapi,	&PAL_Regu,	3,	0,	"Storage" },
	{ PXM_Hell4,	PXE_Hell4,	TSC_Hell4,	&PAL_Regu,	10,	0,	"Passage?" },
	{ PXM_Hell42,	PXE_Hell42,	TSC_Hell42,	&PAL_Regu,	10,	0,	"Passage?" },
	{ PXM_Statue,	PXE_Statue,	TSC_Statue,	&PAL_Regu,	10,	0,	"Statue Chamber" },
	{ PXM_Ballo1,	PXE_Ballo1,	TSC_Ballo1,	&PAL_Regu,	10,	0,	"Seal Chamber" },
	{ PXM_Ostep,	PXE_Ostep,	TSC_Ostep,	&PAL_Regu,	21,	0,	"Corridor" },
	{ PXM_e_Labo,	PXE_e_Labo,	TSC_e_Labo,	&PAL_Regu,	12,	0,	"Credits" },
	{ PXM_Pole,		PXE_Pole,	TSC_Pole,	&PAL_Gunsmith,3,0,	"Hermit Gunsmith" },
	{ PXM_Island,	PXE_Island,	TSC_Island,	&PAL_Regu,	21,	0,	"" },
	{ PXM_Ballo2,	PXE_Ballo2,	TSC_Ballo2,	&PAL_Regu,	10,	0,	"Seal Chamber" },
	{ PXM_e_Blcn,	PXE_e_Blcn,	TSC_e_Blcn,	&PAL_Regu,	21,	0,	"Credits" },
	{ PXM_Clock,	PXE_Clock,	TSC_Clock,	&PAL_Regu,	15,	0,	"Clock" },
};

// Tileset Info
const tileset_info_def tileset_info[TILESET_COUNT] = {
	{ NULL, NULL, NULL },
	{ &TS_Almond, &PAL_Almond, PXA_Almond },
	{ &TS_Barr, &PAL_Barr, PXA_Barr },
	{ &TS_Cave, &PAL_Cave, PXA_Cave },
	{ &TS_Cent, &PAL_Cent, PXA_Cent },
	{ &TS_EggIn, &PAL_EggIn, PXA_EggIn },
	{ &TS_Eggs, &PAL_Eggs, PXA_Eggs },
	{ &TS_EggX, &PAL_EggX, PXA_EggX },
	{ &TS_Fall, &PAL_Fall, PXA_Fall },
	{ &TS_Gard, &PAL_Gard, PXA_Gard },
	{ &TS_Hell, &PAL_Hell, PXA_Hell },
	{ &TS_Jail, &PAL_Jail, PXA_Jail },
	{ &TS_Labo, &PAL_Labo, PXA_Labo },
	{ &TS_Maze, &PAL_Maze, PXA_Maze },
	{ &TS_Mimi, &PAL_Mimi, PXA_Mimi },
	{ &TS_Oside, &PAL_Oside, PXA_Oside },
	{ &TS_Pens, &PAL_Pens, PXA_Pens },
	{ &TS_River, &PAL_River, PXA_River },
	{ &TS_Sand, &PAL_Sand, PXA_Sand },
	{ &TS_Store, &PAL_Store, PXA_Store },
	{ &TS_Weed, &PAL_Weed, PXA_Weed },
	{ &TS_White, &PAL_White, PXA_White },
	{ &TS_EggX2, &PAL_EggX, PXA_EggX },
};

// Background Info
const background_info_def background_info[BACKGROUND_COUNT] = {
	{ NULL, PAL2, 2, 0, 0 },
	{ &BG_Blue, PAL2, 0, 8, 8 },
	{ &BG_Blue, PAL2, 0, 8, 8 },
	{ &BG_Blue, PAL2, 0, 8, 8 },
	{ &BG_Fog, PAL2, 1, 16, 4 },
	{ &BG_Gard, PAL2, 0, 6, 8 },
	{ &BG_Gray, PAL2, 0, 8, 8 },
	{ &BG_Green, PAL2, 0, 8, 8 },
	{ &BG_Maze, PAL2, 0, 8, 8 },
	{ &BG_Maze, PAL2, 0, 8, 8 },
	{ &BG_Red, PAL2, 0, 4, 4 },
	{ &BG_Red, PAL2, 0, 4, 4 },
	{ &BG_Eggs, PAL2, 0, 8, 8 },
};

const song_info_def song_info[SONG_COUNT] = {
	{ NULL, "Silence" },
	{ BGM_Mischievous, "Mischievous Robot" },
	{ BGM_Safety, "Safety" },
	{ BGM_GameOver, "Game Over" },
	{ BGM_Gravity, "Gravity" },
	{ BGM_Grasstown, "On To Grasstown" },
	{ BGM_Balcony, "Meltdown 2" },
	{ BGM_EyesOfFlame, "Eyes Of Flame" },
	{ BGM_Gestation, "Gestation" },
	{ BGM_Mimiga, "Mimiga Village" },
	{ BGM_Fanfare1, "Fanfare 1" },
	{ BGM_Balrog, "Balrog's Theme" },
	{ BGM_Cemetery, "Cemetery" },
	{ BGM_Plant, "Yamashita Farm" },
	{ BGM_Pulse, "Pulse" },
	{ BGM_Fanfare3, "Fanfare 2" },
	{ BGM_Fanfare2, "Fanfare 3" }, // 0x10
	{ BGM_Balcony, "Tyrant" },
	{ BGM_Run, "Run!" },
	{ BGM_Balcony, "Jenka 1" },
	{ BGM_Balcony, "Labyrinth Fight" },
	{ BGM_Access, "Access" },
	{ BGM_Balcony, "Oppression" },
	{ BGM_Balcony, "Geothermal" },
	{ BGM_CaveStory, "Cave Story" },
	{ BGM_Balcony, "Moon Song" },
	{ BGM_Balcony, "Hero's End" },
	{ BGM_Balcony, "Scorching Back" },
	{ BGM_Quiet, "Quiet" },
	{ BGM_Balcony, "Last Cave" },
	{ BGM_Balcony, "Balcony" },
	{ BGM_Charge, "Charge" },
	{ BGM_EyesOfFlame, "Last Battle" }, // 0x20
	{ BGM_Balcony, "The Way Back Home" },
	{ BGM_Balcony, "Zombie" },
	{ BGM_Balcony, "Break Down" },
	{ BGM_Balcony, "Running Hell" },
	{ BGM_Balcony, "Jenka 2" },
	{ BGM_Balcony, "Living Waterway" },
	{ BGM_Balcony, "Seal Chamber" },
	{ BGM_Balcony, "Toroko's Theme" },
	{ BGM_Balcony, "White Stone Wall" },
};

const sound_info_def sound_info[SOUND_COUNT] = {
	{ NULL, 0 },
	{ SFX_01, 1905 }, // 1 - Cursor
	{ SFX_02, 2540 }, // 2 - Message
	{ SFX_03, 1905 }, // 3 - Head Bonk
	{ SFX_04, 5080 }, // 4 - Switch Weapon
	{ SFX_05, 3810 }, // 5 - Prompt
	{ SFX_06, 3175 }, // 6 - Hop
	{ NULL, 0 },
	{ SFX_08, 14000 }, // 8 - ????
	{ NULL, 0 },
	{ NULL, 0 },
	{ SFX_0B, 3175 }, // 11 - Door Open
	{ SFX_0C, 6350 }, // 12 - Destroy Block
	{ NULL, 0 },
	{ SFX_0E, 6350 }, // 14 - Weapon Energy
	{ SFX_0F, 635 }, // 15 - Jump
	{ SFX_10, 3175 }, // 16 - Take Damage
	{ SFX_11, 25397 }, // 17 - Die
	{ SFX_12, 6530 }, // 18 - Confirm
	{ NULL, 0 },
	{ SFX_14, 12700 }, // 20 - Refill
	{ SFX_15, 6350 }, // 21 - Bubble
	{ SFX_16, 2540 }, // 22 - Open Chest
	{ SFX_17, 1905 }, // 23 - Hit Ground
	{ SFX_18, 635 }, // 24 - Walking
	{ SFX_19, 12700 }, // 25 - Funny Explode
	{ SFX_1A, 14000 }, // 26 - Quake
	{ SFX_1B, 6350 }, // 27 - Level Up
	{ SFX_1C, 1905 }, // 28 - Shot Hit
	{ SFX_1D, 12700 }, // 29 - Teleport
	{ SFX_1E, 6350 }, // 30 - Critter Hop
	{ SFX_1F, 5080 }, // 31 - Shot Bounce
	{ SFX_20, 3175 }, // 32 - Polar Star
	{ SFX_21, 6350 }, // 33 - ????
	{ SFX_22, 2540 }, // 34 - Fireball
	{ SFX_23, 25397 },
	{ NULL, 0 },
	{ SFX_25, 2540 },
	{ SFX_26, 3810 },
	{ SFX_27, 3175 },
	{ SFX_28, 28000 },
	{ NULL, 0 },
	{ SFX_2A, 3175 }, // Get Missile
	{ SFX_2B, 1905 },
	{ SFX_2C, 12699 },
	{ SFX_2D, 3175 }, // 45 - Energy Bounce
	{ SFX_2E, 1270 },
	{ SFX_2F, 1270 },
	{ SFX_30, 5080 },
	{ SFX_31, 6350 }, // 49 - Polar star Lv 3
	{ SFX_32, 3810 },
	{ SFX_33, 6350 },
	{ SFX_34, 12700 },
	{ SFX_35, 6350 },
	{ SFX_36, 5080 },
	{ SFX_37, 3810 },
	{ SFX_38, 14000 }, // Splash
	{ SFX_39, 3175 },
	{ SFX_3A, 1270 },
	{ SFX_3B, 254 }, // Spur charge 1
	{ SFX_3C, 254 }, // 2
	{ SFX_3D, 254 }, // 3
	{ SFX_3E, 5080 },
	{ SFX_3F, 5080 },
	{ SFX_40, 5080 }, // 64 - Spur fire max
	{ SFX_41, 5080 }, // 65 - Spur full charge
	{ NULL, 0 },
	{ NULL, 0 },
	{ NULL, 0 },
	{ NULL, 0 },
	{ SFX_46, 6350 },
	{ SFX_47, 9524 },
	{ SFX_48, 13969 },
	{ NULL, 0 },
	{ NULL, 0 },
	{ NULL, 0 },
	{ NULL, 0 },
	{ NULL, 0 },
	{ NULL, 0 },
	{ NULL, 0 },
	// The following range 0x50 - 0x5F are remapped 0x90 - 0x9F
	{ NULL, 0 }, // 0x50 (80)
	{ NULL, 0 },
	{ NULL, 0 },
	{ NULL, 0 },
	{ NULL, 0 },
	{ NULL, 0 },
	{ SFX_96, 3175 },
	{ SFX_97, 6350 },
	{ SFX_98, 635 },
	{ SFX_99, 6350 },
	{ SFX_9A, 6350 },
	{ SFX_9B, 2540 },
	{ NULL, 0 },
	{ NULL, 0 },
	{ NULL, 0 },
	{ NULL, 0 },
	// End of remapped section
	{ NULL, 0 }, // 0x60 (96)
	{ NULL, 0 },
	{ NULL, 0 },
	{ NULL, 0 },
	{ SFX_64, 2540 },
	{ SFX_65, 39397 },
	{ SFX_66, 5747 },
	{ SFX_67, 14000 },
	{ SFX_68, 3175 },
	{ SFX_69, 3810 },
	{ SFX_6A, 6350 },
	{ SFX_6B, 6350 },
	{ SFX_6C, 6350 },
	{ SFX_6D, 2540 },
	{ SFX_6E, 2540 },
	{ SFX_6F, 1905 },
	{ SFX_70, 1905 }, // 0x70 (112)
	{ SFX_71, 1905 },
	{ SFX_72, 7620 },
	{ SFX_73, 25429 },
	{ SFX_74, 19048 },
	{ SFX_75, 6350 }, // 0x75 (117)
};

const npc_info_def npc_info[NPC_COUNT] = {
	{ NULL, 		PAL0, "Nothing" },
	{ &SPR_Energy, 	PAL1, "Weapon Energy" },
	{ &SPR_Behem, 	PAL1, "Behemoth" },
	{ NULL, 		PAL0, "Nothing" },
	{ &SPR_Smoke, 	PAL1, "Smoke" },
	{ &SPR_CritHG, 	PAL3, "Green Hopping Critter" },
	{ &SPR_BtlHG, 	PAL3, "Green Beetle" },
	{ &SPR_Basil, 	PAL1, "Basil" },
	{ &SPR_BtlHG, 	PAL3, "Green Beetle (Follow)" },
	{ &SPR_Balrog, 	PAL1, "Balrog (Drops in)" },
	{ &SPR_Balrog, 	PAL1, "Balrog (Shooting)" },
	{ NULL, 		PAL0, "Balrog Energy Shot" },
	{ &SPR_Balrog, 	PAL1, "Balrog (Scene)" },
	{ &SPR_ForceField, PAL1, "Force Field" },
	{ &SPR_Key, 	PAL1, "Santa's Key" },
	{ &SPR_Chest, 	PAL1, "Treasure Chest" },
	{ &SPR_Save, 	PAL1, "Save Point" }, // 0x10
	{ &SPR_Refill, 	PAL1, "Health & Ammo Refill" },
	{ &SPR_Door, 	PAL1, "Door" },
	{ &SPR_Balrog, 	PAL1, "Balrog (Mimiga Village)" },
	{ &SPR_Computer, PAL1, "Computer" },
	{ &SPR_Chest2, 	PAL1, "Opened Chest" },
	{ &SPR_Tele, 	PAL1, "Teleporter" },
	{ NULL, 		PAL0, "Teleporter Lights" },
	{ &SPR_CritBig, PAL0, "Power Critter" },
	{ &SPR_Platform, PAL1, "Lift Platform" },
	{ &SPR_Bat, 	PAL0, "Bat (Circling)" },
	{ &SPR_Trap, 	PAL1, "Death Trap" },
	{ &SPR_CritHG, 	PAL3, "Flying Critter" },
	{ &SPR_Cthu, 	PAL3, "Cthulhu" },
	{ &SPR_Gunsmith, PAL3, "Hermit Gunsmith" },
	{ &SPR_Bat, 	PAL0, "Bat (Hanging)" },
	{ &SPR_LifeUp, 	PAL1, "Life Capsule" }, // 0x20
	{ NULL, 		PAL0, "Balrog Energy Bounce" },
	{ &SPR_Bed, 	PAL1, "Bed" },
	{ &SPR_Mannan, 	PAL3, "Mannan" },
	{ &SPR_Balrog, 	PAL1, "Balrog (Second Fight)" },
	{ &SPR_Sign, 	PAL1, "Sign Post" },
	{ &SPR_Fire, 	PAL1, "Fireplace Fire" },
	{ &SPR_SaveSign, PAL1, "Save Sign" },
	{ &SPR_Santa, 	PAL3, "Santa" },
	{ NULL, 		PAL0, "Busted Doorway" },
	{ &SPR_Sue, 	PAL3, "Sue" },
	{ &SPR_Board, 	PAL1, "Blackboard" },
	{ NULL, 		PAL0, "Polish" },
	{ NULL, 		PAL0, "Baby" },
	{ NULL, 		PAL0, "Horiz/Vert Trigger" },
	{ NULL, 		PAL0, "Green Sandcroc" },
	{ NULL, 		PAL0, "Omega Projectile" }, // 0x30
	{ NULL, 		PAL0, "Skullhead" },
	{ NULL, 		PAL0, "Skeleton" },
	{ NULL, 		PAL0, "Crow & Skullhead" },
	{ NULL, 		PAL3, "Blue Robot (Sitting)" },
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "Skullstep" },
	{ &SPR_Kazuma, 	PAL3, "Kazuma" },
	{ NULL, 		PAL0, "Brown Beetle" },
	{ NULL, 		PAL0, "Crow" },
	{ &SPR_Basu, 	PAL3, "Basu" },
	{ &SPR_DoorE, 	PAL1, "Door Enemy" },
	{ &SPR_Toroko, 	PAL3, "Toroko" },
	{ &SPR_King, 	PAL3, "King" },
	{ &SPR_KazuCom, PAL3, "Kazuma (Computer)" },
	{ &SPR_Toroko, 	PAL3, "Toroko (Attacking)" },
	{ &SPR_CritHB, 	PAL2, "Blue Hopping Critter" }, // 0x40
	{ &SPR_Bat, 	PAL0, "Bat" },
	{ NULL, 		PAL0, "Misery's Bubble" },
	{ &SPR_Misery, 	PAL0, "Misery (Floating)" },
	{ &SPR_Balrog, 	PAL1, "Balrog (First Fight)" },
	{ &SPR_Pignon, 	PAL1, "Pignon" },
	{ &SPR_Sparkle, PAL1, "Sparkling Item" },
	{ &SPR_Fish, 	PAL0, "Chinfish" },
	{ NULL, 		PAL0, "Sprinkler" },
	{ NULL, 		PAL0, "Water Drop" },
	{ &SPR_Jack, 	PAL3, "Jack" },
	{ &SPR_Kanpachi, PAL3, "Kanpachi (Fishing)" },
	{ &SPR_Flower, 	PAL3, "Flowers" },
	{ &SPR_Sanda, 	PAL3, "Sandame's Pavilion" },
	{ NULL, 		PAL0 , "Pot" },
	{ &SPR_Mahin, 	PAL3, "Mahin" },
	{ &SPR_Keeper, 	PAL1, "Gravekeeper" }, // 0x50
	{ &SPR_PignonB, PAL1, "Big Pignon" },
	{ &SPR_Misery, 	PAL0, "Misery (Standing)" },
	{ &SPR_Igor, 	PAL3, "Igor (Scene)" },
	{ NULL, 		PAL0, "Basu Projectile" },
	{ &SPR_Term, 	PAL1, "Terminal" },
	{ NULL, 		PAL0, "Missile" },
	{ &SPR_Heart, 	PAL1, "Heart" },
	{ &SPR_Igor, 	PAL3, "Igor (Boss)" },
	{ NULL, 		PAL3, "Igor (Defeated)" },
	{ NULL, 		PAL0, "???" }, // 90 - Background (what?)
	{ NULL, 		PAL0, "Cage" },
	{ NULL, 		PAL0, "Sue (Computer)" },
	{ NULL, 		PAL0, "Chaco" },
	{ &SPR_Kulala, 	PAL0, "Kulala" },
	{ &SPR_Jelly, 	PAL0, "Jelly" },
	{ &SPR_Fan, 	PAL1, "Fan (Left)" }, // 0x60
	{ &SPR_Fan, 	PAL1, "Fan (Up)" },
	{ &SPR_Fan, 	PAL1, "Fan (Right)" },
	{ &SPR_Fan, 	PAL1, "Fan (Down)" },
	{ NULL, 		PAL0, "Grate" },
	{ NULL, 		PAL0, "Power Controls (Screen)" },
	{ &SPR_Wave, 	PAL1, "Power Controls (Flow)" },
	{ NULL, 		PAL0, "Mannan Projectile" },
	{ NULL, 		PAL0, "Frog" },
	{ NULL, 		PAL0, "Hey! (Low)" },
	{ NULL, 		PAL0, "Hey! (High)" },
	{ &SPR_Malco, 	PAL1, "Malco" },
	{ NULL, 		PAL0, "Balfrog Projectile" },
	{ &SPR_Malco, 	PAL1, "Malco (Damaged)" },
	{ NULL, 		PAL0, "Puchi" },
	{ &SPR_Quote, 	PAL0, "Quote Teleporting Out" },
	{ &SPR_Quote, 	PAL0, "Quote Teleporting In" }, // 0x70
	{ NULL, 		PAL0, "Prof. Booster" },
	{ NULL, 		PAL0, "Press" },
	{ NULL, 		PAL0, "Ravil" },
	{ NULL, 		PAL0, "Red Flower Petals" },
	{ NULL, 		PAL0, "Curly" },
	{ NULL, 		PAL0, "Curly (Boss)" },
	{ NULL, 		PAL0, "Tables & Chair" },
	{ NULL, 		PAL0, "Colon 1" },
	{ NULL, 		PAL0, "Colon 2" },
	{ NULL, 		PAL0, "Colon (Enemy)" },
	{ NULL, 		PAL0, "Curly Projectile" },
	{ NULL, 		PAL0, "Sunstone" },
	{ NULL, 		PAL0, "Hidden Heart/Missile" },
	{ NULL, 		PAL0, "Puppy (Runs Away)" },
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "???" }, // 0x80
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "Puppy (Tail Wag)" },
	{ NULL, 		PAL0, "Puppy (Sleeping)" },
	{ NULL, 		PAL0, "Puppy (Bark)" },
	{ NULL, 		PAL0, "Jenka" },
	{ NULL, 		PAL0, "Armadillo" },
	{ NULL, 		PAL0, "Skeleton" },
	{ NULL, 		PAL0, "Puppy (Carried)" },
	{ NULL, 		PAL0, "Large Doorway (Frame)" },
	{ NULL, 		PAL0, "Large Doorway (Doors)" },
	{ NULL, 		PAL0, "Doctor (Crowned)" },
	{ NULL, 		PAL0, "Frenzied Toroko" },
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "Flowercub" },
	{ NULL, 		PAL0, "Jenka (Collapsed)" },
	{ NULL, 		PAL0, "Toroko (Teleport In)" }, // 0x90
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "Lightning" },
	{ NULL, 		PAL0, "Purple Critter" },
	{ NULL, 		PAL0, "Critter Projectile" },
	{ NULL, 		PAL0, "Moving Block (Horiz)" },
	{ NULL, 		PAL0, "Quote" },
	{ NULL, 		PAL0, "Blue Robot" },
	{ NULL, 		PAL0, "Shutter (Stuck)" },
	{ NULL, 		PAL0, "Gaudi" },
	{ NULL, 		PAL0, "Gaudi (Defeated)" },
	{ NULL, 		PAL0, "Gaudi (Flying)" },
	{ NULL, 		PAL0, "Gaudi Projectile)" },
	{ NULL, 		PAL0, "Moving Block (Vert)" },
	{ NULL, 		PAL0, "Monster X Projectile" },
	{ NULL, 		PAL0, "Monster X (Defeated)" },
	{ NULL, 		PAL0, "Pooh Black" }, // 0xA0
	{ NULL, 		PAL0, "Pooh Black Projectile" },
	{ NULL, 		PAL0, "Pooh Black (Defeated)" },
	{ NULL, 		PAL0, "Dr. Gero" },
	{ NULL, 		PAL0, "Nurse Hasumi" },
	{ NULL, 		PAL0, "Curly (Collapsed)" },
	{ NULL, 		PAL0, "Chaba" },
	{ NULL, 		PAL0, "Prof. Booster (Fall)" },
	{ NULL, 		PAL0, "Boulder" },
	{ &SPR_Balrog, 	PAL1, "Balrog (Third Fight)" },
	{ NULL, 		PAL0, "Balrog Missile" },
	{ NULL, 		PAL0, "Fire Whirr" },
	{ NULL, 		PAL0, "Fire Whirr Projectile" },
	{ NULL, 		PAL0, "Gaudi Armor" },
	{ NULL, 		PAL0, "Gaudi Armor Projectile" },
	{ NULL, 		PAL0, "Gaudi Egg" },
	{ NULL, 		PAL0, "Buyobuyo Base" }, // 0xB0
	{ NULL, 		PAL0, "Buyobuyo" },
	{ NULL, 		PAL0, "Core Spinning Projectile" },
	{ NULL, 		PAL0, "Core Wisp Projectile" },
	{ NULL, 		PAL0, "Curly (AI)" },
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "Shutter (Large)" },
	{ NULL, 		PAL0, "Shutter (Small)" },
	{ NULL, 		PAL0, "Lift Block" },
	{ NULL, 		PAL0, "Fuzz Core" },
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "Homing Flame Projectile" },
	{ NULL, 		PAL0, "Surface Robot" },
	{ NULL, 		PAL0, "Water Level" },
	{ NULL, 		PAL0, "Scooter" }, // 0xC0
	{ NULL, 		PAL0, "Scooter (Pieces)" },
	{ NULL, 		PAL0, "Blue Robot (Pieces)" },
	{ NULL, 		PAL0, "Grate Mouth" },
	{ NULL, 		PAL0, "Motion Wall" },
	{ NULL, 		PAL0, "Porcupine Fish" },
	{ NULL, 		PAL0, "Ironhead Projectile" },
	{ NULL, 		PAL0, "Underwater Current" },
	{ NULL, 		PAL0, "Dragon Zombie" },
	{ NULL, 		PAL0, "Dragon Zombie (Dead)" },
	{ NULL, 		PAL0, "Dragon Zombie Projectile" },
	{ NULL, 		PAL0, "Blue Hopping Critter" },
	{ NULL, 		PAL0, "Falling Spike (Small)" },
	{ NULL, 		PAL0, "Falling Spike (Large)" },
	{ NULL, 		PAL0, "Counter Bomb" },
	{ NULL, 		PAL0, "Countdown Balloon" },
	{ NULL, 		PAL0, "Basu (2)" }, // 0xD0
	{ NULL, 		PAL0, "Basu Projectile (2)" },
	{ NULL, 		PAL0, "Green Beetle (Follow 2)" },
	{ &SPR_Spikes, 	PAL1, "Spikes" },
	{ NULL, 		PAL0, "Sky Dragon" },
	{ NULL, 		PAL0, "Night Spirit" },
	{ NULL, 		PAL0, "Night Spirit Projectile" },
	{ NULL, 		PAL0, "White Sandcroc" },
	{ NULL, 		PAL0, "Debug Cat" },
	{ NULL, 		PAL0, "Itoh" },
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "Smoke/Current Generator" },
	{ NULL, 		PAL0, "Shovel Brigade" },
	{ NULL, 		PAL0, "Shovel Brigade (Walking)" },
	{ NULL, 		PAL0, "Prison Bars" },
	{ NULL, 		PAL0, "Momorin" },
	{ NULL, 		PAL0, "Chie" }, // 0xE0
	{ NULL, 		PAL0, "Megane" },
	{ NULL, 		PAL0, "Kanpachi" },
	{ NULL, 		PAL0, "Bucket" },
	{ NULL, 		PAL0, "Droll (Guard)" },
	{ NULL, 		PAL0, "Red Flower Sprouts" },
	{ NULL, 		PAL0, "Blooming Red Flowers" },
	{ NULL, 		PAL0, "Rocket" },
	{ NULL, 		PAL0, "Orangebell" },
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "Picked Red Flowers" },
	{ NULL, 		PAL0, "Midorin" },
	{ NULL, 		PAL0, "Gunfish" },
	{ NULL, 		PAL0, "Gunfish Projectile" },
	{ NULL, 		PAL0, "Lethal Press" },
	{ NULL, 		PAL0, "Cage Bars" },
	{ NULL, 		PAL0, "Jailed Mimiga" }, // 0xF0
	{ NULL, 		PAL0, "Red Critter" },
	{ NULL, 		PAL0, "Red Bat" },
	{ NULL, 		PAL0, "Red Bat Generator" },
	{ NULL, 		PAL0, "Acid Drop" },
	{ NULL, 		PAL0, "Acid Drop Generator" },
	{ NULL, 		PAL0, "Press (Proximity)" },
	{ NULL, 		PAL0, "Misery (Boss)" },
	{ NULL, 		PAL0, "Misery (Vanish)" },
	{ NULL, 		PAL0, "Misery Energy Shot" },
	{ NULL, 		PAL0, "Misery Lightning Ball" },
	{ NULL, 		PAL0, "Misery Lightning" },
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "Energy Capsule" },
	{ NULL, 		PAL0, "Helicopter" },
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "Doctor (Before Fight)" }, // 0x100
	{ NULL, 		PAL0, "Red Crystal" },
	{ NULL, 		PAL0, "Sleeping Mimiga" },
	{ NULL, 		PAL0, "Curly (Carried)" },
	{ NULL, 		PAL0, "Shovel Brigade (Caged)" },
	{ NULL, 		PAL0, "Chie (Caged)" },
	{ NULL, 		PAL0, "Chaco (Caged)" },
	{ NULL, 		PAL0, "Doctor (Boss)" },
	{ NULL, 		PAL0, "Doctor Red Wave" },
	{ NULL, 		PAL0, "Doctor Red Ball (Fast)" },
	{ NULL, 		PAL0, "Doctor Red Ball (Slow)" },
	{ NULL, 		PAL0, "Muscle Doctor (Boss)" },
	{ NULL, 		PAL0, "Igor" },
	{ NULL, 		PAL0, "Red Energy Bat" },
	{ NULL, 		PAL0, "Red Energy" },
	{ NULL, 		PAL0, "Underwater Block" },
	{ NULL, 		PAL0, "Water Block Generator" }, // 0x110
	{ NULL, 		PAL0, "Droll Projectile" },
	{ NULL, 		PAL0, "Droll" },
	{ NULL, 		PAL0, "Puppy (With Item)" },
	{ NULL, 		PAL0, "Red Demon" },
	{ NULL, 		PAL0, "Red Demon Projectile" },
	{ NULL, 		PAL0, "Little Family" },
	{ NULL, 		PAL0, "Falling Block (Large)" },
	{ NULL, 		PAL0, "Sue (Teleport In)" },
	{ NULL, 		PAL0, "Doctor (Red Energy)" },
	{ NULL, 		PAL0, "Mini Undead Core" },
	{ NULL, 		PAL0, "Misery (Transformed)" },
	{ NULL, 		PAL0, "Sue (Transformed)" },
	{ NULL, 		PAL0, "Orange Spinning Shot" },
	{ NULL, 		PAL0, "Orange Dot" },
	{ NULL, 		PAL0, "Orange Smoke" },
	{ NULL, 		PAL0, "Glowing Rock Shot" }, // 0x120
	{ NULL, 		PAL0, "Orange Critter" },
	{ NULL, 		PAL0, "Orange Bat" },
	{ NULL, 		PAL0, "Mini Core (Before Fight)" },
	{ NULL, 		PAL0, "Quake" },
	{ NULL, 		PAL0, "Huge Energy Shot" },
	{ NULL, 		PAL0, "Falling Block Generator" },
	{ NULL, 		PAL0, "Cloud" },
	{ NULL, 		PAL0, "Cloud Generator" },
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "Doctor (Uncrowned)" },
	{ NULL, 		PAL0, "Balrog/Misery (Bubble)" },
	{ NULL, 		PAL0, "Demon Crown" },
	{ NULL, 		PAL0, "Fish Missile (Orange)" },
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "Gaudi (Sitting)" }, // 0x130
	{ NULL, 		PAL0, "Puppy (Small)" },
	{ NULL, 		PAL0, "Balrog (Nurse)" },
	{ NULL, 		PAL0, "Santa (Caged)" },
	{ NULL, 		PAL0, "Stumpy" },
	{ NULL, 		PAL0, "Bute" },
	{ NULL, 		PAL0, "Bute (Sword)" },
	{ NULL, 		PAL0, "Bute (Archer)" },
	{ NULL, 		PAL0, "Bute Projectile" },
	{ NULL, 		PAL0, "Ma Pignon" },
	{ NULL, 		PAL0, "Falling (?)" },
	{ NULL, 		PAL0, "Hopping Enemy (?)" },
	{ NULL, 		PAL0, "Bute (Defeated)" },
	{ NULL, 		PAL0, "Mesa" },
	{ NULL, 		PAL0, "Mesa (Defeated)" },
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "Curly (Hell)" }, // 0x140
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "Deleet" },
	{ NULL, 		PAL0, "Bute (Generated)" },
	{ NULL, 		PAL0, "Bute Generator" },
	{ NULL, 		PAL0, "Heavy Press Projectile" },
	{ NULL, 		PAL0, "Itoh/Sue (Ending)" },
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "Transmogrifier" },
	{ NULL, 		PAL0, "Building Fan" },
	{ NULL, 		PAL0, "Rolling" },
	{ NULL, 		PAL0, "Ballos Bone Shot" },
	{ NULL, 		PAL0, "Ballos Shockwave" },
	{ NULL, 		PAL0, "Ballos Lightning" },
	{ NULL, 		PAL0, "Sweat" },
	{ NULL, 		PAL0, "Ika-chan" },
	{ NULL, 		PAL0, "Ika-chan Generator" }, // 0x150
	{ NULL, 		PAL0, "Numahachi" },
	{ NULL, 		PAL0, "Green Devil" },
	{ NULL, 		PAL0, "Green Devil Generator" },
	{ NULL, 		PAL0, "Ballos (Boss)" },
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "Ballos Skull Shot" },
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "Hoppy" },
	{ NULL, 		PAL0, "Ballos Spikes" },
	{ NULL, 		PAL0, "Statue" },
	{ NULL, 		PAL0, "Red Bute (Archer)" },
	{ NULL, 		PAL0, "Statue (Breakable)" },
	{ NULL, 		PAL0, "King (Sword)" }, // 0x160
	{ NULL, 		PAL0, "Red Bute (Sword)" },
	{ NULL, 		PAL0, "Kill Zone" },
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "Balrog (Rescue)" },
	{ NULL, 		PAL0, "Puppy (Ghost)" },
	{ NULL, 		PAL0, "Misery (Wind)" },
	{ NULL, 		PAL0, "Water Drop Generator" },
	{ NULL, 		PAL0, "Thank You" }, // 0x168 (360)
};

const weapon_info_def weapon_info[WEAPON_COUNT] = {
	{ NULL, {NULL,NULL,NULL}, {0,0,0}, {0,0,0}, {0,0,0} },
	{ &SPR_Polar, {&SPR_PolarB1,&SPR_PolarB2,&SPR_PolarB3}, // 1 - Snake
		{0x20,0x20,0x31}, {10,20,30}, {1,2,4} },
	{ &SPR_Polar, {&SPR_PolarB1,&SPR_PolarB2,&SPR_PolarB3}, // 2 - Polar Star
		{0x20,0x20,0x31}, {10,20,30}, {1,2,4} },
	{ &SPR_Polar, {&SPR_PolarB1,&SPR_PolarB2,&SPR_PolarB3}, // 3 - Fireball
		{0x20,0x20,0x31}, {10,20,30}, {1,2,4} },
	{ &SPR_Polar, {&SPR_PolarB1,&SPR_PolarB2,&SPR_PolarB3}, // 4 - Machine Gun
		{0x20,0x20,0x31}, {10,20,30}, {1,2,4} },
	{ &SPR_Polar, {&SPR_PolarB1,&SPR_PolarB2,&SPR_PolarB3}, // 5 - Missile
		{0x20,0x20,0x31}, {10,20,30}, {3,6,9} },
	{ NULL, {NULL,NULL,NULL}, {0,0,0}, {0,0,0}, {0,0,0} },
	{ &SPR_Polar, {&SPR_PolarB1,&SPR_PolarB2,&SPR_PolarB3}, // 7 - Bubbler
		{0x20,0x20,0x31}, {10,20,30}, {1,2,4} },
	{ NULL, {NULL,NULL,NULL}, {0,0,0}, {0,0,0}, {0,0,0} },
	{ &SPR_Polar, {&SPR_PolarB1,&SPR_PolarB2,&SPR_PolarB3}, // 9 - King's Sword
		{0x20,0x20,0x31}, {10,20,30}, {1,2,4} },
	{ &SPR_Polar, {&SPR_PolarB1,&SPR_PolarB2,&SPR_PolarB3}, // 10 - Super Missile
		{0x20,0x20,0x31}, {10,20,30}, {1,2,4} },
	{ NULL, {NULL,NULL,NULL}, {0,0,0}, {0,0,0}, {0,0,0} },
	{ &SPR_Polar, {&SPR_PolarB1,&SPR_PolarB2,&SPR_PolarB3}, // 12 - Nemesis
		{0x20,0x20,0x31}, {10,20,30}, {1,2,4} },
	{ &SPR_Polar, {&SPR_PolarB1,&SPR_PolarB2,&SPR_PolarB3}, // 13 - Spur
		{0x20,0x20,0x31}, {10,20,30}, {4,4,4} },
};

const face_info_def face_info[FACE_COUNT] = {
	{ NULL, PAL0 },
	{ &TS_Face01, PAL3 },
	{ &TS_Face02, PAL3 },
	{ &TS_Face03, PAL3 },
	{ &TS_Face04, PAL3 },
	{ &TS_Face05, PAL3 },
	{ &TS_Face06, PAL3 },
	{ &TS_Face07, PAL3 },
	{ &TS_Face08, PAL3 },
	{ &TS_Face09, PAL3 },
	{ &TS_Face10, PAL3 },
	{ &TS_Face11, PAL3 },
	{ &TS_Face12, PAL3 },
	{ &TS_Face01, PAL3 },
	{ &TS_Face14, PAL3 },
	{ &TS_Face15, PAL0 },
	{ &TS_Face16, PAL0 },
	{ &TS_Face17, PAL3 },
	{ &TS_Face18, PAL3 },
	{ &TS_Face19, PAL3 },
	{ &TS_Face20, PAL3 },
	{ &TS_Face21, PAL3 },
	{ &TS_Face01, PAL3 },
	{ &TS_Face23, PAL3 },
	{ &TS_Face24, PAL3 },
	{ &TS_Face25, PAL3 },
	{ &TS_Face26, PAL0 },
	{ &TS_Face01, PAL3 },
	{ &TS_Face28, PAL3 },
	{ &TS_Face29, PAL0 },
};
