/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class AVAsset, AVWeakKeyValueObserverProxy, AVWeakReference, NSError, NSMutableArray, NSObject<OS_dispatch_queue>;



@interface AVAssetReaderInternal : NSObject

{

    AVWeakReference *weakReference;

    AVWeakKeyValueObserverProxy *KVOProxy;

    AVAsset *asset;

    struct OpaqueFigAssetReader *figAssetReader;

    CDStruct_e83c9415 timeRange;

    NSMutableArray *outputs;

    long long status;

    NSError *error;

    NSObject<OS_dispatch_queue> *statusReadWriteQueue;

}



@end


