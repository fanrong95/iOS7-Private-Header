/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MSStorageProtocol.h"



@protocol MSPublishStorageProtocol <MSStorageProtocol>

- (void)abort;

- (void)computeHashForAsset:(id)arg1;

@property(nonatomic) id <MSPublishStorageProtocolDelegate> delegate;

- (void)publishAssets:(id)arg1 URL:(id)arg2;

@end

