/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"

#import "NSMutableCopying.h"

#import "NSSecureCoding.h"



@class NSString;



@interface CNPostalAddress : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

{

    NSString *_street;

    NSString *_subLocality;

    NSString *_city;

    NSString *_subAdministrativeArea;

    NSString *_state;

    NSString *_postalCode;

    NSString *_country;

    NSString *_ISOCountryCode;

}



+ (id)postalAddress;

+ (_Bool)supportsSecureCoding;

- (void).cxx_destruct;

@property(readonly) NSString *ISOCountryCode; // @synthesize ISOCountryCode=_ISOCountryCode;

@property(readonly) NSString *city; // @synthesize city=_city;

- (id)copyWithZone:(struct _NSZone *)arg1;

@property(readonly) NSString *country; // @synthesize country=_country;

- (void)encodeWithCoder:(id)arg1;

- (id)initWithCoder:(id)arg1;

- (_Bool)isEqual:(id)arg1;

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@property(readonly) NSString *postalCode; // @synthesize postalCode=_postalCode;

@property(readonly) NSString *state; // @synthesize state=_state;

@property(readonly) NSString *street; // @synthesize street=_street;

@property(readonly) NSString *subAdministrativeArea; // @synthesize subAdministrativeArea=_subAdministrativeArea;

@property(readonly) NSString *subLocality; // @synthesize subLocality=_subLocality;



@end


