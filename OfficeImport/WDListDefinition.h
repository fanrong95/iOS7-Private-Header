/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class NSMutableArray, WDDocument, WDStyle;



__attribute__((visibility("hidden")))

@interface WDListDefinition : NSObject <NSCopying>

{

    int mType;

    NSMutableArray *mLevels;

    long long mListId;

    WDDocument *mDocument;

    WDStyle *mListStyle;

    WDStyle *mListStyleLink;

}



- (id)addLevel;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)document;

- (id)initWithDocument:(id)arg1;

- (id)levelAt:(int)arg1;

- (int)levelCount;

- (long long)listId;

- (id)listStyle;

- (id)listStyleLink;

- (void)setListId:(long long)arg1;

- (void)setListStyle:(id)arg1;

- (void)setListStyleLink:(id)arg1;

- (void)setType:(int)arg1;

- (int)type;



@end


