#include "app.hpp"
#include "main_window.hpp"

IMPLEMENT_APP(app)

bool app::OnInit() {
    auto main_win = new main_window(wxT("Hello World"), 640, 480);
    main_win->Show(true);

    return true;
}
