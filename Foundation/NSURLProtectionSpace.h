/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"

#import "NSSecureCoding.h"



@class NSURLProtectionSpaceInternal;



@interface NSURLProtectionSpace : NSObject <NSSecureCoding, NSCopying>

{

    NSURLProtectionSpaceInternal *_internal;

}



+ (_Bool)supportsSecureCoding;

- (struct _CFURLProtectionSpace *)_cfurlprtotectionspace;

- (id)_initWithCFURLProtectionSpace:(struct _CFURLProtectionSpace *)arg1;

- (id)_internalInit;

- (id)authenticationMethod;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (id)distinguishedNames;

- (void)encodeWithCoder:(id)arg1;

- (unsigned long long)hash;

- (id)host;

- (id)init;

- (id)initWithCoder:(id)arg1;

- (id)initWithHost:(id)arg1 port:(long long)arg2 protocol:(id)arg3 realm:(id)arg4 authenticationMethod:(id)arg5;

- (id)initWithProxyHost:(id)arg1 port:(long long)arg2 type:(id)arg3 realm:(id)arg4 authenticationMethod:(id)arg5;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isProxy;

- (long long)port;

- (id)protocol;

- (id)proxyType;

- (id)realm;

- (_Bool)receivesCredentialSecurely;

- (struct __SecTrust *)serverTrust;



@end


