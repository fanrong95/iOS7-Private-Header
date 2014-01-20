/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"

#import "NSSecureCoding.h"



@class NSURLCredentialInternal;



@interface NSURLCredential : NSObject <NSSecureCoding, NSCopying>

{

    NSURLCredentialInternal *_internal;

}



+ (id)credentialForTrust:(struct __SecTrust *)arg1;

+ (id)credentialWithIdentity:(struct __SecIdentity *)arg1 certificates:(id)arg2 persistence:(unsigned long long)arg3;

+ (id)credentialWithUser:(id)arg1 password:(id)arg2 persistence:(unsigned long long)arg3;

+ (_Bool)supportsSecureCoding;

- (struct _CFURLCredential *)_cfurlcredential;

- (id)_initWithCFURLCredential:(struct _CFURLCredential *)arg1;

- (id)certificates;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (void)encodeWithCoder:(id)arg1;

- (_Bool)hasPassword;

- (unsigned long long)hash;

- (struct __SecIdentity *)identity;

- (id)initWithCoder:(id)arg1;

- (id)initWithIdentity:(struct __SecIdentity *)arg1 certificates:(id)arg2 persistence:(unsigned long long)arg3;

- (id)initWithTrust:(struct __SecTrust *)arg1;

- (id)initWithUser:(id)arg1 password:(id)arg2 persistence:(unsigned long long)arg3;

- (_Bool)isEqual:(id)arg1;

- (id)password;

- (unsigned long long)persistence;

- (id)user;



@end


