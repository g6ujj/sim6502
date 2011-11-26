/***************************************************************
 * Name:      Sim65Main.h
 * Purpose:   Defines Application Frame
 * Author:    Neil Stoker (gg6ujj@gmail.com)
 * Created:   2011-11-26
 * Copyright: Neil Stoker (https://sites.google.com/site/g6ujjcode/)
 * License:
 **************************************************************/

#ifndef SIM65MAIN_H
#define SIM65MAIN_H

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif
#include "wx/sizer.h"
#include "Sim65App.h"

class Sim65Frame: public wxFrame
{
    public:
        Sim65Frame(wxFrame *frame, const wxString& title);
        ~Sim65Frame();
    private:
        enum
        {
            idMenuQuit = 1000,
            idMenuAbout
        };

        wxFlegGridSizer *fgs;
        void OnClose(wxCloseEvent& event);
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        DECLARE_EVENT_TABLE()
};


#endif // SIM65MAIN_H
