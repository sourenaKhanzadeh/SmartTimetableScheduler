//
// Created by sourena khanzadeh on 2023-03-18.
//
#include <elements.hpp>
#include <string>

using namespace cycfi::elements;

// Main window background color
auto constexpr bkd_color = rgba(35, 35, 37, 255);
auto background = box(bkd_color);

int main(int argc, char** argv)
{
    app _app(argc, argv, "Elements App", "org.cycfi.elements.app");
    window _win(_app.name());
    _win.on_close = [&_app]() { _app.stop(); };

    view view_(_win);

    view_.content(
            background
    );

    _app.run();
    return 0;
}