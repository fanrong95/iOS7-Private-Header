/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class ML3DatabaseResult;



@interface ML3DatabaseRow : NSObject

{

    ML3DatabaseResult *_parentResult;

}



- (void).cxx_destruct;

- (id)arrayRepresentation;

- (unsigned long long)columnCount;

- (id)dataForColumnIndex:(unsigned long long)arg1;

- (id)dataForColumnName:(id)arg1;

- (id)dictionaryRepresentation;

- (double)doubleForColumnIndex:(unsigned long long)arg1;

- (double)doubleForColumnName:(id)arg1;

- (void)getBlobBytes:(const void **)arg1 outLength:(int *)arg2 forColumnIndex:(unsigned long long)arg3;

- (void)getBlobBytes:(const void **)arg1 outLength:(int *)arg2 forColumnName:(id)arg3;

- (id)init;

- (id)initWithParentResult:(id)arg1;

- (long long)int64ForColumnIndex:(unsigned long long)arg1;

- (long long)int64ForColumnName:(id)arg1;

- (int)intForColumnIndex:(unsigned long long)arg1;

- (int)intForColumnName:(id)arg1;

- (id)numberForColumnIndex:(unsigned long long)arg1;

- (id)numberForColumnName:(id)arg1;

- (id)objectAtIndexedSubscript:(unsigned long long)arg1;

- (id)objectForKeyedSubscript:(id)arg1;

@property(readonly, nonatomic) ML3DatabaseResult *parentResult; // @synthesize parentResult=_parentResult;

- (id)stringForColumnIndex:(unsigned long long)arg1;

- (id)stringForColumnName:(id)arg1;

- (id)valueForColumnIndex:(unsigned long long)arg1;

- (id)valueForColumnName:(id)arg1;



@end


