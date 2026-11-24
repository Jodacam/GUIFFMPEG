#include "main_frame.hpp"
#include "../utils/enum.hpp"
#include <string>








MyFrame::MyFrame()
    : wxFrame(nullptr, wxID_ANY, "GUIFFMPEG")
{

    //Generates the main panel.
    this->mainPanel = new wxPanel(this);


    wxMenu* menuFile = new wxMenu;
    menuFile->Append(ID_Hello, "&Hello...\tCtrl-H",
        "Help string shown in status bar for this menu item");
    menuFile->AppendSeparator();
    menuFile->Append(wxID_EXIT);

    wxMenu* menuHelp = new wxMenu;
    menuHelp->Append(wxID_ABOUT);

    wxMenuBar* menuBar = new wxMenuBar;
    menuBar->Append(menuFile, "&File");
    menuBar->Append(menuHelp, "&Help");

    SetMenuBar(menuBar);

    CreateStatusBar();
    SetStatusText("Welcome to GUIFFMPEG!");

    Bind(wxEVT_MENU, &MyFrame::OnHello, this, ID_Hello);
    Bind(wxEVT_MENU, &MyFrame::OnAbout, this, wxID_ABOUT);
    Bind(wxEVT_MENU, &MyFrame::OnExit, this, wxID_EXIT);
    Bind(wxEVT_BUTTON, &MyFrame::OnClickMainButton, this, ID_main_button);
    topSizer = new wxBoxSizer(wxVERTICAL);
    this->welcomeframe = new WelcomeFrame(this->mainPanel);
    topSizer->Add(this->welcomeframe, wxSizerFlags().Align(wxALIGN_CENTER_HORIZONTAL));

    this->mainPanel->SetSizer(topSizer, true);
    this->mainPanel->Layout();


    Layout();


}

void MyFrame::OnExit(wxCommandEvent& event)
{
    Close(true);
}

void MyFrame::OnAbout(wxCommandEvent& event)
{
    wxMessageBox("This is a wxWidgets Hello World example",
        "About Hello World", wxOK | wxICON_INFORMATION);
}

void MyFrame::OnHello(wxCommandEvent& event)
{
    wxLogMessage("Hello world from wxWidgets!");
}

void MyFrame::OnClickMainButton(wxCommandEvent& event) {
    wxMessageBox("This is a wxWidgets Hello World example",
        "About Hello World", wxOK | wxICON_INFORMATION);
}