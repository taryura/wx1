#include "wxGUI2.h"

void wxGUI2Frame::CreateToolbars()
{
    wxBitmap exit(wxT("exit.png"), wxBITMAP_TYPE_PNG);
    wxBitmap newb(wxT("new.png"), wxBITMAP_TYPE_PNG);
    wxBitmap open(wxT("open.png"), wxBITMAP_TYPE_PNG);
    wxBitmap save(wxT("save.png"), wxBITMAP_TYPE_PNG);

    wxBoxSizer *vbox = new wxBoxSizer(wxVERTICAL);

    toolbar1 = new wxToolBar(this, wxID_ANY);
    toolbar1->AddTool(idMenuFile_New, wxT("New"), newb);
    toolbar1->AddTool(idMenuFile_Open, wxT("Open"), open);
    toolbar1->AddTool(idMenuFile_Save, wxT(""), save);
    toolbar1->Realize();

    toolbar2 = new wxToolBar(this, wxID_ANY);
    toolbar2->AddTool(wxID_EXIT, wxT("Exit application"), exit);
    toolbar2->Realize();

    vbox->Add(toolbar1, 0, wxEXPAND);
    vbox->Add(toolbar2, 0, wxEXPAND);

    SetSizer(vbox);
    return;
}
