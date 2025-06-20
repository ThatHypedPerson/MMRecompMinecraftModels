#include "modding.h"
#include "global.h"

#include "recomputils.h"

#include "modelreplacer_api.h"

#include "minecraftIronSwordHandleDL.h"
#include "minecraftIronSwordBladeDL.h"
#include "minecraftGoldSwordHandleDL.h"
#include "minecraftGoldSwordBladeDL.h"
#include "minecraftDiamondSwordHandleDL.h"
#include "minecraftDiamondSwordBladeDL.h"
#include "minecraftTridentDL.h"
#include "minecraftShieldDL.h"
#include "minecraftBowDL.h"
#include "minecraftArrowDL.h"
#include "minecraftArrowLodDL.h"
#include "minecraftStickDL.h"

extern Gfx gLinkHumanHerosShieldDL[];
extern Gfx gLinkHumanGreatFairysSwordDL[];
extern Gfx gLinkHumanGildedSwordHandleDL[];
extern Gfx gLinkHumanGildedSwordBladeDL[];
extern Gfx gRazorSwordHandleDL[];
extern Gfx gRazorSwordBladeDL[];
extern Gfx gKokiriSwordHandleDL[];
extern Gfx gKokiriSwordBladeDL[];
extern Gfx gLinkHumanBowDL[];
extern Gfx object_link_child_DL_018490[]; // hand holding bow
extern Gfx object_link_child_DL_017818[]; // bow string
extern Gfx gameplay_keep_DL_013FF0[]; // arrow
extern Gfx gameplay_keep_DL_014370[]; // arrow lod
extern Gfx gDekuStickDL[];

MODEL_REPLACER_CALLBACK_ON_REGISTER_REPLACERS
void register_replacements() {
    // kokiri sword
    ModelReplacer_registerReplacer(GAMEPLAY_KEEP, gKokiriSwordHandleDL, minecraftIronSwordHandleDL);
    ModelReplacer_registerReplacer(GAMEPLAY_KEEP, gKokiriSwordBladeDL, minecraftIronSwordBladeDL);
    // razor sword
    ModelReplacer_registerReplacer(GAMEPLAY_KEEP, gRazorSwordHandleDL, minecraftGoldSwordHandleDL);
    ModelReplacer_registerReplacer(GAMEPLAY_KEEP, gRazorSwordBladeDL, minecraftGoldSwordBladeDL);
    // gilded sword
    ModelReplacer_registerReplacer(OBJECT_LINK_CHILD, gLinkHumanGildedSwordHandleDL, minecraftDiamondSwordHandleDL);
    ModelReplacer_registerReplacer(OBJECT_LINK_CHILD, gLinkHumanGildedSwordBladeDL, minecraftDiamondSwordBladeDL);
    // great fairy sword
    ModelReplacer_registerReplacer(OBJECT_LINK_CHILD, gLinkHumanGreatFairysSwordDL, minecraftTridentDL);
    // hero shield
    ModelReplacer_registerReplacer(OBJECT_LINK_CHILD, gLinkHumanHerosShieldDL, minecraftShieldDL);
    // bow
    ModelReplacer_registerReplacer(OBJECT_LINK_CHILD, gLinkHumanBowDL, minecraftBowDL);
    ModelReplacer_registerReplacer(OBJECT_LINK_CHILD, object_link_child_DL_018490, minecraftBowDL);
    // arrow
    ModelReplacer_registerReplacer(GAMEPLAY_KEEP, gameplay_keep_DL_013FF0, minecraftArrowDL);
    ModelReplacer_registerReplacer(GAMEPLAY_KEEP, gameplay_keep_DL_014370, minecraftArrowLodDL);
    // stick
    ModelReplacer_registerReplacer(GAMEPLAY_KEEP, gDekuStickDL, minecraftStickDL);
}