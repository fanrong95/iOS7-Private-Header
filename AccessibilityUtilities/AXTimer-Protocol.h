/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol AXTimer <NSObject>

- (void)afterDelay:(double)arg1 processBlock:(id)arg2;

- (void)cancel;

@property(readonly, nonatomic, getter=isActive) _Bool active;

@property(readonly, nonatomic, getter=isPending) _Bool pending;

@end


