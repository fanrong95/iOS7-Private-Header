/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class ACAccount, NSDictionary, NSURL, SLTwitterRequest;



@interface TWRequest : NSObject

{

    SLTwitterRequest *_request;

}



@property(readonly, nonatomic) NSURL *URL;

@property(retain, nonatomic) ACAccount *account;

- (void)addMultiPartData:(id)arg1 withName:(id)arg2 type:(id)arg3;

- (void)dealloc;

- (id)initWithURL:(id)arg1 parameters:(id)arg2 requestMethod:(long long)arg3;

@property(readonly, nonatomic) NSDictionary *parameters;

- (void)performRequestWithHandler:(id)arg1;

@property(readonly, nonatomic) long long requestMethod;

- (id)signedURLRequest;



@end


