/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "HSXPCCoding.h"

#import "NSCopying.h"

#import "NSMutableCopying.h"



@class NSDictionary, NSString, NSURL, SSAccount;



@interface HSConnectionConfiguration : NSObject <HSXPCCoding, NSCopying, NSMutableCopying>

{

    SSAccount *_account;

    NSDictionary *_urlBag;

    NSURL *_baseURL;

    NSString *_buildIdentifier;

    NSString *_purchaseClientIdentifier;

    NSDictionary *_cookieHeaders;

    NSString *_userAgent;

    long long _requestReason;

}



- (id)_copyXPCDictonaryFromDictonary:(id)arg1;

- (id)_dictonaryFromXPCDictonary:(id)arg1;

@property(readonly, nonatomic) SSAccount *account; // @synthesize account=_account;

@property(readonly, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;

@property(readonly, nonatomic) NSString *buildIdentifier; // @synthesize buildIdentifier=_buildIdentifier;

@property(readonly, nonatomic) NSDictionary *cookieHeaders; // @synthesize cookieHeaders=_cookieHeaders;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (id)copyXPCEncoding;

- (void)dealloc;

- (id)init;

- (id)initWithXPCEncoding:(id)arg1;

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@property(readonly, nonatomic) NSString *purchaseClientIdentifier; // @synthesize purchaseClientIdentifier=_purchaseClientIdentifier;

@property(readonly, nonatomic) long long requestReason; // @synthesize requestReason=_requestReason;

@property(readonly, nonatomic) NSDictionary *urlBag; // @synthesize urlBag=_urlBag;

@property(readonly, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;



@end


