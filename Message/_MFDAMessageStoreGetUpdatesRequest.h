/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "DAMailboxGetUpdatesRequest.h"



#import "MFDAMailAccountRequest.h"



@interface _MFDAMessageStoreGetUpdatesRequest : DAMailboxGetUpdatesRequest <MFDAMailAccountRequest>

{

    _Bool _isUserRequested;

}



- (id)deferredOperation;

- (unsigned long long)generationNumber;

- (id)initRequestForBodyFormat:(int)arg1 withBodySizeLimit:(int)arg2 isUserRequested:(_Bool)arg3;

@property(readonly, nonatomic) _Bool isUserRequested;

- (_Bool)mf_alwaysReportFailures;

@property(readonly, nonatomic) _Bool shouldSend;



@end


