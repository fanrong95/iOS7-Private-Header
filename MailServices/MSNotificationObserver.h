/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MSMailDefaultService.h"


@class NSObject<MSNotificationDelegate>, NSObject<OS_dispatch_queue>;



@interface MSNotificationObserver : MSMailDefaultService

{

    NSObject<OS_dispatch_queue> *_queue;

    NSObject<MSNotificationDelegate> *_delegate;

}



+ (id)registerNotificationObserver:(id)arg1 shouldLaunchMobileMail:(_Bool)arg2 queue:(id)arg3;

- (void)_delegateDidShutdownWithError:(id)arg1;

- (void)_didReceiveNotificationData:(id)arg1;

- (id)_initWithDelegate:(id)arg1 queue:(id)arg2;

- (void)_registerObserverClient;

- (id)activeAccountsHadLoadError:(_Bool *)arg1;

- (void)dealloc;

@property(nonatomic) NSObject<MSNotificationDelegate> *delegate; // @synthesize delegate=_delegate;

- (id)messagesForAccountIDs:(id)arg1 count:(unsigned long long)arg2 cutOffDates:(id)arg3;

- (void)responseConnection:(id)arg1 handleError:(id)arg2;

- (void)responseConnection:(id)arg1 handleResponse:(id)arg2;



@end


