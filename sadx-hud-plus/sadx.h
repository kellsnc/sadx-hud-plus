#pragma once

enum
{
	STG_TYPE_ACTION,
	STG_TYPE_ADVENTURE,
	STG_TYPE_MINIGAME
};

struct EXTRA
{
	Sint8 num;
	Float scale;
	Float alpha;
};

DataPointer(NJS_TEXLIST, texlist_score, 0x912DFC);
DataArray(NJS_TEXANIM, anim_score, 0x912E08, 24);
DataPointer(NJS_SPRITE, sprite_score, 0x913078);
DataPointer(NJS_TEXANIM, aniRing, 0x913118);
DataPointer(NJS_SPRITE, sprRing, 0x91312C);
DataPointer(NJS_TEXANIM, titleAnim, 0x7E6014);
DataPointer(NJS_SPRITE, titleSprite, 0x7E6048);
DataPointer(Angle, ang, 0x3B29D4C);
DataPointer(Sint8, score_display, 0x3B0EF40);
DataPointer(Sint8, score_d_display, 0x3B0F150);
DataPointer(Sint8, score_u_display, 0x3B0EF49);
DataPointer(Sint32, slScore, 0x3B0F14C);
DataPointer(Sint32, slEnemyScore, 0x3B0F104);
DataPointer(Uint8, nbExtra, 0x3C4B034);
DataArray(EXTRA, extra_list, 0x3C4AE08, 10);
DataPointer(NJS_SPRITE, sprite_extra, 0x91B9DC);
FunctionPointer(Bool, MirenScoreCheckDisplayScore, (), 0x4B5000);
VoidFunc(MirenScoreDisplayScoreTitle, 0x4B4FC0);
FunctionPointer(Bool, ChkPause, (), 0x414D70);
FunctionPointer(void, DrawTimeSprite, (Float x, Float y), 0x4261C0);

static const void* const loc_425960 = (void*)0x425960;
static inline void DisplaySNumbers(NJS_SPRITE* ssp, Sint32 number, Uint8 fig)
{
	__asm
	{
		mov bl, [fig]
		mov eax, [number]
		mov esi, [ssp]
		call loc_425960
	}
}
