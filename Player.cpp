/*
 *  Player.cpp
 *  GosuCppTutorial
 *
 *  Created by doug livesey on 20/11/2010.
 *  Copyright 2010 spatial intelligence. All rights reserved.
 *
 */

#include "Player.h"

Player::Player( Gosu::Graphics& graphics )
{
  std::wstring filename = Gosu::sharedResourcePrefix() + L"media/Starfighter.bmp";
  image.reset( new Gosu::Image( graphics, filename ) );
  posX = posY = velX = velY = angle = 0;
}

void Player::warp( double x, double y ) {
  posX = x;
  posY = y;
}

void Player::turnLeft() { angle -= 4.5; }

void Player::turnRight() { angle += 4.5; }

void Player::accelerate() {
  velX += Gosu::offsetX( angle, 0.5 );
  velY += Gosu::offsetY( angle, 0.5 );
}

void Player::move() {
  posX += velX;
  posY += velY;
  while ( posX < 0 )    posX += 640;
  while ( posX > 640 )  posX -= 640;
  while ( posY < 0 )    posY += 480;
  while ( posY > 480 )  posY -= 480;
  velX *= 0.95;
  velY *= 0.95;
}

void Player::draw() {
  image->drawRot( posX, posY, Game::zPlayer, angle );
}
