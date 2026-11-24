// Start of wxWidgets "Hello World" Program
#include <wx/wx.h>
#include "./frames/main_frame.hpp"
 
class MyApp : public wxApp
{
public:
    bool OnInit() override;
};
 
wxIMPLEMENT_APP_CONSOLE(MyApp);
 

bool MyApp::OnInit()
{
    MyFrame *frame = new MyFrame();
    frame->Show(true);
    return true;
}

 
