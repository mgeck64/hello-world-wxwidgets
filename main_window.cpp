#include "main_window.hpp"

main_window::main_window(const wxString& title, int width, int height) :
    wxFrame(0, wxID_ANY, title, wxDefaultPosition, wxSize(width, height)),
    panel{new wxPanel(this, wxID_ANY)},
    edit_box{new wxTextCtrl(panel, wxID_ANY, wxT(""), wxPoint(5,5), wxSize(160,24))},
    button{new wxButton(panel, wxID_ANY, wxT("Click me"), wxPoint(5,35), wxSize(80, 25))}
{
    button->Bind(wxEVT_BUTTON, &main_window::on_button_clicked, this);
}

void main_window::on_button_clicked(wxCommandEvent &) {
    edit_box->SetValue(wxT("Hello World!"));
}
