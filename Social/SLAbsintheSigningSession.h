/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString;



__attribute__((visibility("hidden")))

@interface SLAbsintheSigningSession : NSObject

{

    NSString *_certURL;

    NSString *_sessionURL;

}



- (void).cxx_destruct;

- (id)_urlEncodedString:(id)arg1;

- (void)dealloc;

- (_Bool)establish;

- (id)initWithCertURL:(id)arg1 sessionURL:(id)arg2;

- (id)signatureForData:(id)arg1;



@end


