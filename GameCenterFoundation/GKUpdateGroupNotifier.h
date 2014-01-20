/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class GKUpdateGroup, NSError, NSLock, NSMutableArray;



@interface GKUpdateGroupNotifier : NSObject

{

    GKUpdateGroup *_group;

    NSLock *_lock;

    NSMutableArray *_updateQueue;

    NSError *_error;

}



- (void)addUpdate:(id)arg1 error:(void)arg2;

- (void)addUpdatesFromGroup:(id)arg1;

- (void)dealloc;

@property(retain) NSError *error; // @synthesize error=_error;

@property(retain, nonatomic) GKUpdateGroup *group; // @synthesize group=_group;

- (id)init;

@property(retain) NSLock *lock; // @synthesize lock=_lock;

- (oneway void)release;

- (id)retain;

@property(retain, nonatomic) NSMutableArray *updateQueue; // @synthesize updateQueue=_updateQueue;

- (void)updateError:(id)arg1;



@end


