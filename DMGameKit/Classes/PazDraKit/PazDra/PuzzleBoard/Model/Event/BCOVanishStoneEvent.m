//
//  BCOVanishStoneEvent.m
//  PazDra
//
//  Created by Daisuke Masuhara on 2013/12/30.
//  Copyright (c) 2013年 Daisuke Masuhara. All rights reserved.
//

#import "BCOVanishStoneEvent.h"
#import "BCOStonePositionDefines.h"

@interface BCOVanishStoneEvent ()
@property (nonatomic) NSArray *vanishingPositions;
@end

@implementation BCOVanishStoneEvent

+ (instancetype)vanishStoneEventWithPositions:(NSArray *)vanishingPositions
{
    BCOVanishStoneEvent *event = [[BCOVanishStoneEvent alloc] init];
    event.vanishingPositions = vanishingPositions;
    return event;
}

@end