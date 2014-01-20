/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "OADFill.h"


@class NSMutableArray, OADRelativeRect, OADShade;



__attribute__((visibility("hidden")))

@interface OADGradientFill : OADFill

{

    NSMutableArray *mStops;

    _Bool mAreStopsOverridden;

    OADRelativeRect *mTileRect;

    _Bool mIsTileRectOverridden;

    int mFlipMode;

    _Bool mIsFlipModeOverridden;

    _Bool mRotateWithShape;

    _Bool mIsRotateWithShapeOverridden;

    OADShade *mShade;

    _Bool mIsShadeOverridden;

}



+ (id)defaultProperties;

- (void)addStopColor:(id)arg1 position:(float)arg2;

- (_Bool)areStopsOverridden;

- (void)clearStops;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (int)flipMode;

- (unsigned long long)hash;

- (id)initWithDefaults;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isFlipModeOverridden;

- (_Bool)isRotateWithShapeOverridden;

- (_Bool)isShadeOverridden;

- (_Bool)isTileRectOverridden;

- (_Bool)rotateWithShape;

- (void)setFlipMode:(int)arg1;

- (void)setParent:(id)arg1;

- (void)setRotateWithShape:(_Bool)arg1;

- (void)setShade:(id)arg1;

- (void)setStops:(id)arg1;

- (void)setStyleColor:(id)arg1;

- (void)setTileRect:(id)arg1;

- (id)shade;

- (id)stopColorAtIndex:(unsigned long long)arg1;

- (unsigned long long)stopCount;

- (float)stopPositionAtIndex:(unsigned long long)arg1;

- (id)stops;

- (id)tileRect;



@end


