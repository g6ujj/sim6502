/***************************************************************
 * Name:      Sim65App.cpp
 * Purpose:   Code for Application Class
 * Author:    Neil Stoker (gg6ujj@gmail.com)
 * Created:   2011-11-26
 * Copyright: Neil Stoker (https://sites.google.com/site/g6ujjcode/)
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "Sim65App.h"
#include "Sim65Main.h"

IMPLEMENT_APP(Sim65App);

bool Sim65App::OnInit()
{
    Sim65Frame* frame = new Sim65Frame(0L, _("wxWidgets Application Template"));
    
    frame->Show();
    
    return true;
}
