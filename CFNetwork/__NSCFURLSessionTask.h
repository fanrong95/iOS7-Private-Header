/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"

#import "NSSecureCoding.h"



@class NSError, NSString, NSURLRequest, NSURLResponse;



__attribute__((visibility("hidden")))

@interface __NSCFURLSessionTask : NSObject <NSSecureCoding, NSCopying>

{

    unsigned long long _taskIdentifier;

    NSURLRequest *_originalRequest;

    NSURLRequest *_currentRequest;

    NSURLResponse *_response;

    long long _countOfBytesReceived;

    long long _countOfBytesSent;

    long long _countOfBytesExpectedToSend;

    long long _countOfBytesExpectedToReceive;

    NSString *_taskDescription;

    long long _state;

    NSError *_error;

    double _startTime;

}



+ (_Bool)supportsSecureCoding;

- (void)_onqueue_connection_cancel;

- (void)_onqueue_connection_resume;

- (void)_onqueue_connection_suspend;

- (void)cancel;

- (id)copyWithZone:(struct _NSZone *)arg1;

@property long long countOfBytesExpectedToReceive; // @synthesize countOfBytesExpectedToReceive=_countOfBytesExpectedToReceive;

@property long long countOfBytesExpectedToSend; // @synthesize countOfBytesExpectedToSend=_countOfBytesExpectedToSend;

@property long long countOfBytesReceived; // @synthesize countOfBytesReceived=_countOfBytesReceived;

@property long long countOfBytesSent; // @synthesize countOfBytesSent=_countOfBytesSent;

@property(copy) NSURLRequest *currentRequest; // @synthesize currentRequest=_currentRequest;

- (void)dealloc;

- (void)encodeWithCoder:(id)arg1;

@property(copy) NSError *error; // @synthesize error=_error;

- (id)initWithCoder:(id)arg1;

- (id)initWithRequest:(id)arg1 ident:(unsigned long long)arg2;

- (id)initWithTask:(id)arg1;

@property(copy) NSURLRequest *originalRequest; // @synthesize originalRequest=_originalRequest;

@property(copy) NSURLResponse *response; // @synthesize response=_response;

- (void)resume;

@property double startTime; // @synthesize startTime=_startTime;

@property long long state; // @synthesize state=_state;

@property(copy) NSString *taskDescription; // @synthesize taskDescription=_taskDescription;

@property unsigned long long taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;

- (void)suspend;



@end


