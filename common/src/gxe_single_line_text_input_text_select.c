/***************************************************************************
 * Copyright (c) 2024 Microsoft Corporation 
 * 
 * This program and the accompanying materials are made available under the
 * terms of the MIT License which is available at
 * https://opensource.org/licenses/MIT.
 * 
 * SPDX-License-Identifier: MIT
 **************************************************************************/


/**************************************************************************/
/**************************************************************************/
/**                                                                       */
/** GUIX Component                                                        */
/**                                                                       */
/**   Single Line Text Input Managment (Single Line Text Input)           */
/**                                                                       */
/**************************************************************************/

#define GX_SOURCE_CODE


/* Include necessary system files.  */

#include "gx_api.h"
#include "gx_system.h"
#include "gx_single_line_text_input.h"

GX_CALLER_CHECKING_EXTERNS
/**************************************************************************/
/*                                                                        */
/*  FUNCTION                                               RELEASE        */
/*                                                                        */
/*    _gxe_single_line_text_input_text_select             PORTABLE C      */
/*                                                           6.1          */
/*  AUTHOR                                                                */
/*                                                                        */
/*    Kenneth Maxwell, Microsoft Corporation                              */
/*                                                                        */
/*  DESCRIPTION                                                           */
/*                                                                        */
/*    This function highlighs text with specified start mark and end mark */
/*    index.                                                              */
/*                                                                        */
/*                                                                        */
/*  INPUT                                                                 */
/*                                                                        */
/*    text_input                            Single-line text input widget */
/*                                            control block               */
/*    start_mark                            The index of the first        */
/*                                            highlight character.        */
/*    end_mark                              The index of the last         */
/*                                            highlight character         */
/*                                                                        */
/*  OUTPUT                                                                */
/*                                                                        */
/*    status                                Completion status             */
/*                                                                        */
/*  CALLS                                                                 */
/*                                                                        */
/*    _gxe_single_line_text_input_text_select                             */
/*                                          Actual single line text input */
/*                                            text select call            */
/*                                                                        */
/*  CALLED BY                                                             */
/*                                                                        */
/*    Application Code                                                    */
/*                                                                        */
/*  RELEASE HISTORY                                                       */
/*                                                                        */
/*    DATE              NAME                      DESCRIPTION             */
/*                                                                        */
/*  05-19-2020     Kenneth Maxwell          Initial Version 6.0           */
/*  09-30-2020     Kenneth Maxwell          Modified comment(s),          */
/*                                            resulting in version 6.1    */
/*                                                                        */
/**************************************************************************/
UINT  _gxe_single_line_text_input_text_select(GX_SINGLE_LINE_TEXT_INPUT *input, UINT start_index, UINT end_index)
{
UINT status;

    /* Check for invalid caller.  */
    GX_INIT_AND_THREADS_CALLER_CHECKING

    /* Check for invalid pointer. */
    if (!input)
    {
        return(GX_PTR_ERROR);
    }

    /* Check for invalid widget. */
    if (input -> gx_widget_type == 0)
    {
        return(GX_INVALID_WIDGET);
    }

    /* Check for invalid value. */
    if ((start_index >= input -> gx_single_line_text_input_string_size) ||
        (end_index >= input -> gx_single_line_text_input_string_size))
    {
        return(GX_INVALID_VALUE);
    }

    /* Call actual text input color set. */
    status = _gx_single_line_text_input_text_select(input, start_index, end_index);

    return(status);
}

