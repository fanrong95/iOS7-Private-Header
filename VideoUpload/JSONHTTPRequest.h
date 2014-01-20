/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSURLConnectionDelegate.h"



@class NSData, NSDictionary, NSHTTPURLResponse, NSMutableData, NSMutableURLRequest, NSString, NSURLConnection, OAURLRequestSigner;



@interface JSONHTTPRequest : NSObject <NSURLConnectionDelegate>

{

    NSMutableURLRequest *_request;

    NSURLConnection *_connection;

    NSMutableData *_rawData;

    NSData *_overridePostBody;

    id <JSONHTTPRequestDelegate> _delegate;

    _Bool _receivedValidResponse;

    OAURLRequestSigner *_signer;

    NSString *_HTTPRequestBoundary;

    _Bool _signsMultipartPOSTData;

    _Bool _allowsCellularAccess;

    int _HTTPMethod;

    int _responseType;

    NSDictionary *_getParams;

    NSDictionary *_postParams;

    NSDictionary *_unsignedPostParams;

    NSHTTPURLResponse *_response;

}



+ (id)encodedStringForParameterDictionary:(id)arg1;

@property(nonatomic) int HTTPMethod; // @synthesize HTTPMethod=_HTTPMethod;

- (id)HTTPRequestBoundary;

- (id)_multipartParamData:(id)arg1;

@property(nonatomic) _Bool allowsCellularAccess; // @synthesize allowsCellularAccess=_allowsCellularAccess;

- (void)cancel;

- (void)connection:(id)arg1 didFailWithError:(id)arg2;

- (void)connection:(id)arg1 didReceiveData:(id)arg2;

- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;

- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;

- (void)connectionDidFinishLoading:(id)arg1;

- (void)dealloc;

@property(retain, nonatomic) NSDictionary *getParams; // @synthesize getParams=_getParams;

- (id)initWithURL:(id)arg1 delegate:(id)arg2;

- (id)initWithURL:(id)arg1 delegate:(id)arg2 signer:(id)arg3;

@property(retain, nonatomic) NSDictionary *postParams; // @synthesize postParams=_postParams;

@property(readonly, nonatomic) NSHTTPURLResponse *response; // @synthesize response=_response;

@property(nonatomic) int responseType; // @synthesize responseType=_responseType;

- (void)setHTTPHeader:(id)arg1 value:(id)arg2;

- (void)setOverridePostBody:(id)arg1;

@property(nonatomic) _Bool signsMultipartPOSTData; // @synthesize signsMultipartPOSTData=_signsMultipartPOSTData;

@property(retain, nonatomic) NSDictionary *unsignedPostParams; // @synthesize unsignedPostParams=_unsignedPostParams;

- (void)start;



@end


