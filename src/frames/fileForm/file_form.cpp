#include "file_form.hpp"

FileForm::FileForm(wxWindow* parent) : wxBoxSizer(wxVERTICAL)
{
    Add(new wxStaticText(parent, -1, _T("Fill the form"), wxPoint(0, 100), wxDefaultSize));
    formatSelector = new wxChoice(parent,-1,wxDefaultPosition,wxSize(100,36));
    formatSelector->Insert(_T("MPEG"),0);
    formatSelector->Insert(_T("AVI"),0);
    Add(formatSelector, wxSizerFlags());
    wxButton* endButton = new wxButton(parent,-1, _T("Convert Video"),wxDefaultPosition,wxSize(200,36));
    Add(endButton, wxSizerFlags().Align(wxALIGN_CENTER_HORIZONTAL));
}