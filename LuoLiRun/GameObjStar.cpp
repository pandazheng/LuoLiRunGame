//
//  GameObjStar.cpp
//  LuoLiRun
//
//  Created by panda zheng on 13-5-28.
//
//

#include "GameObjStar.h"
void GameObjStar::set_visable(bool var)
{
    _visable = var;
    this->setVisible(var);
}

bool GameObjStar::get_visable()
{
    return _visable;
}

GameObjStar::GameObjStar()
{
    
}

GameObjStar::~GameObjStar()
{
    
}

void GameObjStar::onEnter()
{
    CCNode::onEnter();
    //星星初始化
    this->setContentSize(CCSizeMake(36.5, 35.5));
    CCSprite *star = CCSprite::create("star.png");
    star->setScale(0.5);
    _visable = true;
    addChild(star,1);
}

void GameObjStar::onExit()
{
    CCNode::onExit();
}