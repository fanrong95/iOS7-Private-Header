/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSTimeZone.h"


__attribute__((visibility("hidden")))

@interface __NSPlaceholderTimeZone : NSTimeZone

{

}



+ (id)immutablePlaceholder;

+ (void)initialize;

- (id)__initWithName:(id)arg1 cache:(_Bool)arg2;

- (id)__initWithName:(id)arg1 data:(id)arg2 cache:(_Bool)arg3;

- (id)abbreviationForDate:(id)arg1;

- (id)data;

- (double)daylightSavingTimeOffsetForDate:(id)arg1;

- (void)dealloc;

- (id)init;

- (id)initWithName:(id)arg1;

- (id)initWithName:(id)arg1 data:(id)arg2;

- (_Bool)isDaylightSavingTimeForDate:(id)arg1;

- (id)name;

- (id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1;

- (oneway void)release;

- (id)retain;

- (unsigned long long)retainCount;

- (long long)secondsFromGMTForDate:(id)arg1;



@end


