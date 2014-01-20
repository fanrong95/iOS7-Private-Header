/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSURLAuthenticationChallengeSender.h"

#import "NSURLConnectionRequired.h"



@class NSDictionary, NSOperationQueue, NSURL, NSURLConnection, NSURLRequest;



__attribute__((visibility("hidden")))

@interface NSURLConnectionInternal : NSObject <NSURLConnectionRequired, NSURLAuthenticationChallengeSender>

{

    NSURLConnection *_connection;

    NSOperationQueue *_delegateQueue;

    NSURL *_url;

    NSURLRequest *_originalRequest;

    NSURLRequest *_currentRequest;

    id _delegate;

    NSDictionary *_connectionProperties;

    _Bool _connectionActive;

}



- (id)_connectionProperties;

- (void)_invalidate;

- (void)_setDelegateQueue:(id)arg1;

- (void)_withActiveConnectionAndDelegate:(id)arg1;

- (void)_withConnectionAndDelegate:(id)arg1;

- (void)_withConnectionAndDelegate:(id)arg1 onlyActive:(void)arg2;

- (void)_withConnectionDisconnectFromConnection;

- (void)cancelAuthenticationChallenge:(id)arg1;

- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;

- (id)currentRequest;

- (void)dealloc;

- (id)initWithInfo:(const struct InternalInit *)arg1;

- (void)invokeForDelegate:(id)arg1;

- (_Bool)isConnectionActive;

- (id)originalRequest;

- (void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;

- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;

- (void)setConnectionActive:(_Bool)arg1;

- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;



@end


