/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class CALayer, CAShapeLayer, TSDBezierPath, TSDRep;



__attribute__((visibility("hidden")))

@interface TSDKnob : NSObject

{

    int mType;

    struct CGPoint mPosition;

    _Bool mOffsetValid;

    struct CGPoint mOffset;

    double mRadius;

    unsigned long long mTag;

    TSDRep *mRep;

    _Bool mWorksWhenRepLocked;

    _Bool mWorksWhenInVersionBrowsingMode;

    _Bool mShouldDisplayDirectlyOverRep;

    CALayer *mLayer;

    TSDBezierPath *mHitRegionPath;

    CAShapeLayer *mHitRegionLayer;

}



- (struct CGRect)boundingBoxOfHitRegionForRep:(id)arg1 scale:(double)arg2;

- (void)dealloc;

- (id)description;

- (int)dragType;

- (id)hitRegionLayerForRep:(id)arg1;

@property(copy, nonatomic) TSDBezierPath *hitRegionPath; // @synthesize hitRegionPath=mHitRegionPath;

- (double)i_rotationInDegreesForKnobOnRep:(id)arg1;

- (id)init;

- (id)initWithType:(int)arg1 position:(struct CGPoint)arg2 radius:(double)arg3 tag:(unsigned long long)arg4 onRep:(id)arg5;

- (_Bool)isHitByUnscaledPoint:(struct CGPoint)arg1 andRep:(id)arg2;

- (_Bool)isHitByUnscaledPoint:(struct CGPoint)arg1 andRep:(id)arg2 returningDistance:(double *)arg3;

- (id)knobImage;

@property(readonly, nonatomic) CALayer *layer;

- (_Bool)obscuresKnob:(id)arg1;

@property(nonatomic) struct CGPoint offset; // @synthesize offset=mOffset;

@property(nonatomic) _Bool offsetValid; // @synthesize offsetValid=mOffsetValid;

- (_Bool)overlapsWithKnob:(id)arg1;

@property(nonatomic) struct CGPoint position; // @synthesize position=mPosition;

@property(nonatomic) double radius; // @synthesize radius=mRadius;

@property(readonly, nonatomic) TSDRep *rep; // @synthesize rep=mRep;

@property(nonatomic) _Bool shouldDisplayDirectlyOverRep; // @synthesize shouldDisplayDirectlyOverRep=mShouldDisplayDirectlyOverRep;

@property(nonatomic) unsigned long long tag; // @synthesize tag=mTag;

@property(nonatomic) int type; // @synthesize type=mType;

@property(nonatomic) _Bool worksWhenInVersionBrowsingMode; // @synthesize worksWhenInVersionBrowsingMode=mWorksWhenInVersionBrowsingMode;

@property(nonatomic) _Bool worksWhenRepLocked; // @synthesize worksWhenRepLocked=mWorksWhenRepLocked;

- (void)updateHitRegionPathForRep:(id)arg1;



@end


