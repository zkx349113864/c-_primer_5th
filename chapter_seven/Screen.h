#ifndef SCREEN_H
#define SCREEN_H

#include <iostream>

class Screen {

    // 友元声明
    friend class Window_mgr;

    public:
        typedef std::string::size_type pos;
        Screen() = default; // 默认构造函数
        Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ') {}
        Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) {}
        char get() const
        {
            return contents[cursor];
        }
        // inline char get(pos ht, pos wd) const;
        char get(pos ht, pos wd) const;
        Screen &move(pos r, pos c);
        void some_member() const;
        Screen &set (char);
        Screen &set (pos, pos, char);
        Screen &display(std::ostream &os)
        {
            do_display(os);
            return *this;
        }
        const Screen &display(std::ostream &os) const
        {
            do_display(os);
            return *this;
        }
        pos size() const;
    private:
        pos cursor = 0;
        pos height = 0, width = 0;
        std::string contents;
        mutable size_t access_str;
        void do_display(std::ostream &os) const
        {
            os << contents;
        }
};

inline
    Screen &Screen::move(pos r, pos c)
    {
        pos row = r * width;
        cursor = row + c;
        return *this;
    }

    char Screen::get(pos r, pos c) const
    {
        pos row = r * width;
        return contents[row + c];
    }

    Screen &Screen::set(char c)
    {
        contents[cursor] = c;
        return *this;
    }
    
    Screen &Screen::set(pos r, pos col, char ch)
    {
        contents[r*width + col] = ch;
        return *this;
    }

    Screen::pos Screen::size() const
    {
        return height * width;
    }

void Screen::some_member() const
{
    ++access_str;
}

#endif