/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString, UIView;



@protocol MKCalloutSource <NSObject>

- (struct CGPoint)calloutAnchorPointWithCanvasSize:(struct CGSize)arg1 canvasScale:(double)arg2 snapToPixels:(_Bool)arg3;

- (id)debugAnchorPointString;

- (struct CGPoint)screenPointToScrollRelativeToWithCanvasSize:(struct CGSize)arg1 canvasScale:(double)arg2;

- (id)title;



@optional

@property(readonly, nonatomic) UIView *detailCalloutAccessoryView;

@property(readonly, nonatomic) UIView *leftCalloutAccessoryView;

@property(readonly, nonatomic) UIView *rightCalloutAccessoryView;

@property(readonly, nonatomic) NSString *subtitle;

@end

