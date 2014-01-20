/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIViewController.h"



@class NSIndexPath, PUGridMagnifiedView;



@interface PUGridMagnifiedImageViewController : UIViewController

{

    _Bool _canShowFullScreen;

    int _imageFormat;

    id _delegate;

    NSIndexPath *_itemIndexPath;

    double _magnifiedYOffset;

    double _shadowRadius;

    double _shadowOpacity;

    PUGridMagnifiedView *_magnifiedView;

    struct CGPoint _gestureWindLocation;

    struct CGSize _magnifiedSize;

    struct CGSize _shadowOffset;

    struct CGPoint _lastLocation;

    struct CGRect _itemWindFrame;

    struct CGRect _trackingWindFrame;

    struct UIEdgeInsets _magnifiedDragEdgeInsets;

}



- (void).cxx_destruct;

- (void)beginMagnification;

@property(readonly, nonatomic) _Bool canShowFullScreen; // @synthesize canShowFullScreen=_canShowFullScreen;

- (void)continueMagnification;

@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;

- (void)endMagnification;

- (_Bool)gestureInNewLocation;

@property(nonatomic) struct CGPoint gestureWindLocation; // @synthesize gestureWindLocation=_gestureWindLocation;

- (void)hideMagnifiedThumbnailWithAnimation:(_Bool)arg1;

- (id)imageForIndexPath:(id)arg1;

- (id)imageForMagnifyLocation:(struct CGPoint)arg1;

@property(nonatomic) int imageFormat; // @synthesize imageFormat=_imageFormat;

- (id)initWithDelegate:(id)arg1;

- (id)installMagnifiedView;

- (_Bool)isValidMagnifyLocation:(struct CGPoint)arg1;

@property(retain, nonatomic) NSIndexPath *itemIndexPath; // @synthesize itemIndexPath=_itemIndexPath;

@property(nonatomic) struct CGRect itemWindFrame; // @synthesize itemWindFrame=_itemWindFrame;

@property(nonatomic) struct CGPoint lastLocation; // @synthesize lastLocation=_lastLocation;

- (void)loadView;

@property(nonatomic) struct UIEdgeInsets magnifiedDragEdgeInsets; // @synthesize magnifiedDragEdgeInsets=_magnifiedDragEdgeInsets;

- (struct CGRect)magnifiedImageWindFrame;

@property(nonatomic) struct CGSize magnifiedSize; // @synthesize magnifiedSize=_magnifiedSize;

@property(retain, nonatomic) PUGridMagnifiedView *magnifiedView; // @synthesize magnifiedView=_magnifiedView;

@property(nonatomic) double magnifiedYOffset; // @synthesize magnifiedYOffset=_magnifiedYOffset;

- (void)prepareForRelease;

@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;

@property(nonatomic) double shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;

@property(nonatomic) double shadowRadius; // @synthesize shadowRadius=_shadowRadius;

@property(nonatomic) struct CGRect trackingWindFrame; // @synthesize trackingWindFrame=_trackingWindFrame;

- (void)setupMagnifiedView;



@end

