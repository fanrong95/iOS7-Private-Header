/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSData, XPCRequest;



@interface XPCNSRequest : NSObject

{

    id <NSCoding> _message;

    NSData *_data;

    XPCRequest *_request;

}



- (void).cxx_destruct;

@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;

- (id)initWithXPCRequest:(id)arg1;

@property(readonly, nonatomic) id <NSCoding> message; // @synthesize message=_message;

@property(readonly, nonatomic) XPCRequest *request; // @synthesize request=_request;

- (void)sendReply:(id)arg1;



@end


