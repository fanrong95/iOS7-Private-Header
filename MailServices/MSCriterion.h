/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCoding.h"



@class NSString;



@interface MSCriterion : NSObject <NSCoding>

{

    NSString *_type;

    NSString *_qualifier;

    id <NSObject> _criteria;

}



- (id)_initWithType:(id)arg1 qualifier:(id)arg2 criteria:(id)arg3;

- (id)criteria;

- (void)dealloc;

- (id)description;

- (void)encodeWithCoder:(id)arg1;

- (id)init;

- (id)initWithCoder:(id)arg1;

- (id)initWithCriteria:(id)arg1 allRequired:(_Bool)arg2;

- (id)initWithType:(id)arg1 qualifier:(id)arg2 expression:(id)arg3;

- (id)qualifier;

- (id)type;



@end

