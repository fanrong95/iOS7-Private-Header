/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSFetchedResultsSectionInfo.h"



@class NSArray, NSFetchedResultsController, NSString;



__attribute__((visibility("hidden")))

@interface _NSDefaultSectionInfo : NSObject <NSFetchedResultsSectionInfo>

{

    NSFetchedResultsController *_controller;

    NSString *_name;

    NSString *_indexTitle;

    unsigned long long _sectionOffset;

    unsigned long long _numberOfObjects;

    unsigned long long _oldSectionNumber;

    id _sectionObjects;

}



- (void)clearSectionObjectsCache;

- (void)dealloc;

- (void)encodeWithCoder:(id)arg1;

- (unsigned long long)indexOfObject:(id)arg1;

@property(readonly, nonatomic) NSString *indexTitle; // @synthesize indexTitle=_indexTitle;

- (id)initWithCoder:(id)arg1;

- (id)initWithController:(id)arg1 name:(id)arg2 indexTitle:(id)arg3 sectionOffset:(unsigned long long)arg4;

@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;

@property(readonly, nonatomic) unsigned long long numberOfObjects; // @synthesize numberOfObjects=_numberOfObjects;

@property(readonly, nonatomic) NSArray *objects;

@property(nonatomic) unsigned long long oldSectionNumber; // @synthesize oldSectionNumber=_oldSectionNumber;

@property(readonly, nonatomic) unsigned long long sectionNumber;

@property(readonly, nonatomic) unsigned long long sectionOffset; // @synthesize sectionOffset=_sectionOffset;

- (void)setController:(id)arg1;

- (void)setNumberOfObjects:(unsigned long long)arg1;

- (void)setSectionOffset:(unsigned long long)arg1;



@end

