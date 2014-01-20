/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CMProperty.h"


@class TSUColor;



__attribute__((visibility("hidden")))

@interface CMBordersProperty : CMProperty

{

    TSUColor *mBorderColor;

    TSUColor *mBorderTopColor;

    TSUColor *mBorderLeftColor;

    TSUColor *mBorderBottomColor;

    TSUColor *mBorderRightColor;

    int mBorderStyle[5];

    int mBorderWidth[5];

    int mCustomWidth;

}



+ (_Bool)isStroked:(id)arg1;

- (void)adjustValues;

- (id)colorString;

- (id)cssString;

- (id)cssStringForName:(id)arg1;

- (id)init;

- (id)initWithOADStroke:(id)arg1;

- (_Bool)isNoneAtLocation:(int)arg1;

- (void)setFromOadStroke:(id)arg1 atLocation:(int)arg2 state:(id)arg3;

- (void)setNoneAtLocation:(int)arg1;

- (id)stringFromColor:(id)arg1;

- (id)stringFromStyleEnum:(int)arg1;

- (id)stringFromWidthEnum:(int)arg1;

- (id)styleString;

- (id)widthString;



@end


