/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol NSURLProtocolClient <NSObject>

- (void)URLProtocol:(id)arg1 cachedResponseIsValid:(id)arg2;

- (void)URLProtocol:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;

- (void)URLProtocol:(id)arg1 didFailWithError:(id)arg2;

- (void)URLProtocol:(id)arg1 didLoadData:(id)arg2;

- (void)URLProtocol:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;

- (void)URLProtocol:(id)arg1 didReceiveResponse:(id)arg2 cacheStoragePolicy:(unsigned long long)arg3;

- (void)URLProtocol:(id)arg1 wasRedirectedToRequest:(id)arg2 redirectResponse:(id)arg3;

- (void)URLProtocolDidFinishLoading:(id)arg1;

@end


