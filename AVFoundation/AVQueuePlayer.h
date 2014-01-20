/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "AVPlayer.h"


@class AVQueuePlayerInternal;



@interface AVQueuePlayer : AVPlayer

{

    AVQueuePlayerInternal *_queuePlayer;

}



+ (void)initialize;

+ (id)playerWithPlayerItem:(id)arg1;

+ (id)playerWithURL:(id)arg1;

+ (id)queuePlayerWithItems:(id)arg1;

- (long long)_defaultActionAtItemEnd;

- (void)_enqueueModification:(id)arg1;

- (_Bool)_shouldEnqueueModifications;

- (void)advanceToNextItem;

- (void)beginModifications;

- (_Bool)canInsertItem:(id)arg1 afterItem:(id)arg2;

- (void)commitModifications;

- (void)dealloc;

- (id)init;

- (id)initWithItems:(id)arg1;

- (void)insertItem:(id)arg1 afterItem:(id)arg2;

- (id)items;

- (void)removeAllItems;

- (void)removeItem:(id)arg1;

- (void)setActionAtItemEnd:(long long)arg1;



@end

