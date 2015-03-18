//
//  BCOCollisionUtils.h
//  PazDra
//
//  Created by Daisuke Masuhara on 2013/12/20.
//  Copyright (c) 2013年 Daisuke Masuhara. All rights reserved.
//

#import <UIKit/UIKit.h>


#ifndef PazDra_BCOCollisionUtils_h
#define PazDra_BCOCollisionUtils_h

// BCOLine
typedef struct {
    CGPoint start;
    CGPoint end;
} BCOLine;

// 線と矩形が衝突しているかどうか判定
extern BOOL isCollideLineAndRect(BCOLine line, CGRect rect);

#endif
