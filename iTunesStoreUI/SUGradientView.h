/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class SUGradient;



@interface SUGradientView : UIView

{

    struct CGGradient *_cgGradient;

    SUGradient *_gradient;

}



- (void)dealloc;

- (void)drawRect:(struct CGRect)arg1;

@property(copy, nonatomic) SUGradient *gradient; // @synthesize gradient=_gradient;



@end


