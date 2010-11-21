/*
 *  Player.h
 *  GosuCppTutorial
 *
 *  Created by doug livesey on 20/11/2010.
 *  Copyright 2010 spatial intelligence. All rights reserved.
 *
 */

#ifndef __PLAYER_H
#define __PLAYER_H

#include <Gosu/Gosu.hpp>
#include <Gosu/AutoLink.hpp>
#include <list>
#include <boost/scoped_ptr.hpp>
#include "enums.h"
#include "Star.h"

class Player {
public:
  explicit Player( Gosu::Graphics& graphics );
  
  void warp( double x, double y );
  void turnLeft();
  void turnRight();
  void accelerate();
  void move();
  void draw() const;
  
  void collectStars( std::list<Star>& stars ) const;
  
private:
  boost::scoped_ptr<Gosu::Image> image;
  double posX, posY, velX, velY, angle;
};

#endif
