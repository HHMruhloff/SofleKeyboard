#include <lvgl.h>

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_BALLOON
#define LV_ATTRIBUTE_IMG_BALLOON
#endif

/* Balloon Image deaktiviert */
const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_BALLOON uint8_t
    balloon_map[] = {
        0x00, 0x00, 0x00, 0xff, /* Index 0 */
        0xff, 0xff, 0xff, 0xff  /* Index 1 */
};

const lv_img_dsc_t balloon = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 0, // Breite auf 0 gesetzt
    .header.h = 0, // Höhe auf 0 gesetzt
    .data_size = 8,
    .data = balloon_map,
};

#ifndef LV_ATTRIBUTE_IMG_MOUNTAIN
#define LV_ATTRIBUTE_IMG_MOUNTAIN
#endif

/* Mountain Image deaktiviert */
const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_MOUNTAIN uint8_t
    mountain_map[] = {
        0x00, 0x00, 0x00, 0xff, /* Index 0 */
        0xff, 0xff, 0xff, 0xff  /* Index 1 */
};

const lv_img_dsc_t mountain = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 0, // Breite auf 0 gesetzt
    .header.h = 0, // Höhe auf 0 gesetzt
    .data_size = 8,
    .data = mountain_map,
};
