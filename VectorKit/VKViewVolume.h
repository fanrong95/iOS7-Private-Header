/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface VKViewVolume : NSObject

{

    struct VKPoint _corners[8];

    CDStruct_257eabe6 _faces[6];

}



- (id).cxx_construct;

@property(readonly, nonatomic) const struct VKPoint *corners;

- (_Bool)distanceClipsPoint:(struct VKPoint)arg1;

@property(readonly, nonatomic) const CDStruct_257eabe6 *faces;

@property(readonly, nonatomic) CDStruct_257eabe6 farPlane;

- (struct VKPoint)lerpPoint:(float *)arg1;

- (_Bool)rejectsRect:(CDStruct_d2b197d1)arg1;

- (void)updateWithFrustum:(CDStruct_184b3e93)arg1 matrix:(const CDStruct_aa5aacbc *)arg2;



@end


