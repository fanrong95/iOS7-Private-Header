/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class NSArray;



@interface GKRequestIdentifier : NSObject <NSCopying>

{

    unsigned long long _savedHash;

    SEL _selector;

    NSArray *_arguments;

}



+ (id)requestIdentifierForInvocation:(id)arg1;

- (id)_argumentsForInvocation:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (unsigned long long)hash;

- (id)initWithInvocation:(id)arg1;

- (_Bool)isEqual:(id)arg1;



@end

