/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "GKThemeBrush.h"


@interface GKImageBrush : GKThemeBrush

{

    id _inputTransform;

}



- (void)dealloc;

- (void)drawInRect:(struct CGRect)arg1 withContext:(struct CGContext *)arg2 input:(id)arg3;

@property(copy, nonatomic) id inputTransform; // @synthesize inputTransform=_inputTransform;

- (double)scaleForInput:(id)arg1;

- (struct CGSize)sizeForInput:(id)arg1;



@end


