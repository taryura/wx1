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

    wxPanel *panel = new wxPanel(this, -1);

    wxBoxSizer *vbox = new wxBoxSizer(wxVERTICAL);

    toolbar1 = new wxToolBar(panel, wxID_ANY);
    toolbar1->AddTool(idMenuFile_New, wxT("New"), newb);
    toolbar1->AddTool(idMenuFile_Open, wxT("Open"), open);
    toolbar1->AddTool(idMenuFile_Save, wxT(""), save);
    toolbar1->Realize();

    toolbar2 = new wxToolBar(panel, wxID_ANY, wxDefaultPosition,
		wxDefaultSize, wxBORDER_NONE|wxTB_FLAT|wxTB_TEXT);
    toolbar2->AddTool(wxID_EXIT, wxT("Exit application"), exit);
    toolbar2->AddTool(idMenuFile_Open, wxT("Open"), open);
    toolbar2->Realize();

    vbox->Add(toolbar1, 0, wxEXPAND);
    //vbox->Add(toolbar2, 2, wxALIGN_RIGHT | wxEXPAND);
    vbox->Add(toolbar2, 0, wxALIGN_RIGHT | wxTOP | wxRIGHT | wxLEFT, 1);

        Connect(wxID_EXIT, wxEVT_COMMAND_TOOL_CLICKED,
        wxCommandEventHandler(wxGUI2Frame::OnQuit));

    //SetSizer(vbox);

    wxBoxSizer *hbox1 = new wxBoxSizer(wxHORIZONTAL);
    wxStaticText *st1 =  new wxStaticText(panel, wxID_ANY,
        wxT("File Name"));

    hbox1->Add(st1, 0, wxRIGHT, 8);
    wxTextCtrl *tc = new wxTextCtrl(panel, wxID_ANY);
    hbox1->Add(tc, 1);
    vbox->Add(hbox1, 0, wxEXPAND | wxLEFT | wxRIGHT | wxTOP, 10);

    vbox->Add(-1, 10);

    wxBoxSizer *hbox2 = new wxBoxSizer(wxHORIZONTAL);
    wxStaticText *st2 = new wxStaticText(panel, wxID_ANY,
        wxT("Matching Files"));

    hbox2->Add(st2, 0);
    vbox->Add(hbox2, 0, wxLEFT | wxTOP, 10);

    vbox->Add(-1, 10);

    wxBoxSizer *hbox3 = new wxBoxSizer(wxHORIZONTAL);
    wxTextCtrl *tc2 = new wxTextCtrl(panel, wxID_ANY, wxT(""),
        wxPoint(-1, -1), wxSize(-1, -1), wxTE_MULTILINE);

    hbox3->Add(tc2, 1, wxEXPAND);
    vbox->Add(hbox3, 1, wxLEFT | wxRIGHT | wxEXPAND, 10);

    vbox->Add(-1, 25);

    wxBoxSizer *hbox4 = new wxBoxSizer(wxHORIZONTAL);
    wxCheckBox *cb1 = new wxCheckBox(panel, wxID_ANY,
        wxT("Case Sensitive"));

    hbox4->Add(cb1);
    wxCheckBox *cb2 = new wxCheckBox(panel, wxID_ANY,
        wxT("Search in subdirectories"));

    hbox4->Add(cb2, 0, wxLEFT, 10);
    wxCheckBox *cb3 = new wxCheckBox(panel, wxID_ANY,
        wxT("All file extensions"));

    hbox4->Add(cb3, 0, wxLEFT, 10);
    vbox->Add(hbox4, 0, wxLEFT, 10);

    vbox->Add(-1, 25);

    wxBoxSizer *hbox5 = new wxBoxSizer(wxHORIZONTAL);
    wxButton *btn1 = new wxButton(panel, wxID_ANY, wxT("Ok"));
    hbox5->Add(btn1, 0);
    wxButton *btn2 = new wxButton(panel, wxID_ANY, wxT("Close"));
    hbox5->Add(btn2, 0, wxLEFT | wxBOTTOM , 5);
    vbox->Add(hbox5, 0, wxALIGN_RIGHT | wxRIGHT, 10);

    panel->SetSizer(vbox);

    Centre();



    return;
}
