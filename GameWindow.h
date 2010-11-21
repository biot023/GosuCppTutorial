/*
 *  GameWindow.h
 *  GosuCppTutorial
 *
 *  Created by doug livesey on 20/11/2010.
 *  Copyright 2010 spatial intelligence. All rights reserved.
 *
 */

#ifndef __GAME_WINDOW_H
#define __GAME_WINDOW_H

#include <Gosu/Gosu.hpp>
#include <Gosu/AutoLink.hpp>

#include <boost/scoped_ptr.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/lexical_cast.hpp>

#include <cmath>
#include <cstdlib>
#include <list>
#include <vector>

#include "enums.h"
#include "Player.h"

class GameWindow : public Gosu::Window {
public:
  GameWindow();
  void update();
  void draw();
  void buttonDown( Gosu::Button );
  
private:
  boost::scoped_ptr<Gosu::Image> backgroundImage;
  Player player;
};

#endif
