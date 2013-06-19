//
//  GameMain.h
//  LuoLiRun
//
//  Created by panda zheng on 13-5-28.
//
//

#ifndef __LuoLiRun__GameMain__
#define __LuoLiRun__GameMain__

#include <iostream>
#include "cocos2d.h"
#include "GameObjHero.h"
#include "GameObjMap.h"
#include "GameMark.h"

using namespace cocos2d;

class GameMain : public cocos2d::CCLayer
{
public:
    GameObjHero *hero;
    
    virtual bool init();
    bool isover;
    virtual void onExit();
    virtual void onEnter();
    
    void isherodrop();
    void setover();
    GameObjMap *map;
    GameMark *gamemark;
    CCSprite *gameover;
    static cocos2d::CCScene *scene();
    
    void menuBackCallback(CCObject *pSender);
    CREATE_FUNC(GameMain);
    
    void update(float time);
    void onEnterTransitionDidFinish();
    void onExitTransitionDidStart();
    
    bool isCollion(CCPoint p1,CCPoint p2,int w1,int h1,int w2,int h2);
    
};

#endif /* defined(__LuoLiRun__GameMain__) */
