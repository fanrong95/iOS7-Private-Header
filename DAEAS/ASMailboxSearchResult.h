/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "ASEmailItem.h"


@class NSArray, NSMutableArray;



@interface ASMailboxSearchResult : ASEmailItem

{

    NSMutableArray *_classes;

    NSMutableArray *_collectionIDs;

}



+ (_Bool)acceptsTopLevelLeaves;

+ (id)asParseRules;

+ (_Bool)frontingBasicTypes;

+ (_Bool)notifyOfUnknownTokens;

+ (_Bool)parsingLeafNode;

+ (_Bool)parsingWithSubItems;

- (_Bool)_isSearchResult;

- (void)addClass:(id)arg1;

- (void)addCollectionID:(id)arg1;

@property(retain) NSArray *classes; // @synthesize classes=_classes;

@property(retain) NSArray *collectionIDs; // @synthesize collectionIDs=_collectionIDs;

- (void)dealloc;

- (id)description;

- (id)init;



@end


