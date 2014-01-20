/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSPObject.h"


@class TSTIntegerKeyDict, TSTTableDataObjectKeyDict;



__attribute__((visibility("hidden")))

@interface TSTTableDataList : TSPObject

{

    int mListType;

    unsigned int mNextID;

    TSTIntegerKeyDict *mData;

    TSTTableDataObjectKeyDict *mIDs;

}



+ (id)newObjectForUnarchiver:(id)arg1;

- (id)allRichTextPayloadStorages;

@property(readonly, nonatomic) TSTIntegerKeyDict *data;

- (void)dealloc;

- (unsigned long long)flushableSize;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithType:(int)arg1 context:(id)arg2;

@property(readonly, nonatomic) unsigned int nextID; // @synthesize nextID=mNextID;

- (void)p_setupWithType:(int)arg1 nextKeyID:(unsigned int)arg2;

- (id)packageLocator;

- (void)saveToArchiver:(id)arg1;

- (_Bool)supportsIDMapForType:(int)arg1;



@end

