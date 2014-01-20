/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIControl.h"


__attribute__((visibility("hidden")))

@interface UIRemoveControlMinusButton : UIControl

{

    unsigned int _rotated:1;

    unsigned int _rotating:1;

    unsigned int _hiding:1;

    unsigned int _showAsPlus:1;

    unsigned int _reserved:28;

    float _verticalOffset;

}



+ (float)defaultWidth;

+ (id)minusImage;

+ (id)plusImage;

- (void)_toggleRotateAnimationDidStop:(id)arg1 finished:(_Bool)arg2;

- (void)animator:(id)arg1 stopAnimation:(id)arg2;

- (void)dealloc;

- (void)drawRect:(struct CGRect)arg1;

- (id)initWithRemoveControl:(id)arg1;

- (_Bool)isHiding;

- (_Bool)isRotated;

- (_Bool)isRotating;

- (void)setHiding:(_Bool)arg1;

- (void)toggleRotate:(_Bool)arg1;



@end


