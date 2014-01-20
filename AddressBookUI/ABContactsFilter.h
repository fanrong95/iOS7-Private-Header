/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray, NSString;



@interface ABContactsFilter : NSObject

{

    void *_addressBook;

    _Bool _showsAllContacts;

    NSArray *_groups;

    NSArray *_sources;

    void *_directorySource;

}



+ (id)_newContactsFilterFromGroupWrapperRepresentation:(id)arg1 withAddressBook:(void *)arg2;

+ (id)newContactsFilterFromDictionaryRepresentation:(id)arg1 withAddressBook:(void *)arg2;

- (void *)_defaultSourceForAccountContainingSource:(void *)arg1;

- (void)_getWritableSource:(const void **)arg1 andGroup:(const void **)arg2;

- (id)_sortedRecordsForRecords:(id)arg1 byNameProperty:(int)arg2;

@property(readonly, nonatomic) void *addressBook;

- (id)copyDictionaryRepresentation;

- (void)dealloc;

- (id)description;

@property(readonly, nonatomic) void *directorySource; // @synthesize directorySource=_directorySource;

@property(readonly, nonatomic) void *groupForNewRecords;

@property(readonly, nonatomic) NSArray *groups; // @synthesize groups=_groups;

- (unsigned long long)hash;

- (id)initWithAddressBook:(void *)arg1;

- (id)initWithDirectorySource:(void *)arg1 addressBook:(void *)arg2;

- (id)initWithGroups:(id)arg1 sources:(id)arg2 addressBook:(void *)arg3;

- (void)invalidateSourcesForAllContacts;

@property(readonly, nonatomic) _Bool isDirectory;

@property(readonly, nonatomic, getter=isEditable) _Bool editable;

- (_Bool)isEqual:(id)arg1;

@property(readonly, nonatomic) NSString *name;

@property(readonly, nonatomic) _Bool shouldChangeModelSelectionWhenDisplayed;

@property(readonly, nonatomic) _Bool showsAllContacts; // @synthesize showsAllContacts=_showsAllContacts;

- (id)sortedGroupsForGroups:(id)arg1;

- (id)sortedSourcesForSources:(id)arg1;

@property(readonly, nonatomic) void *sourceForNewRecords;

@property(readonly, nonatomic) NSArray *sources; // @synthesize sources=_sources;



@end

