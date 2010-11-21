/*
 *  GameWindow.cpp
 *  GosuCppTutorial
 *
 *  Created by doug livesey on 20/11/2010.
 *  Copyright 2010 spatial intelligence. All rights reserved.
 *
 */

#include "GameWindow.h"

GameWindow::GameWindow()
: Window( 640, 480, true ), player( graphics() )
{
  setCaption( L"Gosu Tutorial Game" );
  std::wstring filename = Gosu::sharedResourcePrefix() + L"media/Space.png";
  backgroundImage.reset( new Gosu::Image( graphics(), filename, false ) );
  
  filename = Gosu::sharedResourcePrefix() + L"media/Star.png";
  Gosu::imagesFromTiledBitmap( graphics(), filename, 25, 25, false, starAnim );
  
  player.warp( 320, 240 );
}

void GameWindow::update() {
  if ( input().down( Gosu::kbLeft ) || input().down( Gosu::gpLeft ) )
    player.turnLeft();
  if ( input().down( Gosu::kbRight ) || input().down( Gosu::gpRight ) )
    player.turnRight();
  if ( input().down( Gosu::kbUp ) || input().down( Gosu::gpButton0 ) )
    player.accelerate();
  player.move();
  player.collectStars( stars );
  if ( std::rand() % 25 == 0 && stars.size() < 25 )
    stars.push_back( Star( starAnim ) );
}

void GameWindow::draw() {
  player.draw();
  backgroundImage->draw( 0, 0, Game::zBackground );
  for ( std::list<Star>::const_iterator i = stars.begin(); i != stars.end(); ++i )
    i->draw();
}

void GameWindow::buttonDown( Gosu::Button button ) {
  if ( button == Gosu::kbEscape ) close();
}
