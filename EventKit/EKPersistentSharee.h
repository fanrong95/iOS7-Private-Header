/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "EKPersistentObject.h"


#import "NSCopying.h"



@class NSString;



@interface EKPersistentSharee : EKPersistentObject <NSCopying>

{

}



+ (id)defaultPropertiesToLoad;

+ (id)relations;

+ (id)shareeWithEmailAddress:(id)arg1 name:(id)arg2;

+ (id)shareeWithName:(id)arg1 emailAddress:(id)arg2 externalID:(id)arg3;

@property(readonly, nonatomic) NSString *UUID;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (id)description;

@property(copy, nonatomic) NSString *displayName;

@property(copy, nonatomic) NSString *emailAddress;

- (int)entityType;

@property(copy, nonatomic) NSString *externalID;

@property(copy, nonatomic) NSString *firstName;

- (unsigned long long)hash;

- (id)init;

- (id)initWithEmailAddress:(id)arg1 name:(id)arg2;

- (id)initWithName:(id)arg1 emailAddress:(id)arg2 externalID:(id)arg3;

@property(copy, nonatomic) NSString *lastName;

- (id)owner;

- (void)setOwner:(id)arg1;

@property(nonatomic) int shareeAccessLevel;

@property(nonatomic) int shareeStatus;



@end


