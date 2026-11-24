#include <wx/wx.h>


class MyFrame : public wxFrame
{
public:
    MyFrame();
    wxButton* mainButton;
private:
    void OnHello(wxCommandEvent& event);
    void OnExit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
};