/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "AceObject.h"


#import "SASupportCondition.h"



@class NSArray;



@interface SAAndCondition : AceObject <SASupportCondition>

{

}



+ (id)andCondition;

+ (id)andConditionWithDictionary:(id)arg1 context:(id)arg2;

@property(copy, nonatomic) NSArray *conditions;

- (id)encodedClassName;

- (id)groupIdentifier;



@end


