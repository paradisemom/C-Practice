#ifndef SCREEN_H
#define SCREEN_H

#include <iostream>
#include <string>
#include "WindowMgr.h"
using namespace std;

class Screen
{
    friend class WindowMgr;
    friend void WindowMgr::Clear(ScreenIndex);
public:
    typedef size_t pos;
    Screen()=default;
    Screen(pos ht,pos wd,char c): height(ht),width(wd),contents(ht*wd,c){}
    Screen(pos ht,pos wd): height(ht),width(wd),contents(ht*wd,' '){}
    Screen &Set(char);
    Screen &Set(pos,pos,char);
    char Get()const{
        return contents[cursor];
    }
    inline char Get(pos ht,pos wd) const;
    Screen &move(pos r,pos c);
    Screen Display(ostream &os){DoDisplay(os); return*this;}
    const Screen Display(ostream &os) const{DoDisplay(os); return*this;}

private:
    pos cursor=0;
    pos height=0,width=0;
    string contents;
    void DoDisplay(ostream &os) const {os<<contents;}
};


#endif