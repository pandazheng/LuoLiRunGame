//
//  GameMark.h
//  LuoLiRun
//
//  Created by panda zheng on 13-5-28.
//
//

#ifndef __LuoLiRun__GameMark__
#define __LuoLiRun__GameMark__

#include <iostream>
#include "cocos2d.h"

using namespace cocos2d;

class GameMark : public CCNode
{
public:
    GameMark(void);
    virtual ~GameMark(void);
    virtual void onEnter();
    virtual void onExit();
    CCArray *bits;
    int mark;
    void addnumber(int var);
    CCTexture2D *ui;
};

#endif /* defined(__LuoLiRun__GameMark__) */
