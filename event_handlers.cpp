#include "wxGUI2.h"


void wxGUI2Frame::OnClose(wxCloseEvent &event)
{
    Destroy();
}

void wxGUI2Frame::OnQuit(wxCommandEvent &event)
{
    Destroy();
}

void wxGUI2Frame::OnAbout(wxCommandEvent &event)
{
    wxString msg = "Hello my friend";
    wxMessageBox(msg, _("Welcome to..."));
}
