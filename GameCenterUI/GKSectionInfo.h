/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray, NSPredicate, NSString;



@interface GKSectionInfo : NSObject

{

    long long _section;

    NSPredicate *_predicate;

    NSArray *_sortDescriptors;

    NSArray *_items;

    NSString *_title;

}



- (void)dealloc;

- (id)description;

@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;

@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;

@property(nonatomic) long long section; // @synthesize section=_section;

@property(retain, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;

@property(retain, nonatomic) NSString *title; // @synthesize title=_title;



@end


