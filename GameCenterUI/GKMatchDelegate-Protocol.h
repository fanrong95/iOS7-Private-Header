/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol GKMatchDelegate <NSObject>

- (void)match:(id)arg1 didReceiveData:(id)arg2 fromPlayer:(id)arg3;



@optional

- (void)match:(id)arg1 didFailWithError:(id)arg2;

- (void)match:(id)arg1 player:(id)arg2 didChangeState:(long long)arg3;

- (_Bool)match:(id)arg1 shouldReinvitePlayer:(id)arg2;

@end


