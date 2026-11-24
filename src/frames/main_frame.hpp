#include <wx/wx.h>
#include "welcome/welcome_frame.hpp"



class MyFrame : public wxFrame
{
public:
    MyFrame();
    wxButton* mainButton;
    wxPanel* mainPanel;
    WelcomeFrame* welcomeframe;
    wxBoxSizer* topSizer;
    int counter = 0;
private:
    void OnHello(wxCommandEvent& event);
    void OnExit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
    void OnClickMainButton(wxCommandEvent& event);
};