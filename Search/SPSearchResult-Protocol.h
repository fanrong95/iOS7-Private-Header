/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol SPSearchResult <NSObject>

- (int)domain;

- (unsigned long long)identifier;



@optional

- (const char *)URLUTF8String;

- (const char *)auxiliarySubtitleUTF8String;

- (const char *)auxiliaryTitleUTF8String;

- (_Bool)getBadgeValue:(float *)arg1;

- (const char *)resultDisplayIdentifierUTF8String;

- (const char *)subtitleUTF8String;

- (const char *)summaryUTF8String;

- (const char *)titleUTF8String;

@end


