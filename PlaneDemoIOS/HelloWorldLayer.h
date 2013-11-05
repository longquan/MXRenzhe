//
//  HelloWorldLayer.h
//  PlaneDemoIOS
//
//  Created by longquan on 13-10-31.
//  Copyright longquan 2013年. All rights reserved.
//


#import <GameKit/GameKit.h>
#import "GameOverScene.h"
// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"
// HelloWorldLayer
@interface HelloWorldLayer : CCLayerColor <GKAchievementViewControllerDelegate, GKLeaderboardViewControllerDelegate>
{
    NSMutableArray *_targets;
    NSMutableArray *_projectiles;
    int _projectilesDestroyed;
}

// returns a CCScene that contains the HelloWorldLayer as the only child
+(CCScene *) scene;

@end

