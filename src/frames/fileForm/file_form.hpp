#include <wx/wx.h>


class FileForm: public wxBoxSizer
{
private:
    wxChoice* formatSelector;
    wxChoice* codecSelector;
public:
    FileForm(wxWindow* parent);
};



