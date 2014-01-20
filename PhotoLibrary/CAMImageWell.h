/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIButton.h"



@class NSMutableArray, NSString, UIImageView, UIView;



@interface CAMImageWell : UIButton

{

    long long _cameraOrientation;

    UIView *__containerView;

    UIImageView *__thumbnailImageView;

    UIImageView *__maskImageView;

    NSMutableArray *__dimmingViewQueue;

    NSString *__uuid;

}



- (struct CGAffineTransform)_affineTransformForImageOrientation:(long long)arg1;

- (void)_commonCAMImageWellInitialization;

@property(readonly, nonatomic) UIView *_containerView; // @synthesize _containerView=__containerView;

@property(readonly, nonatomic) NSMutableArray *_dimmingViewQueue; // @synthesize _dimmingViewQueue=__dimmingViewQueue;

- (id)_maskImage;

@property(readonly, nonatomic) UIImageView *_maskImageView; // @synthesize _maskImageView=__maskImageView;

- (void)_performEmitAnimationWithImage:(id)arg1 orientation:(long long)arg2 withCompletionBlock:(id)arg3;

- (void)_removeFirstDimmingView;

@property(retain, nonatomic, setter=_setUuid:) NSString *_uuid; // @synthesize _uuid=__uuid;

@property(readonly, nonatomic) UIImageView *_thumbnailImageView; // @synthesize _thumbnailImageView=__thumbnailImageView;

- (void)_updateThumbnailTransformFromCameraOrientation;

@property(nonatomic) long long cameraOrientation; // @synthesize cameraOrientation=_cameraOrientation;

- (void)dealloc;

- (id)initWithCoder:(id)arg1;

- (id)initWithFrame:(struct CGRect)arg1;

- (void)layoutSubviews;

- (void)prepareForThumbnailUpdateFromCapture;

- (void)recoverFromFailedThumbnailUpdate;

- (void)setCameraOrientation:(long long)arg1 animated:(_Bool)arg2;

- (void)setThumbnailImage:(id)arg1 animated:(_Bool)arg2;

- (void)setThumbnailImage:(id)arg1 uuid:(id)arg2 animated:(_Bool)arg3;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;



@end


