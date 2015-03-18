//
//  BCOTimer.h
//  PazDra
//
//  Created by Daisuke Masuhara on 2014/02/03.
//  Copyright (c) 2014年 Daisuke Masuhara. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol BCOTimerDelegate;
@interface BCOTimer : NSObject

@property (nonatomic, weak) id<BCOTimerDelegate> delegate;
@property (nonatomic, readonly) BOOL isRunning;
@property (nonatomic, readonly) NSTimeInterval interval;
@property (nonatomic, readonly) NSTimeInterval runningTime;

- (id)initWithDelegate:(id<BCOTimerDelegate>)delegate;

- (void)startTimerWithInterval:(NSTimeInterval)interval
                    runForTime:(NSTimeInterval)runningTime;

- (void)destroy;

@end


@protocol BCOTimerDelegate <NSObject>

- (void)timerDidFired:(BCOTimer *)timer count:(NSUInteger)count progressTime:(NSTimeInterval)progressTime;
- (void)timerDidEnd:(BCOTimer *)timer;

@end