/*******************************************************************************/
/*  This file is auto-generated by GUIX Studio. Do not edit this file by hand. */
/*  Modifications to this file should only be made by running the GUIX Studio  */
/*  application and re-generating the application. For more information please */
/*  refer to the GUIX Studio user's guide, or visit our web site at            */
/*  www.expresslogic.com.                                                      */
/*                                                                             */
/*  GUIX Studio Revision 5.5.0.0-engineering                                   */
/*  Date (dd.mm.yyyy):  9. 1.2019   Time (hh:mm): 14:47                        */
/*******************************************************************************/


#define GUIX_STUDIO_GENERATED_FILE
#include <stddef.h>
#include "test_folder_edit_resources.h"
#include "test_folder_edit_specifications.h"

extern GX_WINDOW_ROOT display_1_root_window;
WINDOW_3_CONTROL_BLOCK window_3;
GX_WINDOW_PROPERTIES window_3_properties =
{
    0                                        /* wallpaper pixelmap id          */
};

GX_CONST GX_STUDIO_WIDGET window_3_define =
{
    "window_3",
    GX_TYPE_WINDOW,                          /* widget type                    */
    GX_ID_NONE,                              /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_THIN|GX_STYLE_ENABLED,   /* style flags                    */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(WINDOW_3_CONTROL_BLOCK),          /* control block size             */
    GX_COLOR_ID_WINDOW_FILL,                 /* normal color id                */
    GX_COLOR_ID_WINDOW_FILL,                 /* selected color id              */
    GX_COLOR_ID_DISABLED_FILL,               /* disabled color id              */
    gx_studio_window_create,                 /* create function                */
    GX_NULL,                                 /* drawing function override      */
    GX_NULL,                                 /* event function override        */
    {0, 0, 639, 479},                        /* widget size                    */
    GX_NULL,                                 /* next widget                    */
    GX_NULL,                                 /* child widget                   */
    0,                                       /* control block                  */
    (void *) &window_3_properties            /* extended properties            */
};
#undef GUIX_STUDIO_GENERATED_FILE
