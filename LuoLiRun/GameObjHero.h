//
//  GameObjHero.h
//  LuoLiRun
//
//  Created by panda zheng on 13-5-28.
//
//

#ifndef __LuoLiRun__GameObjHero__
#define __LuoLiRun__GameObjHero__

#include <iostream>
#include "cocos2d.h"

using namespace cocos2d;

class GameObjHero : public CCNode,public CCTargetedTouchDelegate
{
public:
    CCSprite *mainsprite;
    CCTexture2D *hurt;
    CCTexture2D *jump;
    CCPoint offset;
    short state;        //0:正常 1:跳跃 2:受伤
    bool iscontrol;
    GameObjHero(void);
    virtual ~GameObjHero(void);
    void setState(short var);
    CCRect rect();
    virtual void onEnter();
    virtual void onExit();
    void jumpend();
    void hurtend();
    bool containsTouchLocation(CCTouch* touch);
    virtual bool ccTouchBegan(CCTouch* touch,CCEvent* event);
    virtual void ccTouchMoved(CCTouch* touch,CCEvent* event);
    virtual void ccTouchEnded(CCTouch* touch,CCEvent* event);
    
    virtual void touchDelegateRetain();
    virtual void touchDelegateRelease();
};

#endif /* defined(__LuoLiRun__GameObjHero__) */
