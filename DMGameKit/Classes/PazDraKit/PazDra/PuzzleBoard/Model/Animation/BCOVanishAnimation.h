//
//  BCOVanishAnimation.h
//  PazDra
//
//  Created by Daisuke Masuhara on 2014/01/02.
//  Copyright (c) 2014年 Daisuke Masuhara. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

typedef void (^BCOVanishAnimationCompletion)(void);

//===============================
// 石を消すアニメーションを実行
//===============================
@interface BCOVanishAnimation : NSObject

- (void)vanishStoneViews:(NSArray *)vanishStones
                duration:(NSTimeInterval)duration
              completion:(BCOVanishAnimationCompletion)completion;

- (void)cancelAnimation;

@end
