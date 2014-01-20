/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"

#import "NSFastEnumeration.h"

#import "NSMutableCopying.h"

#import "NSSecureCoding.h"



@class NSMutableDictionary;



__attribute__((visibility("hidden")))

@interface SKThreadSafeMutableDictionary : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration>

{

    int _storageLock;

    NSMutableDictionary *_storage;

}



- (void).cxx_destruct;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (id)description;

- (void)forwardInvocation:(id)arg1;

- (id)initWithNSMutableDictionary:(id)arg1;

- (id)methodSignatureForSelector:(SEL)arg1;



@end


