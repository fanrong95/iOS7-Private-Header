/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSTimeZone.h"


__attribute__((visibility("hidden")))

@interface __NSLocalTimeZone : NSTimeZone

{

}



+ (_Bool)supportsSecureCoding;

- (id)abbreviationForDate:(id)arg1;

- (Class)classForCoder;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (id)data;

- (double)daylightSavingTimeOffsetForDate:(id)arg1;

- (id)description;

- (void)encodeWithCoder:(id)arg1;

- (id)initWithCoder:(id)arg1;

- (_Bool)isDaylightSavingTimeForDate:(id)arg1;

- (id)localizedName:(long long)arg1 locale:(id)arg2;

- (id)name;

- (id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1;

- (oneway void)release;

- (id)replacementObjectForPortCoder:(id)arg1;

- (id)retain;

- (unsigned long long)retainCount;

- (long long)secondsFromGMTForDate:(id)arg1;



@end

