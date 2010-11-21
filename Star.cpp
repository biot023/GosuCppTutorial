/*
 *  Star.cpp
 *  GosuCppTutorial
 *
 *  Created by doug livesey on 21/11/2010.
 *  Copyright 2010 spatial intelligence. All rights reserved.
 *
 */

#include "Star.h"

Star::Star( Game::Animation& anim )
{
  animation = &anim;
  
  colour.setAlpha( 255 );
  double red = Gosu::random( 40, 255 );
  colour.setRed( static_cast<Gosu::Color::Channel>( red ) );
  double green = Gosu::random( 40, 255 );
  colour.setGreen( static_cast<Gosu::Color::Channel>( green ) );
  double blue = Gosu::random( 40, 255 );
  colour.setBlue( static_cast<Gosu::Color::Channel>( blue ) );
  
  posX = Gosu::random( 0, 640 );
  posY = Gosu::random( 0, 480 );
}

void Star::draw() const {
  Gosu::Image& image = *animation->at( Gosu::milliseconds() / 100 % animation->size() );
  image.draw( posX - image.width() / 2.0, posY - image.height() / 2.0,
              Game::zStars, 1, 1, colour, Gosu::amAdditive );
}
