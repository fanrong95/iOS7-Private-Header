/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol GKStateMachineDelegate <NSObject>



@optional

- (void)illegalTransitionFromState:(id)arg1 toState:(id)arg2;

- (void)stateDidChange;

- (void)stateWillChange;

@end


