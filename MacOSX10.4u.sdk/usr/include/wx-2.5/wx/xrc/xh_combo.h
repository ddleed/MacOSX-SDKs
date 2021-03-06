/////////////////////////////////////////////////////////////////////////////
// Name:        xh_combo.h
// Purpose:     XML resource handler for wxComboBox
// Author:      Bob Mitchell
// Created:     2000/03/21
// RCS-ID:      $Id: xh_combo.h,v 1.4 2003/07/04 13:33:41 VS Exp $
// Copyright:   (c) 2000 Bob Mitchell and Verant Interactive
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _WX_XH_COMBO_H_
#define _WX_XH_COMBO_H_

#if defined(__GNUG__) && !defined(__APPLE__)
#pragma interface "xh_combo.h"
#endif

#include "wx/xrc/xmlres.h"

#if wxUSE_COMBOBOX

class WXDLLIMPEXP_XRC wxComboBoxXmlHandler : public wxXmlResourceHandler
{
DECLARE_DYNAMIC_CLASS(wxComboBoxXmlHandler)
public:
    wxComboBoxXmlHandler();
    virtual wxObject *DoCreateResource();
    virtual bool CanHandle(wxXmlNode *node);
private:
    bool m_insideBox;
    wxArrayString strList;
};

#endif

#endif // _WX_XH_COMBO_H_
