/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "AceObject.h"


#import "SAAceSerializable.h"



@class NSNumber, NSString;



@interface SADuration : AceObject <SAAceSerializable>

{

}



+ (id)duration;

+ (id)durationWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;

- (id)groupIdentifier;

@property(copy, nonatomic) NSString *unit;

@property(copy, nonatomic) NSString *units;

@property(retain, nonatomic) NSNumber *value;



@end


