/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SAAbstractItemList.h"


@class SAMPCollection;



@interface SAMPMediaEntityList : SAAbstractItemList

{

}



+ (id)mediaEntityList;

+ (id)mediaEntityListWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;

- (id)groupIdentifier;

@property(nonatomic) int mediaType;

@property(retain, nonatomic) SAMPCollection *parentCollection;

- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;



@end


