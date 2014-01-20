/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "OADPathElement.h"


__attribute__((visibility("hidden")))

@interface OADVectorArcPathElement : OADPathElement

{

    struct OADAdjustCoord mLeft;

    struct OADAdjustCoord mTop;

    struct OADAdjustCoord mRight;

    struct OADAdjustCoord mBottom;

    struct OADAdjustPoint mStartVector;

    struct OADAdjustPoint mEndVector;

    _Bool mClockwise;

    _Bool mConnectedToPrevious;

}



- (id).cxx_construct;

- (struct OADAdjustCoord)bottom;

- (_Bool)clockwise;

- (_Bool)connectedToPrevious;

- (struct OADAdjustPoint)endVector;

- (id)initWithLeft:(struct OADAdjustCoord)arg1 top:(struct OADAdjustCoord)arg2 right:(struct OADAdjustCoord)arg3 bottom:(struct OADAdjustCoord)arg4 startVector:(struct OADAdjustPoint)arg5 endVector:(struct OADAdjustPoint)arg6 clockwise:(_Bool)arg7 connectedToPrevious:(_Bool)arg8;

- (struct OADAdjustCoord)left;

- (struct OADAdjustCoord)right;

- (struct OADAdjustPoint)startVector;

- (struct OADAdjustCoord)top;



@end


