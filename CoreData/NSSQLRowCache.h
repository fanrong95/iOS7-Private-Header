/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSPersistentStoreCache.h"


@class NSSQLCore;



__attribute__((visibility("hidden")))

@interface NSSQLRowCache : NSPersistentStoreCache

{

    NSSQLCore *_sqlCore;

    int _debug;

}



+ (void)initialize;

- (id)adapter;

- (void)dealloc;

- (void)forgetAllExternalData;

- (void)forgetRowForObjectID:(struct _NSScalarObjectID *)arg1;

- (id)initWithSQLCore:(id)arg1;

- (void)registerRow:(id)arg1 forObjectID:(struct _NSScalarObjectID *)arg2;

- (void)registerSnapshots:(id)arg1;

- (void)registerToMany:(id)arg1 forSourceObjectID:(struct _NSScalarObjectID *)arg2 forProperty:(id)arg3 andTimestamp:(double)arg4;

- (id)rowForObjectID:(id)arg1;

- (id)rowForObjectID:(id)arg1 after:(double)arg2;

- (id)toManyForSourceObjectID:(id)arg1 forProperty:(id)arg2 after:(double)arg3;



@end


