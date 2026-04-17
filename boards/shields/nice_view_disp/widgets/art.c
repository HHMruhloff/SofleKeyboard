#include <lvgl.h>

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_BALLOON
#define LV_ATTRIBUTE_IMG_BALLOON
#endif

// Balloon bleibt komplett unsichtbar
const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_BALLOON uint8_t
    balloon_map[] = { 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff };

const lv_img_dsc_t balloon = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 0,
    .header.h = 0,
    .data_size = 8,
    .data = balloon_map,
};

#ifndef LV_ATTRIBUTE_IMG_MOUNTAIN
#define LV_ATTRIBUTE_IMG_MOUNTAIN
#endif

// Hier ist das "M" als Bitmap (fett gezeichnet)
const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_MOUNTAIN uint8_t
    mountain_map[] = {
#if CONFIG_NICE_VIEW_DISP_WIDGET_INVERTED
        0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0xff,
#else
        0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff,
#endif
        // Pixel-Daten für ein fettes "M" (20x20 Pixel)
        0xFF, 0xFF, 0xF0, 0xC1, 0x81, 0xF0, 0xC1, 0x81, 0xF0, 0xD3, 0x91, 0xF0, 
        0xD3, 0x91, 0xF0, 0xDB, 0xB1, 0xF0, 0xDB, 0xB1, 0xF0, 0xDB, 0xB1, 0xF0,
        0xC1, 0x81, 0xF0, 0xC1, 0x81, 0xF0, 0xC1, 0x81, 0xF0, 0xC1, 0x81, 0xF0,
        0xC1, 0x81, 0xF0, 0xC1, 0x81, 0xF0, 0xC1, 0x81, 0xF0, 0xFF, 0xFF, 0xF0
    };

const lv_img_dsc_t mountain = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 20, // Breite des M
    .header.h = 16, // Höhe des M
    .data_size = sizeof(mountain_map),
    .data = mountain_map,
};
