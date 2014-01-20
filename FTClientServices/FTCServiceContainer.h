/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class FTCServiceMonitor, NSMutableSet;



@interface FTCServiceContainer : NSObject

{

    FTCServiceMonitor *_monitor;

    NSMutableSet *_listeners;

}



- (_Bool)addListenerID:(id)arg1;

- (void)dealloc;

- (_Bool)hasListenerID:(id)arg1;

- (id)initWithServiceType:(long long)arg1;

@property(readonly, nonatomic) NSMutableSet *listeners; // @synthesize listeners=_listeners;

@property(retain, nonatomic) FTCServiceMonitor *monitor; // @synthesize monitor=_monitor;

- (_Bool)removeListenerID:(id)arg1;



@end


