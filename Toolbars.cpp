/***************************************************************
 * Name:      Toolbars.cpp
 * Purpose:   Code for Toolbars items
 * Author:    Iurii Taranenko (taryura@gmail.com)
 * Created:   2018-03-06
 * Copyright: Iurii Taranenko ()
 * License:
 **************************************************************/

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

    toolbar2 = new wxToolBar(this, wxID_ANY, wxDefaultPosition,
		wxDefaultSize, wxBORDER_NONE|wxTB_VERTICAL|wxTB_NODIVIDER|wxTB_FLAT|wxTB_TEXT);
    toolbar2->AddTool(wxID_EXIT, wxT("Exit application"), exit);
    toolbar2->AddTool(idMenuFile_Open, wxT("Open"), open);
    toolbar2->Realize();

    vbox->Add(toolbar1, 0, wxEXPAND);
    //vbox->Add(toolbar2, 2, wxALIGN_RIGHT | wxEXPAND);
    vbox->Add(toolbar2, 2, wxALIGN_RIGHT | wxTOP | wxRIGHT | wxLEFT, 1);

    SetSizer(vbox);
    //toolbar2->SetSizer(vbox);

    Connect(wxID_EXIT, wxEVT_COMMAND_TOOL_CLICKED,
        wxCommandEventHandler(wxGUI2Frame::OnQuit));

    return;
}
