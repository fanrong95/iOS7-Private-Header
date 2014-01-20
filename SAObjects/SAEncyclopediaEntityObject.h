/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SADomainObject.h"


@class NSArray, NSString, NSURL, SAEncyclopediaEntityLink;



@interface SAEncyclopediaEntityObject : SADomainObject

{

}



+ (id)object;

+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;

@property(copy, nonatomic) NSString *articleAbstract;

@property(retain, nonatomic) SAEncyclopediaEntityLink *articleLink;

- (id)encodedClassName;

- (id)groupIdentifier;

@property(copy, nonatomic) NSURL *image;

@property(copy, nonatomic) NSString *name;

@property(copy, nonatomic) NSString *nameAnnotation;

@property(copy, nonatomic) NSArray *propertyGroups;

- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;



@end

