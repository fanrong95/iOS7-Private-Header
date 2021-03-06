/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class CAKeyframeAnimation, NSArray;



@interface PLCameraFocusView : UIView

{

    NSArray *_images;

    CAKeyframeAnimation *_contentsAnimation;

    CAKeyframeAnimation *_boundsAnimation;

    double _animationStartTime;

    _Bool _fadingOut;

}



- (id)_createBoundsAnimation;

- (id)_createContentsAnimation;

- (void)_fadeOut;

- (void)_fadeOutDidFinish;

- (void)_loadImagesWithImageSize:(struct CGSize *)arg1;

- (void)dealloc;

- (double)fadeInDuration;

- (double)fadeOutDuration;

- (void)focusDidEnd;

- (id)init;

- (id)nameForDarkImage;

- (id)nameForLightImage;

- (void)startAnimating;

- (void)stopAnimating;



@end


