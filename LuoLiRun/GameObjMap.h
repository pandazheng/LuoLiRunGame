//
//  GameObjMap.h
//  LuoLiRun
//
//  Created by panda zheng on 13-5-28.
//
//

#ifndef __LuoLiRun__GameObjMap__
#define __LuoLiRun__GameObjMap__

#include <iostream>
#include "cocos2d.h"

using namespace cocos2d;

class GameObjMap : public CCNode
{
public:
    GameObjMap(void);
    short state;
    virtual ~GameObjMap(void);
    virtual void onEnter();
    virtual void onExit();
    void bg1change();
    void bg2change();
    CCArray *stars1;
    CCArray *stars2;
};

#endif /* defined(__LuoLiRun__GameObjMap__) */
