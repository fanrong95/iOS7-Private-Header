/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class TSCH3DAnimationInterpolation;



__attribute__((visibility("hidden")))

@interface TSCH3DAnimationTiming : NSObject

{

    box_e9f23397 mRange;

    TSCH3DAnimationInterpolation *mInterpolation;

}



+ (id)timing;

- (id).cxx_construct;

- (void)dealloc;

- (id)description;

- (id)init;

@property(retain, nonatomic) TSCH3DAnimationInterpolation *interpolation; // @synthesize interpolation=mInterpolation;

@property(nonatomic) box_e9f23397 range; // @synthesize range=mRange;

- (float)toClampedInterpolatedLocal:(float)arg1;

- (float)toClampedLocal:(float)arg1;

- (float)toLocal:(float)arg1;



@end


