#include "welcome_frame.hpp"
#include "../../utils/enum.hpp"
enum
{
    ID_Text = 5
};

WelcomeFrame::WelcomeFrame(wxWindow* parent) : wxBoxSizer(wxVERTICAL) {
    this->welcomeText = new wxStaticText(parent, ID_Text, _T("Welcome to GUIFFMPEG"), wxPoint(0, 100), wxDefaultSize);
    this->welcomeText->SetFont(this->welcomeText->GetFont().Scale(2.0));
    Add(this->welcomeText, wxSizerFlags().Align(wxALIGN_CENTER));
    Add(new wxButton(parent, ID_main_button, _T("Upload a File"), wxDefaultPosition, wxSize(200, 50), 0),wxSizerFlags().Align(wxALIGN_CENTER));
}