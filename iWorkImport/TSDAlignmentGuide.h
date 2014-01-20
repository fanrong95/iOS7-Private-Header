/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSDAbstractGuide.h"


@class CALayer, TSDUserDefinedGuide;



__attribute__((visibility("hidden")))

@interface TSDAlignmentGuide : TSDAbstractGuide

{

    int mType;

    double mStart;

    double mEnd;

    _Bool mDynamic;

    _Bool mInfinite;

    _Bool mSnapsToMin;

    _Bool mSnapsToMax;

    _Bool mSnapsToMid;

    CALayer *mLayer;

    TSDUserDefinedGuide *mModelGuide;

}



- (_Bool)canBeSnappedToByEdge:(int)arg1 ofFrame:(struct CGRect)arg2;

- (void)dealloc;

- (double)distanceToPoint:(struct CGPoint)arg1;

@property(nonatomic) _Bool dynamic; // @synthesize dynamic=mDynamic;

@property(nonatomic) double end; // @synthesize end=mEnd;

@property(nonatomic) int guideType; // @synthesize guideType=mType;

@property(nonatomic) _Bool infinite; // @synthesize infinite=mInfinite;

- (id)init;

- (id)initWithRect:(struct CGRect)arg1 edge:(int)arg2;

- (id)initWithType:(int)arg1 offset:(double)arg2;

- (id)layerWithICC:(id)arg1;

@property(retain, nonatomic) TSDUserDefinedGuide *modelGuide; // @synthesize modelGuide=mModelGuide;

- (void)setOffset:(double)arg1;

@property(nonatomic) _Bool snapsToMax; // @synthesize snapsToMax=mSnapsToMax;

@property(nonatomic) _Bool snapsToMid; // @synthesize snapsToMid=mSnapsToMid;

@property(nonatomic) _Bool snapsToMin; // @synthesize snapsToMin=mSnapsToMin;

@property(nonatomic) double start; // @synthesize start=mStart;



@end


