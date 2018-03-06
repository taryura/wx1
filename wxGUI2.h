/***************************************************************
 * Name:      wxGUI2Main.h
 * Purpose:   Defines Application Frame
 * Author:    Iurii Taranenko (taryura@gmail.com)
 * Created:   2018-03-05
 * Copyright: Iurii Taranenko ()
 * License:
 **************************************************************/

#ifndef WXGUI2MAIN_H
#define WXGUI2MAIN_H

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

#include "Main.h"

class wxGUI2Frame: public wxFrame
{
    public:
        wxGUI2Frame(wxFrame *frame, const wxString& title);
        ~wxGUI2Frame();
    private:

        //declaring menu IDs
        enum
        {
            idMenuQuit = 1000,
            idMenuAbout
        };
        //declaring event handlers
        void OnClose(wxCloseEvent& event);
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);

        DECLARE_EVENT_TABLE()
};


#endif // WXGUI2MAIN_H
