/*
 *  GameWindow.h
 *  GosuCppTutorial
 *
 *  Created by doug livesey on 20/11/2010.
 *  Copyright 2010 spatial intelligence. All rights reserved.
 *
 */

#include "my_includes.h"
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
