/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSSQLWhereIntermediate.h"


@class NSMutableArray;



__attribute__((visibility("hidden")))

@interface NSSQLCompoundWhereIntermediate : NSSQLWhereIntermediate

{

    NSMutableArray *_subclauses;

}



- (id)_generateMulticlauseStringInContext:(id)arg1;

- (void)dealloc;

- (id)generateSQLStringInContext:(id)arg1;

- (id)initWithPredicate:(id)arg1 inScope:(id)arg2 inContext:(id)arg3;

- (_Bool)isOrScoped;



@end


