/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableDictionary;



@interface IMMultiQueue : NSObject

{

    NSMutableDictionary *_queueMap;

}



- (void)_addBlock:(id)arg1 withGUID:(void)arg2 forKey:(id)arg3;

- (void)_popEnqueuedBlockWithGUID:(id)arg1 key:(id)arg2;

- (void)addBlock:(id)arg1 forKey:(void)arg2;

- (void)addBlock:(id)arg1 withTimeout:(void)arg2 forKey:(double)arg3;

- (void)dealloc;



@end


