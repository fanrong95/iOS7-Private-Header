/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSSQLRelationship.h"


@class NSString;



__attribute__((visibility("hidden")))

@interface NSSQLManyToMany : NSSQLRelationship

{

    NSString *_correlationTableName;

    NSString *_columnName;

    NSString *_orderColumnName;

}



- (void)_setColumnName:(id)arg1;

- (void)_setCorrelationTableName:(id)arg1;

- (void)_setInverseManyToMany:(id)arg1;

- (void)_setOrderColumnName:(id)arg1;

- (id)columnName;

- (unsigned int)columnSQLType;

- (id)correlationTableName;

- (void)dealloc;

- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;

- (id)inverseColumnName;

- (id)inverseManyToMany;

- (id)inverseOrderColumnName;

- (_Bool)isMaster;

- (_Bool)isReflexive;

- (_Bool)isTableSchemaEqual:(id)arg1;

- (id)orderColumnName;

- (unsigned int)orderColumnSQLType;



@end


