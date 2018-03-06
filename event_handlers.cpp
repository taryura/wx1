#include "wxGUI2.h"

//General Close Event
void wxGUI2Frame::OnClose(wxCloseEvent &event)
{
    Destroy();
}


//File Menu

void wxGUI2Frame::OnNew(wxCommandEvent &event)
{
    wxString msg = "Supposed to create a new project";
    wxMessageBox(msg, _("Welcome to..."));
}

void wxGUI2Frame::OnOpen(wxCommandEvent &event)
{
    wxString msg = "Supposed to open an existing project";
    wxMessageBox(msg, _("Welcome to..."));
}

void wxGUI2Frame::OnSave(wxCommandEvent &event)
{
    wxString msg = "Supposed to save the project";
    wxMessageBox(msg, _("Welcome to..."));
}

//import submenu

void wxGUI2Frame::OnImpFromFile(wxCommandEvent &event)
{
    wxString msg = "Supposed to import an existing project from file";
    wxMessageBox(msg, _("Welcome to..."));
}

void wxGUI2Frame::OnImpFromURL(wxCommandEvent &event)
{
    wxString msg = "Supposed to import an existing project from website";
    wxMessageBox(msg, _("Welcome to..."));
}

//Quit
void wxGUI2Frame::OnQuit(wxCommandEvent &event)
{
    Destroy();
}



//Edit Menu

void wxGUI2Frame::OnCopy(wxCommandEvent &event)
{
    wxString msg = "Supposed to copy";
    wxMessageBox(msg, _("Welcome to..."));
}

void wxGUI2Frame::OnCut(wxCommandEvent &event)
{
    wxString msg = "Supposed to cut";
    wxMessageBox(msg, _("Welcome to..."));
}

void wxGUI2Frame::OnPaste(wxCommandEvent &event)
{
    wxString msg = "Supposed to paste";
    wxMessageBox(msg, _("Welcome to..."));
}

void wxGUI2Frame::OnAbout(wxCommandEvent &event)
{
    wxString msg = "Hello my friend";
    wxMessageBox(msg, _("Welcome to..."));
}
