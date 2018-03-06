#include "wxGUI2.h"

BEGIN_EVENT_TABLE(wxGUI2Frame, wxFrame)
    EVT_CLOSE(wxGUI2Frame::OnClose)
    EVT_MENU(idMenuQuit, wxGUI2Frame::OnQuit)
    EVT_MENU(idMenuAbout, wxGUI2Frame::OnAbout)
END_EVENT_TABLE()
