/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSSQLAdapter.h"


@class NSString;



__attribute__((visibility("hidden")))

@interface NSSQLiteAdapter : NSSQLAdapter

{

    NSString *_dbpath;

}



- (id)createConnection;

- (void)dealloc;

- (id)initWithSQLCore:(id)arg1;

- (id)pathnameForDatabase;

- (id)sqliteVersion;

- (Class)statementClass;

- (_Bool)supportsCorrelatedSubqueries;

- (id)type;

- (id)typeStringForColumn:(id)arg1;

- (id)typeStringForSQLType:(unsigned int)arg1;



@end

