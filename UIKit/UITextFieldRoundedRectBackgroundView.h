/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UITextFieldBackgroundView.h"


@class UIImageView;



__attribute__((visibility("hidden")))

@interface UITextFieldRoundedRectBackgroundView : UITextFieldBackgroundView

{

    UIImageView *_leftCap;

    UIImageView *_center;

    UIImageView *_rightCap;

    UIImageView *_progressFill;

}



- (void)_updateImages;

- (void)dealloc;

- (void)layoutSubviews;



@end


