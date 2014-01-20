/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MPMediaArray.h"


#import "NSCopying.h"



@class MPMediaQueryCriteria, MPMediaQuerySectionInfo, MPWeakRef, NSObject<OS_dispatch_queue>;



@interface MPMediaEntityResultSetArray : MPMediaArray <NSCopying>

{

    id <MPMediaLibraryResultSet> _resultSet;

    Class _entityClass;

    MPWeakRef *_libraryWeakRef;

    MPMediaQuerySectionInfo *_sectionInfo;

    id *_entities;

    NSObject<OS_dispatch_queue> *_entitiesQueue;

    MPMediaQueryCriteria *_queryCriteria;

}



- (void).cxx_destruct;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (unsigned long long)count;

- (void)dealloc;

- (id)initWithResultSet:(id)arg1 queryCriteria:(id)arg2 entityType:(long long)arg3 library:(id)arg4;

- (id)objectAtIndex:(unsigned long long)arg1;

- (id)sectionInfo;



@end

