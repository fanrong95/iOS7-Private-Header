/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SADomainObject.h"


@class NSArray, NSString;



@interface SAAnswerObject : SADomainObject

{

}



+ (id)object;

+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;

- (id)groupIdentifier;

@property(copy, nonatomic) NSArray *lines;

@property(copy, nonatomic) NSString *title;

- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;



@end


