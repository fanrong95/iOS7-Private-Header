/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableArray, SKPaymentQueueClient, SKXPCConnection;



@interface SKPaymentQueueInternal : NSObject

{

    _Bool _checkedIn;

    SKPaymentQueueClient *_client;

    _Bool _isRefreshing;

    NSMutableArray *_localTransactions;

    struct __CFArray *_observers;

    SKXPCConnection *_requestConnection;

    SKXPCConnection *_responseConnection;

    _Bool _restoreFinishedDuringRefresh;

    _Bool _restoringCompletedTransactions;

    NSMutableArray *_transactions;

}



- (void)dealloc;



@end


