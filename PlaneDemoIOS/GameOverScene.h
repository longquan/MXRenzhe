//
//  GameOverScene.h
//  PlaneDemoIOS
//
//  Created by longquan on 13-11-1.
//  Copyright (c) 2013年 longquan. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "cocos2d.h"

@interface GameOverLayer : CCLayerColor {
    CCLabelTTF *_label;
}
@property (nonatomic, retain) CCLabelTTF *label;
@end

@interface GameOverScene : CCScene {
    GameOverLayer *_layer;
}
@property (nonatomic, retain) GameOverLayer *layer;
@end
