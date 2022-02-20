#ifndef MAIN_WINDOW_HPP
#define MAIN_WINDOW_HPP

#include <wx/wx.h>

class main_window : public wxFrame {
    wxPanel* panel;
    wxTextCtrl* edit_box;
    wxButton* button;

    void on_button_clicked(wxCommandEvent & event);
public:
    main_window() = delete;
    main_window(const wxString& title, int width, int height);
};

#endif // MAIN_WINDOW_HPP
