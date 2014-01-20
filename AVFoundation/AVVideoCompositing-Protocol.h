/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSDictionary;



@protocol AVVideoCompositing <NSObject>

- (void)renderContextChanged:(id)arg1;

@property(readonly, nonatomic) NSDictionary *requiredPixelBufferAttributesForRenderContext;

@property(readonly, nonatomic) NSDictionary *sourcePixelBufferAttributes;

- (void)startVideoCompositionRequest:(id)arg1;



@optional

- (void)cancelAllPendingVideoCompositionRequests;

@end

