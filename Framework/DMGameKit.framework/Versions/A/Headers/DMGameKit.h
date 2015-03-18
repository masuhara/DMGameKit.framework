//
//  DMGameKit.h
//  DMGameKit
//
//  Created by Master on 2015/03/13.
//  Copyright (c) 2015年 net.masuhara. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@interface DMGameKit : NSObject

// Common
- (void)fadeOutImageView:(UIImageView *)imageView withDuration:(float)time;
- (UIImageView *)makeMonster:(UIImage *)image withFrame:(CGRect)frame;
- (NSArray *)makeMonsters:(NSArray *)imageViewArray;

// PazDra
- (void)makePazDraView:(UIView *)view withRows:(int)rows andColumns:(int)columns;

@end
