/*
 *  enums.h
 *  GosuCppTutorial
 *
 *  Created by doug livesey on 21/11/2010.
 *  Copyright 2010 spatial intelligence. All rights reserved.
 *
 */

#ifndef __ENUMS_H
#define __ENUMS_H

namespace Game {

  enum ZOrder {
    zBackground,
    zStars,
    zPlayer,
    zUI
  };
  
  typedef std::vector<boost::shared_ptr<Gosu::Image> > Animation;

}

#endif
