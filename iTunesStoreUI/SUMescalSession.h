/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSObject<OS_dispatch_queue>;



@interface SUMescalSession : NSObject

{

    NSObject<OS_dispatch_queue> *_dispatchQueue;

    _Bool _complete;

}



- (id)_newDataWithBytes:(char *)arg1 length:(unsigned int)arg2;

- (void)_teardownSession;

- (void)dealloc;

- (id)exchangeData:(id)arg1 error:(id *)arg2;

- (id)init;

@property(readonly, getter=isComplete) _Bool complete;

- (id)primeForAccountCreationWithData:(id)arg1 error:(id *)arg2;

- (id)signData:(id)arg1 error:(id *)arg2;

- (_Bool)verifyPrimeSignature:(id)arg1 error:(id *)arg2;



@end


