/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "WBSAutomaticReadingListSocialSource.h"


@interface WBSAutomaticReadingListTwitterSource : WBSAutomaticReadingListSocialSource

{

    unsigned long long _numberOfRequestsAllowedInRateLimitWindow;

}



+ (id)sharedSource;

- (id)accountTypeIdentifier;

- (Class)itemClass;

- (double)minimumTimeBetweenRequests;

@property(nonatomic) unsigned long long numberOfRequestsAllowedInRateLimitWindow; // @synthesize numberOfRequestsAllowedInRateLimitWindow=_numberOfRequestsAllowedInRateLimitWindow;

- (id)repostResourceURLStringForItem:(id)arg1;

- (id)requestParametersForRecordsWithAge:(int)arg1 relativeTo:(id)arg2;

- (id)resourceURLString;

- (id)serviceName;

- (id)serviceType;

- (void)updateMinimumTimeBetweenRequestsFromResponseHeaders:(id)arg1;



@end

