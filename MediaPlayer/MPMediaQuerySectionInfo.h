/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"

#import "NSMutableCopying.h"

#import "NSSecureCoding.h"



@class NSArray;



@interface MPMediaQuerySectionInfo : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

{

    NSArray *_sections;

    NSArray *_sectionIndexTitles;

}



+ (_Bool)supportsSecureCoding;

- (void).cxx_destruct;

- (id)copyWithZone:(struct _NSZone *)arg1;

@property(readonly, nonatomic) unsigned long long count;

- (id)description;

- (void)encodeWithCoder:(id)arg1;

- (unsigned long long)indexOfSectionForSectionIndexTitleAtIndex:(unsigned long long)arg1;

- (id)initWithCoder:(id)arg1;

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@property(copy, nonatomic) NSArray *sectionIndexTitles; // @synthesize sectionIndexTitles=_sectionIndexTitles;

@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;



@end


