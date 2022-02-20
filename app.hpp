#ifndef APP_H
#define APP_H

#include <wx/app.h>
#include "main_window.hpp"

class app : public wxApp {
public:
    virtual bool OnInit();
};

#endif // APP_H
