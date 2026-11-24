#include <wx/wx.h>

class WelcomeFrame : public wxBoxSizer
{
public:
    WelcomeFrame(wxWindow* parent);
    wxStaticText* welcomeText;
};