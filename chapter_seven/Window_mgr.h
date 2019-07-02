#ifndef WINDOW_MGR_H
#define WINDOW_MGR_H

#include <iostream>
#include <vector>
#include <string>
#include "Screen.h"
using std::string;

class Window_mgr {

public:
    using ScreenIndex = std::vector<Screen>::size_type;
    // 将指定的screen对象重置为空白
    void clear(ScreenIndex);
    // 添加新的screen
    ScreenIndex addScreen(const Screen&);

private:
    std::vector<Screen> screens{Screen(24, 80, ' ')};

};

void Window_mgr::clear(ScreenIndex i)
{
    Screen &s = screens[i];
    s.contents = string(s.height * s.width, ' ');
}

Window_mgr::ScreenIndex Window_mgr::addScreen(const Screen &s)
{
    screens.push_back(s);
    return screens.size() - 1;
}

#endif