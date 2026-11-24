#include "file_form.hpp"

FileForm::FileForm(wxWindow* parent) : wxBoxSizer(wxVERTICAL)
{
    Add(new wxStaticText(parent, -1, _T("Fill the form"), wxPoint(0, 100), wxDefaultSize));
}