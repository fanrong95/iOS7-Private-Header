/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "AceObject.h"


#import "SAAceSerializable.h"



@class NSString;



@interface SAMPOrder : AceObject <SAAceSerializable>

{

}



+ (id)order;

+ (id)orderWithDictionary:(id)arg1 context:(id)arg2;

@property(nonatomic) _Bool descending;

- (id)encodedClassName;

- (id)groupIdentifier;

@property(copy, nonatomic) NSString *mediaItemProperty;



@end


