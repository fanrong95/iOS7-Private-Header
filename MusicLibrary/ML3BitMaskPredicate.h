/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "ML3PropertyPredicate.h"


@interface ML3BitMaskPredicate : ML3PropertyPredicate

{

    long long _mask;

    long long _value;

}



+ (id)predicateWithProperty:(id)arg1 mask:(long long)arg2 value:(long long)arg3;

- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;

- (id)databaseStatementParameters;

- (id)description;

- (void)encodeWithCoder:(id)arg1;

- (id)initWithCoder:(id)arg1;

- (id)initWithProperty:(id)arg1 mask:(long long)arg2 value:(long long)arg3;

- (_Bool)isEqual:(id)arg1;

@property(nonatomic) long long mask; // @synthesize mask=_mask;

@property(nonatomic) long long value; // @synthesize value=_value;



@end


