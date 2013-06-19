//
//  GameObjStar.h
//  LuoLiRun
//
//  Created by panda zheng on 13-5-28.
//
//

#ifndef __LuoLiRun__GameObjStar__
#define __LuoLiRun__GameObjStar__

#include <iostream>
#include "cocos2d.h"

using namespace cocos2d;

class GameObjStar : public CCNode
{
public:
    GameObjStar(void);
    short state;
    virtual ~GameObjStar(void);
    virtual void onEnter();
    virtual void onExit();
    bool _visable;
    void set_visable(bool var);
    bool get_visable();
};

#endif /* defined(__LuoLiRun__GameObjStar__) */
