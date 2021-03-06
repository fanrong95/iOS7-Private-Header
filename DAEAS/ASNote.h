/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "ASChangedCollectionLeaf.h"


#import "DADataElement.h"



@class NSArray, NSDate, NSNumber, NSString, NoteObject;



@interface ASNote : ASChangedCollectionLeaf <DADataElement>

{

    NoteObject *_localRecord;

    NSString *_body;

    NSNumber *_bodyTruncated;

    _Bool _bodyIsPlaintext;

    NSArray *_categories;

    NSString *_subject;

    NSString *_messageClass;

    NSDate *_lastModifiedDate;

}



+ (_Bool)acceptsTopLevelLeaves;

+ (id)asParseRules;

+ (_Bool)frontingBasicTypes;

+ (id)noteWithLocalNoteObject:(id)arg1 serverID:(id)arg2 account:(id)arg3;

+ (_Bool)notifyOfUnknownTokens;

+ (_Bool)parsingLeafNode;

+ (_Bool)parsingWithSubItems;

- (void)_loadAttributesFromLocalNoteObject:(id)arg1 forAccount:(id)arg2;

- (void)appendActiveSyncDataForTask:(id)arg1 toWBXMLData:(id)arg2;

@property(retain, nonatomic) NSString *body; // @synthesize body=_body;

@property _Bool bodyIsPlaintext; // @synthesize bodyIsPlaintext=_bodyIsPlaintext;

@property(retain) NSNumber *bodyTruncated; // @synthesize bodyTruncated=_bodyTruncated;

@property(retain) NSArray *categories; // @synthesize categories=_categories;

- (int)dataclass;

- (void)dealloc;

- (_Bool)deleteFromContainer:(void *)arg1;

- (_Bool)deleteFromNoteContext;

- (id)description;

- (void)encodeWithCoder:(id)arg1;

- (id)initWithCoder:(id)arg1;

- (id)initWithLocalNoteObject:(id)arg1 serverID:(id)arg2 account:(id)arg3;

@property(retain) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;

- (void)loadClientIDs;

- (_Bool)loadLocalItemWithAccount:(id)arg1;

- (_Bool)loadNoteObjectForAccount:(id)arg1;

@property(retain) NoteObject *localRecord; // @synthesize localRecord=_localRecord;

@property(retain) NSString *messageClass; // @synthesize messageClass=_messageClass;

- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;

- (void)postProcessApplicationData;

- (_Bool)saveServerIDToExistingItem;

- (_Bool)saveServerIDToNoteDB;

- (_Bool)saveToNoteDBWithExistingRecord:(id)arg1 intoNoteStore:(id)arg2 shouldMergeProperties:(_Bool)arg3 outMergeDidChooseLocalProperties:(_Bool *)arg4 account:(id)arg5;

- (_Bool)saveWithLocalObject:(void *)arg1 toContainer:(void *)arg2 shouldMergeProperties:(_Bool)arg3 outMergeDidChooseLocalProperties:(_Bool *)arg4 account:(id)arg5;

- (void)setLocalItem:(void *)arg1;

@property(retain) NSString *subject; // @synthesize subject=_subject;



@end


