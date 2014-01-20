/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "DTXTransport.h"


#import "NSURLConnectionDataDelegate.h"



@class NSURLConnection;



@interface DTXFoundationURLTransport : DTXTransport <NSURLConnectionDataDelegate>

{

    NSURLConnection *_urlConnection;

}



+ (id)schemes;

- (void)_releaseURLConnection;

- (void)connection:(id)arg1 didReceiveData:(id)arg2;

- (id)connection:(id)arg1 willCacheResponse:(id)arg2;

- (void)connectionDidFinishLoading:(id)arg1;

- (void)disconnect;

- (id)initWithLocalAddress:(id)arg1;

- (id)initWithRemoteAddress:(id)arg1;

- (unsigned long long)transmit:(const void *)arg1 ofLength:(unsigned long long)arg2;



@end


