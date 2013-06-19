//
//  GameAbout.h
//  LuoLiRun
//
//  Created by panda zheng on 13-5-28.
//
//

#ifndef __LuoLiRun__GameAbout__
#define __LuoLiRun__GameAbout__

#include <iostream>
#include "cocos2d.h"

using namespace cocos2d;

class GameAbout : public cocos2d::CCLayer
{
public:
    virtual bool init();
    
    virtual void onEnter();
    
    virtual void onExit();
    
    static cocos2d::CCScene* scene();
    
    void menuBackCallback(CCObject *pSender);
    
    CREATE_FUNC(GameAbout);
    
    void onEnterTransitionDidFinish();
    
    void onExitTransitionDidStart();
};

#endif /* defined(__LuoLiRun__GameAbout__) */
