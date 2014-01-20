/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface PLCropModel : NSObject

{

    struct CGRect _cropRect;

    float _cropConstrain;

    float _angle;

    struct CGSize _photoSize;

    struct CGSize _nsqPhotoSize;

}



- (void)adjustEdgeForDragAction:(int)arg1 withAmount:(struct CGPoint)arg2;

@property float angle; // @synthesize angle=_angle;

- (void)calculateCornerPoints:(struct CGPoint *)arg1;

- (void)changeCropAspectRatioTo:(float)arg1;

@property float cropConstrain; // @synthesize cropConstrain=_cropConstrain;

@property struct CGRect cropRect;

- (void)drawAspectedPreviewFromImage:(struct CGImage *)arg1 inContext:(struct CGContext *)arg2 inRect:(struct CGRect)arg3 withRatio:(float)arg4;

- (id)initWithSize:(struct CGSize)arg1;

- (struct CGPoint)maxAllowableEdgeAdjustmentForDragAction:(int)arg1 withDirection:(struct CGPoint)arg2;

- (float)maxAllowedRotationFromPoint:(struct CGPoint)arg1 counterClockwise:(_Bool)arg2;

- (double)maxAllowedScaleFromPoint:(struct CGPoint)arg1 scaleUp:(_Bool)arg2;

- (double)maxAllowedTranslateWithDirection:(double)arg1;

- (struct CGImage *)newAspectedPreviewFromImage:(struct CGImage *)arg1 forSize:(struct CGSize)arg2 andRatio:(float)arg3;

- (struct CGImage *)newRenderedCroppedImageFromImage:(struct CGImage *)arg1 forSize:(struct CGSize)arg2;

- (struct CGRect)recomputeCropRect:(struct CGRect)arg1 forStraightenAngle:(float)arg2;

- (void)reset;

- (void)rotate:(float)arg1 fromPoint:(struct CGPoint)arg2;

- (void)scale:(float)arg1 fromPoint:(struct CGPoint)arg2;

- (struct CGPoint)scalePointForCropAction:(int)arg1;

@property(readonly) struct CGSize size; // @synthesize size=_photoSize;

- (int)touchedImageSidesForCurrentCrop;

- (void)translate:(float)arg1 atAngle:(float)arg2;



@end


