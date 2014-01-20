/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface PUAvalancheReviewControllerSpec : NSObject

{

    int _fastImageFormat;

    int _qualityImageFormat;

    int _zoomingImageFormat;

    double _interItemSpacing;

}



- (_Bool)allowsInterfaceRotation;

- (struct UIEdgeInsets)collectionViewLayoutContentInsetForOrientation:(long long)arg1;

@property(readonly, nonatomic) int fastImageFormat; // @synthesize fastImageFormat=_fastImageFormat;

@property(readonly, nonatomic) double interItemSpacing; // @synthesize interItemSpacing=_interItemSpacing;

@property(readonly, nonatomic) int qualityImageFormat; // @synthesize qualityImageFormat=_qualityImageFormat;

@property(readonly, nonatomic) unsigned long long selectionBadgeCorner;

@property(readonly, nonatomic) struct UIOffset selectionBadgeOffset;

@property(readonly, nonatomic) struct CGSize selectionBadgeSize;

@property(readonly, nonatomic) int zoomingImageFormat; // @synthesize zoomingImageFormat=_zoomingImageFormat;



@end


