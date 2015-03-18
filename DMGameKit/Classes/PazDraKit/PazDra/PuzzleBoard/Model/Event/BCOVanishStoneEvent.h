//
//  BCOVanishStoneEvent.h
//  PazDra
//
//  Created by Daisuke Masuhara on 2013/12/30.
//  Copyright (c) 2013年 Daisuke Masuhara. All rights reserved.
//

#import "BCOEvent.h"
#import "BCOEventQueue.h"

@interface BCOVanishStoneEvent : BCOEvent

@property (nonatomic, readonly) NSArray *vanishingPositions;

+ (instancetype)vanishStoneEventWithPositions:(NSArray *)vanishingPositions;

@end