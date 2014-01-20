/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSSQLProperty.h"


@class NSString;



__attribute__((visibility("hidden")))

@interface NSSQLColumn : NSSQLProperty

{

    NSString *_columnName;

    int _sqlType;

    unsigned int _precision;

    int _scale;

    unsigned int _fetchIndex;

    unsigned int _slot;

    unsigned int _allowAliasing;

}



- (void)_setColumnName:(id)arg1;

- (void)_setFetchIndex:(unsigned int)arg1;

- (void)_setSQLType:(unsigned int)arg1;

- (void)_setSlotIfDefault:(unsigned int)arg1;

- (_Bool)allowAliasing;

- (id)cloneForReadOnlyFetching;

- (id)columnName;

- (void)copyValuesForReadOnlyFetch:(id)arg1;

- (void)dealloc;

- (id)description;

- (unsigned int)fetchIndex;

- (id)initForReadOnlyFetching;

- (id)initWithColumnName:(id)arg1 sqlType:(unsigned int)arg2;

- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;

- (unsigned int)precision;

- (unsigned int)roughSizeEstimate;

- (int)scale;

- (void)setAllowAliasing:(_Bool)arg1;

- (void)setPrecision:(unsigned int)arg1;

- (void)setScale:(int)arg1;

- (unsigned int)slot;

- (unsigned int)sqlType;



@end


