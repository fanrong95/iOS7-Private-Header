/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSExpression.h"



@interface NSFetchRequestExpression : NSExpression

{

    void *_reserved1;

    void *_reserved2;

    void *_reserved3;

    void *_reserved4;

    NSExpression *_fetchRequest;

    NSExpression *_managedObjectContext;

    struct _fetchExpressionFlags {

        unsigned int isCountOnly:1;

        unsigned int _RESERVED:31;

    } _flags;

}



+ (id)expressionForFetch:(id)arg1 context:(id)arg2 countOnly:(_Bool)arg3;

- (id)_expressionWithSubstitutionVariables:(id)arg1;

- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;

- (id)contextExpression;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (void)encodeWithCoder:(id)arg1;

- (unsigned long long)expressionType;

- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;

- (unsigned long long)hash;

- (id)initForFetch:(id)arg1 context:(id)arg2 countOnly:(_Bool)arg3;

- (id)initWithCoder:(id)arg1;

- (_Bool)isCountOnlyRequest;

- (_Bool)isEqual:(id)arg1;

- (id)predicateFormat;

- (id)requestExpression;



@end


