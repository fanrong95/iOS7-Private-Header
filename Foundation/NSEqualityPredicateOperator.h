/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSPredicateOperator.h"


@interface NSEqualityPredicateOperator : NSPredicateOperator

{

    _Bool _negate;

    unsigned long long _options;

}



+ (_Bool)supportsSecureCoding;

- (void)_setOptions:(unsigned long long)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)encodeWithCoder:(id)arg1;

- (id)initWithCoder:(id)arg1;

- (id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 negate:(_Bool)arg3;

- (id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 negate:(_Bool)arg3 options:(unsigned long long)arg4;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isNegation;

- (unsigned long long)options;

- (_Bool)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;

- (id)predicateFormat;

- (void)setNegation:(_Bool)arg1;



@end


