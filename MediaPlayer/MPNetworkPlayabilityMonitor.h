/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSObject<OS_dispatch_queue>;



@interface MPNetworkPlayabilityMonitor : NSObject

{

    long long _effectiveNetworkTypeForPlayback;

    long long _networkType;

    NSObject<OS_dispatch_queue> *_queue;

}



+ (id)sharedNetworkPlayabilityMonitor;

- (void).cxx_destruct;

- (void)_networkTypeDidChangeNotification:(id)arg1;

- (long long)_onQueueEffectiveNetworkTypeForAverageBitrate:(double)arg1;

- (void)adjustEffectiveNetworkTypeUsingPreviouslyPlayedItem:(id)arg1;

- (void)dealloc;

@property(readonly, nonatomic) long long effectiveNetworkTypeForPlayback;

- (id)init;

@property(readonly, nonatomic) long long networkType;



@end


