#include "ultra64.h"
#include "global.h"

u64 minecraftArrowDL_arrow_ci4[] = {
	0x0102222222222222, 0x2222222222222010, 0x2010222222222302, 0x2032222222220102, 0x4456667466664830, 0x0384666647666544, 0x2010222222222882, 0x2882222222220102, 
	0x0102222222222222, 0x2222222222222010, 0x2202222022222222, 0x2222222222222222, 0x2212222122222222, 0x2222222222222222, 0x0161001610222222, 0x2222222222222222, 
	0x2212222122222222, 0x2222222222222222, 0x2202222022222222, 0x2222222222222222, 0x2222222222222222, 0x2222222222222222, 0x2222222222222222, 0x2222222222222222, 
	0x2222222222222222, 0x2222222222222222, 0x2222222222222222, 0x2222222222222222, 0x2222222222222222, 0x2222222222222222, 0x2222222222222222, 0x2222222222222222, 
	0x2222222222222222, 0x2222222222222222, 0x2222222222222222, 0x2222222222222222, 0x2222222222222222, 0x2222222222222222, 0x2222222222222222, 0x2222222222222222, 
	0x2222222222222222, 0x2222222222222222, 0x2222222222222222, 0x2222222222222222, 0x2222222222222222, 0x2222222222222222, 0x2222222222222222, 0x2222222222222222, 
	0x2222222222222222, 0x2222222222222222, 0x2222222222222222, 0x2222222222222222, 0x2222222222222222, 0x2222222222222222, 0x2222222222222222, 0x2222222222222222, 
	0x2222222222222222, 0x2222222222222222, 0x2222222222222222, 0x2222222222222222, 0x2222222222222222, 0x2222222222222222, 0x2222222222222222, 0x2222222222222222, 
	
};

u64 minecraftArrowDL_arrow_pal_rgba16[] = {
	0xdef7ffff0000bdef, 0x9c1372cfb497bc99, 0x9ce7000000000000
};

Vtx minecraftArrowDL_minecraftArrowDL_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {247, -340, -340}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {247, -340, 340}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {247, 340, 340}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {247, 340, -340}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {2168, -340, -340}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {2168, -340, 340}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {2168, 340, 340}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {2168, 340, -340}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx minecraftArrowDL_minecraftArrowDL_mesh_layer_Opaque_vtx_0[18] = {
	{{ {2168, -170, -170}, 0, {0, 160}, {255, 255, 255, 255} }},
	{{ {247, -170, -170}, 0, {512, 160}, {255, 255, 255, 255} }},
	{{ {247, 170, 170}, 0, {512, 0}, {255, 255, 255, 255} }},
	{{ {2168, 170, 170}, 0, {0, 0}, {255, 255, 255, 255} }},
	{{ {2168, -170, -170}, 0, {1024, 160}, {255, 255, 255, 255} }},
	{{ {2168, 170, 170}, 0, {1024, 0}, {255, 255, 255, 255} }},
	{{ {2048, 0, -340}, 0, {0, 320}, {255, 255, 255, 255} }},
	{{ {2048, 340, 0}, 0, {160, 320}, {255, 255, 255, 255} }},
	{{ {2048, 0, 340}, 0, {160, 160}, {255, 255, 255, 255} }},
	{{ {2048, -340, 0}, 0, {0, 160}, {255, 255, 255, 255} }},
	{{ {2048, 0, -340}, 0, {320, 320}, {255, 255, 255, 255} }},
	{{ {2048, -340, 0}, 0, {320, 160}, {255, 255, 255, 255} }},
	{{ {2168, 170, -170}, 0, {0, 160}, {255, 255, 255, 255} }},
	{{ {247, 170, -170}, 0, {512, 160}, {255, 255, 255, 255} }},
	{{ {247, -170, 170}, 0, {512, 0}, {255, 255, 255, 255} }},
	{{ {2168, -170, 170}, 0, {0, 0}, {255, 255, 255, 255} }},
	{{ {2168, 170, -170}, 0, {1024, 160}, {255, 255, 255, 255} }},
	{{ {2168, -170, 170}, 0, {1024, 0}, {255, 255, 255, 255} }},
};

Gfx minecraftArrowDL_minecraftArrowDL_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(minecraftArrowDL_minecraftArrowDL_mesh_layer_Opaque_vtx_0 + 0, 18, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
	gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
	gsSP2Triangles(7, 10, 11, 0, 7, 11, 8, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(13, 16, 17, 0, 13, 17, 14, 0),
	gsSPEndDisplayList(),
};

Gfx mat_minecraftArrowDL_arrow_layerOpaque[] = {
	gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_POINT | G_TT_RGBA16 | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_TEX_EDGE2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, minecraftArrowDL_arrow_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(5, 8),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, minecraftArrowDL_arrow_ci4),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 255, 1024),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 2, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx minecraftArrowDL[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(minecraftArrowDL_minecraftArrowDL_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_minecraftArrowDL_arrow_layerOpaque),
	gsSPDisplayList(minecraftArrowDL_minecraftArrowDL_mesh_layer_Opaque_tri_0),
	gsSPEndDisplayList(),
};

