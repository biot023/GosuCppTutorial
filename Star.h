/*
 *  Star.h
 *  GosuCppTutorial
 *
 *  Created by doug livesey on 21/11/2010.
 *  Copyright 2010 spatial intelligence. All rights reserved.
 *
 */

#ifndef __STAR_H
#define __STAR_H

#include <Gosu/Gosu.hpp>
#include <Gosu/AutoLink.hpp>
#include <boost/shared_ptr.hpp>
#include "enums.h"

class Star {
public:
  explicit Star( Game::Animation& anim );
  
  double x() const { return posX; }
  double y() const { return posY; }
  
  void draw() const;
  
private:
  Game::Animation* animation;
  Gosu::Color colour;
  double posX, posY;
};

#endif
