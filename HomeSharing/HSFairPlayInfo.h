/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSObject<OS_dispatch_queue>, NSString;



@interface HSFairPlayInfo : NSObject

{

    NSObject<OS_dispatch_queue> *_sapQueue;

    void *_hwInfo;

}



- (id)_hexStringForData:(id)arg1;

- (id)beginNegotiationWithSAPVersion:(unsigned int)arg1;

- (id)continueNegotationWithSAPVersion:(unsigned int)arg1 data:(id)arg2 isComplete:(_Bool *)arg3;

- (void)dealloc;

@property(readonly, nonatomic) NSString *deviceGUID;

- (void)endSecuritySession;

- (id)init;

- (id)securityInfoForURL:(id)arg1;



@end

