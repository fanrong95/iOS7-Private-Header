/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "AceObject.h"


#import "SAAceSerializable.h"



@class NSNumber, NSString;



@interface SAWeatherWindSpeed : AceObject <SAAceSerializable>

{

}



+ (id)windSpeed;

+ (id)windSpeedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;

- (id)groupIdentifier;

@property(copy, nonatomic) NSString *value;

@property(copy, nonatomic) NSString *windDirection;

@property(copy, nonatomic) NSNumber *windDirectionDegree;



@end

