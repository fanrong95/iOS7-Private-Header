/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "AceObject.h"


#import "SAAceSerializable.h"



@class NSString, SAPerson;



@interface SAPersonAttribute : AceObject <SAAceSerializable>

{

}



+ (id)personAttribute;

+ (id)personAttributeWithDictionary:(id)arg1 context:(id)arg2;

@property(copy, nonatomic) NSString *data;

@property(copy, nonatomic) NSString *displayText;

- (id)encodedClassName;

- (id)groupIdentifier;

@property(retain, nonatomic) SAPerson *object;

@property(retain, nonatomic) id <SAAceSerializable> typedData;



@end


