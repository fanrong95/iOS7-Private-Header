/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface NSURLConnectionDelegateProxy : NSObject

{

    id delegate;

    unsigned long long flags;

}



- (_Bool)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;

- (void)connection:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;

- (void)connection:(id)arg1 didFailWithError:(id)arg2;

- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;

- (void)connection:(id)arg1 didReceiveData:(id)arg2;

- (void)connection:(id)arg1 didReceiveData:(id)arg2 lengthReceived:(long long)arg3;

- (void)connection:(id)arg1 didReceiveDataArray:(id)arg2;

- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;

- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;

- (id)connection:(id)arg1 willCacheResponse:(id)arg2;

- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;

- (void)connectionDidFinishLoading:(id)arg1;

- (_Bool)connectionShouldUseCredentialStorage:(id)arg1;

- (_Bool)respondsToSelector:(SEL)arg1;

- (void)setDelegate:(id)arg1;



@end


