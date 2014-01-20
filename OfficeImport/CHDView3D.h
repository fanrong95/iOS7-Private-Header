/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface CHDView3D : NSObject

{

    int mRotationX;

    int mRotationY;

    int mDepthPercent;

    int mGapDepthPercent;

    int mHeightPercent;

    int mPerspective;

    _Bool mRightAngleAxes;

    _Bool mCluster;

    _Bool mAutoscale;

}



- (int)depthPercent;

- (int)gapDepthPercent;

- (int)heightPercent;

- (id)init;

- (_Bool)isAutoscale;

- (_Bool)isCluster;

- (_Bool)isRightAngleAxes;

- (int)perspective;

- (int)rotationX;

- (int)rotationY;

- (void)setAutoscale:(_Bool)arg1;

- (void)setCluster:(_Bool)arg1;

- (void)setDepthPercent:(int)arg1;

- (void)setGapDepthPercent:(int)arg1;

- (void)setHeightPercent:(int)arg1;

- (void)setPerspective:(int)arg1;

- (void)setRightAngleAxes:(_Bool)arg1;

- (void)setRotationX:(int)arg1;

- (void)setRotationY:(int)arg1;



@end


