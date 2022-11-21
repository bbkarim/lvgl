/**
 * @file lvgl.h
 * Include all LVGL related headers
 */

#ifndef LVGL_H
#define LVGL_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************
 * CURRENT VERSION OF LVGL
 ***************************/
#define LVGL_VERSION_MAJOR 9
#define LVGL_VERSION_MINOR 0
#define LVGL_VERSION_PATCH 0
#define LVGL_VERSION_INFO "dev"

/*********************
 *      INCLUDES
 *********************/
#include "src/misc/lv_log.h"
#include "src/misc/lv_timer.h"
#include "src/misc/lv_math.h"
#include "src/misc/lv_mem.h"
#include "src/misc/lv_async.h"
#include "src/misc/lv_anim_timeline.h"
#include "src/misc/lv_printf.h"

#include "src/hal/lv_hal.h"

#include "src/core/lv_obj.h"
#include "src/core/lv_group.h"
#include "src/core/lv_indev.h"
#include "src/core/lv_refr.h"
#include "src/core/lv_disp.h"
#include "src/core/lv_theme.h"

#include "src/font/lv_font.h"
#include "src/font/lv_font_loader.h"
#include "src/font/lv_font_fmt_txt.h"

#if LV_USE_EXTRA_WIDGETS
#include "src/widgets/animimg/lv_animimg.h"
#include "src/widgets/arc/lv_arc.h"
#include "src/widgets/bar/lv_bar.h"
#include "src/widgets/btn/lv_btn.h"
#include "src/widgets/btnmatrix/lv_btnmatrix.h"
#include "src/widgets/calendar/lv_calendar.h"
#include "src/widgets/canvas/lv_canvas.h"
#include "src/widgets/chart/lv_chart.h"
#include "src/widgets/checkbox/lv_checkbox.h"
#include "src/widgets/colorwheel/lv_colorwheel.h"
#include "src/widgets/dropdown/lv_dropdown.h"
#include "src/widgets/img/lv_img.h"
#include "src/widgets/imgbtn/lv_imgbtn.h"
#include "src/widgets/keyboard/lv_keyboard.h"
#include "src/widgets/label/lv_label.h"
#include "src/widgets/led/lv_led.h"
#include "src/widgets/line/lv_line.h"
#include "src/widgets/list/lv_list.h"
#include "src/widgets/menu/lv_menu.h"
#include "src/widgets/meter/lv_meter.h"
#include "src/widgets/msgbox/lv_msgbox.h"
#include "src/widgets/roller/lv_roller.h"
#include "src/widgets/slider/lv_slider.h"
#include "src/widgets/span/lv_span.h"
#include "src/widgets/spinbox/lv_spinbox.h"
#include "src/widgets/spinner/lv_spinner.h"
#include "src/widgets/switch/lv_switch.h"
#include "src/widgets/table/lv_table.h"
#include "src/widgets/tabview/lv_tabview.h"
#include "src/widgets/textarea/lv_textarea.h"
#include "src/widgets/tileview/lv_tileview.h"
#include "src/widgets/win/lv_win.h"
#endif /* LV_USE_EXTRA_WIDGETS */

#if LV_USE_SNAPSHOT
#include "src/others/snapshot/lv_snapshot.h"
#endif /* LV_USE_SNAPSHOT */

#if LV_USE_MONKEY
#include "src/others/monkey/lv_monkey.h"
#endif /* LV_USE_MONKEY */

#if LV_USE_GRIDNAV
#include "src/others/gridnav/lv_gridnav.h"
#endif /* LV_USE_GRIDNAV */

#if LV_USE_FRAGMENT
#include "src/others/fragment/lv_fragment.h"
#endif /* LV_USE_FRAGMENT */

#if LV_USE_IMGFONT
#include "src/others/imgfont/lv_imgfont.h"
#endif /* LV_USE_IMGFONT */

#if LV_USE_MSG
#include "src/others/msg/lv_msg.h"
#endif /* LV_USE_MSG */

#if LV_USE_IME_PINYIN
#include "src/others/ime/lv_ime_pinyin.h"
#endif /* LV_USE_IME_PINYIN */

#if LV_USE_FILE_EXPLORER
#include "src/others/file_explorer/lv_file_explorer.h"
#endif /* LV_USE_FILE_EXPLORER */

#if LV_USE_BMP
#include "src/libs/bmp/lv_bmp.h"
#endif /* LV_USE_BMP */

#if LV_USE_FSDRV
#include "src/libs/fsdrv/lv_fsdrv.h"
#endif /* LV_USE_FSDRV */

#if LV_USE_PNG
#include "src/libs/png/lv_png.h"
#endif /* LV_USE_PNG */

#if LV_USE_GIF
#include "src/libs/gif/lv_gif.h"
#endif /* LV_USE_GIF */

#if LV_USE_QRCODE
#include "src/libs/qrcode/lv_qrcode.h"
#endif /* LV_USE_QRCODE */

#if LV_USE_SJPG
#include "src/libs/sjpg/lv_sjpg.h"
#endif /* LV_USE_SJPG */

#if LV_USE_FREETYPE
#include "src/libs/freetype/lv_freetype.h"
#endif /* LV_USE_FREETYPE */

#if LV_USE_RLOTTIE
#include "src/libs/rlottie/lv_rlottie.h"
#endif /* LV_USE_RLOTTIE */

#if LV_USE_FFMPEG
#include "src/libs/ffmpeg/lv_ffmpeg.h"
#endif /* LV_USE_FFMPEG */

#if LV_USE_TINY_TTF
#include "src/libs/tiny_ttf/lv_tiny_ttf.h"
#endif /* LV_USE_TINY_TTF */

#if LV_USE_EXTRA_THEMES
#include "src/layouts/flex/lv_flex.h"
#include "src/layouts/grid/lv_grid.h"
#endif /* LV_USE_EXTRA_THEMES */

#include "src/draw/lv_draw.h"

#if LV_USE_EXTRA_THEMES
#include "src/themes/lv_themes.h"
#endif /* LV_USE_EXTRA_THEMES */

#include "src/lv_api_map.h"

/*-----------------
 * EXTRAS
 *----------------*/

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/**********************
 *      MACROS
 **********************/

/** Gives 1 if the x.y.z version is supported in the current version
 * Usage:
 *
 * - Require v6
 * #if LV_VERSION_CHECK(6,0,0)
 *   new_func_in_v6();
 * #endif
 *
 *
 * - Require at least v5.3
 * #if LV_VERSION_CHECK(5,3,0)
 *   new_feature_from_v5_3();
 * #endif
 *
 *
 * - Require v5.3.2 bugfixes
 * #if LV_VERSION_CHECK(5,3,2)
 *   bugfix_in_v5_3_2();
 * #endif
 *
 */
#define LV_VERSION_CHECK(x,y,z) (x == LVGL_VERSION_MAJOR && (y < LVGL_VERSION_MINOR || (y == LVGL_VERSION_MINOR && z <= LVGL_VERSION_PATCH)))

/**
 * Wrapper functions for VERSION macros
 */

static inline int lv_version_major(void)
{
    return LVGL_VERSION_MAJOR;
}

static inline int lv_version_minor(void)
{
    return LVGL_VERSION_MINOR;
}

static inline int lv_version_patch(void)
{
    return LVGL_VERSION_PATCH;
}

static inline const char *lv_version_info(void)
{
    return LVGL_VERSION_INFO;
}

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*LVGL_H*/
