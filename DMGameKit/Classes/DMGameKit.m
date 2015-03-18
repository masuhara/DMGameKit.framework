//
//  DMGameKit.m
//  DMGameKit
//
//  Created by Master on 2015/03/13.
//  Copyright (c) 2015年 net.masuhara. All rights reserved.
//

#import "DMGameKit.h"
#import "PuzzleBoard.h"

// extension
@interface DMGameKit () <BCOPuzzleBoardDelegate>

@property (weak, nonatomic) PuzzleBoard *puzzleBoard;

@end

@implementation DMGameKit


#pragma mark - PazDra
- (void)makePazDraView:(UIView *)baseView withRows:(int)rows andColumns:(int)columns {
    
    PuzzleBoard *puzzleView = [[PuzzleBoard alloc] init];
    puzzleView = (PuzzleBoard *)baseView;
    
    
    NSLog(@"framework内のメソッドから出力されたログ");
    [puzzleView setupBoardWithNumberOfRows:rows
                             numberOfColumns:columns];
    [puzzleView sizeToFit];
    puzzleView.delegate = self;

    CGFloat yOffset = CGRectGetHeight(puzzleView.superview.frame) - CGRectGetMaxY(puzzleView.frame);
    puzzleView.frame = CGRectOffset(puzzleView.frame, 0, yOffset);
}



- (void)fadeOutImageView:(UIImageView *)imageView withDuration:(float)time {
    
    [UIView beginAnimations:@"fadeOut" context:nil];
    [UIView setAnimationCurve:UIViewAnimationCurveEaseOut];
    [UIView setAnimationDuration:time];
    imageView.alpha = 0;
    [UIView commitAnimations];
}

- (UIImageView *)makeMonster:(UIImage *)image withFrame:(CGRect)frame {
    UIImageView *imageView = [[UIImageView alloc] initWithFrame:frame];
    imageView.image = image;
    imageView.contentMode = UIViewContentModeScaleAspectFit;
    return imageView;
}

- (NSArray *)makeMonsters:(NSArray *)imageArray {
    return nil;
}


#pragma mark - BCOPuzzleBoard delegate

- (void)puzzleBoard:(PuzzleBoard *)puzzleBoard didEndVanishWithStoneInfo:(BCOVanishedStoneInfo *)stoneInfo
{
    NSLog(@"type:%lu, %lu", (unsigned long)stoneInfo.type, (unsigned long)stoneInfo.numberOfStones);
}

- (void)puzzleBoard:(PuzzleBoard *)puzzleBoard didEndTurnWithStoneInfos:(NSArray *)stoneInfos
{
    NSUInteger combo = stoneInfos.count;
    int number = (int)combo;
    
    NSLog(@"%d combo!!", number);
    [puzzleBoard startNextTurn];
}




@end
