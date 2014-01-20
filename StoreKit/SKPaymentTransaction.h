/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray, NSData, NSDate, NSError, NSString, SKPayment;



@interface SKPaymentTransaction : NSObject

{

    id _internal;

}



- (void)_setDownloads:(id)arg1;

- (void)_setError:(id)arg1;

- (void)_setOriginalTransaction:(id)arg1;

- (void)_setTemporaryIdentifier:(id)arg1;

- (void)_setTransactionDate:(id)arg1;

- (void)_setTransactionIdentifier:(id)arg1;

- (void)_setTransactionReceipt:(id)arg1;

- (void)_setTransactionState:(long long)arg1;

- (id)_transactionIdentifier;

- (_Bool)canMergeWithTransaction:(id)arg1;

- (id)copyXPCEncoding;

- (void)dealloc;

@property(readonly, nonatomic) NSArray *downloads;

@property(readonly, nonatomic) NSError *error;

- (id)init;

- (id)initWithPayment:(id)arg1;

- (id)initWithXPCEncoding:(id)arg1;

- (id)matchingIdentifier;

- (_Bool)mergeWithTransaction:(id)arg1;

@property(readonly, nonatomic) SKPaymentTransaction *originalTransaction;

@property(readonly, nonatomic) SKPayment *payment;

@property(readonly, nonatomic) NSDate *transactionDate;

@property(readonly, nonatomic) NSString *transactionIdentifier;

@property(readonly, nonatomic) NSData *transactionReceipt;

@property(readonly, nonatomic) long long transactionState;



@end


