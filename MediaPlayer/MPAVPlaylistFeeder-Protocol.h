/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol MPAVPlaylistFeeder <NSObject>

- (void)assumeOwnershipOfItems:(id)arg1;

- (_Bool)hasItemForIndex:(unsigned long long)arg1;

@property(readonly, nonatomic) unsigned long long initialPlaybackQueueDepth;

@property(readonly, nonatomic) unsigned long long itemCount;

- (id)itemForIndex:(unsigned long long)arg1;

@property(readonly, nonatomic) unsigned long long nonRepeatingItemCount;

- (_Bool)shouldReloadForChangeFromNetworkType:(long long)arg1 toNetworkType:(long long)arg2;

@end


