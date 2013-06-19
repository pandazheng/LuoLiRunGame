//
//  GameMenu.h
//  LuoLiRun
//
//  Created by panda zheng on 13-5-28.
//
//

#ifndef __LuoLiRun__GameMenu__
#define __LuoLiRun__GameMenu__

#include <iostream>
#include "cocos2d.h"

using namespace cocos2d;

class GameMenu : public cocos2d::CCLayer
{
public:
    bool issound;
    
    CCMenuItemImage *soundItem;
    
    virtual bool init();
    
    virtual void onEnter();
    
    virtual void onExit();
    
    static cocos2d::CCScene* scene();
    
    void menuEnter();
    
    void menuNewGameCallback(CCObject *pSender);
    
    void menuContinueCallback(CCObject *pSender);
    
    void menuSoundCallback(CCObject *pSender);
    
    void menuAboutCallback(CCObject *pSender);
    
    CREATE_FUNC(GameMenu);
    
    void onEnterTransitionDidFinish();
    
    void onExitTransitionDidStart();
};

#endif /* defined(__LuoLiRun__GameMenu__) */
