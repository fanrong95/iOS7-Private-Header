/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSIndexSet.h"


@interface NSMutableIndexSet : NSIndexSet

{

    void *_reserved;

}



- (void)_addRangeToArray:(struct _NSRange)arg1;

- (void)_ensureRangeCapacity:(unsigned long long)arg1;

- (void)_incrementBy:(unsigned long long)arg1 startingAtIndex:(unsigned long long)arg2;

- (void)_insertRange:(struct _NSRange)arg1 inArrayAtIndex:(unsigned long long)arg2;

- (void)_mergeOverlappingRangesStartingAtIndex:(unsigned long long)arg1;

- (void)_removeAndDecrementBy:(unsigned long long)arg1 startingAtIndex:(unsigned long long)arg2;

- (void)_removeRangeInArrayAtIndex:(unsigned long long)arg1;

- (void)_replaceRangeInArrayAtIndex:(unsigned long long)arg1 withRange:(struct _NSRange)arg2;

- (void)addIndex:(unsigned long long)arg1;

- (void)addIndexes:(id)arg1;

- (void)addIndexes:(const unsigned long long *)arg1 count:(unsigned long long)arg2;

- (void)addIndexesFromIndexSet:(id)arg1;

- (void)addIndexesInRange:(struct _NSRange)arg1;

- (Class)classForCoder;

- (void)removeAllIndexes;

- (void)removeIndex:(unsigned long long)arg1;

- (void)removeIndexes:(id)arg1;

- (void)removeIndexesFromIndexSet:(id)arg1;

- (void)removeIndexesInRange:(struct _NSRange)arg1;

- (void)removeIndexesInRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 passingTest:(id)arg3;

- (void)removeIndexesPassingTest:(id)arg1;

- (void)removeIndexesWithOptions:(unsigned long long)arg1 passingTest:(id)arg2;

- (void)shiftIndexesStartingAtIndex:(unsigned long long)arg1 by:(long long)arg2;



@end


