/*
 *  Player.h
 *  GosuCppTutorial
 *
 *  Created by doug livesey on 20/11/2010.
 *  Copyright 2010 spatial intelligence. All rights reserved.
 *
 */

#ifndef __PLAYER
#define __PLAYER

#include "my_includes.h"

class Player {
public:
  explicit Player( Gosu::Graphics& graphics );
  
  void warp( double x, double y );
  void turnLeft();
  void turnRight();
  void accelerate();
  void move();
  void draw();
  
private:
  boost::scoped_ptr<Gosu::Image> image;
  double posX, posY, velX, velY, angle;
};

#endif
