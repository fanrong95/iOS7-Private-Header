/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "GQSTable.h"


__attribute__((visibility("hidden")))

@interface GQSSpiceTable : GQSTable

{

    struct __CFDictionary *mVectorUidToAlongMap;

    _Bool mReadingRowVectors;

    vector_ec52ae8c *mRowPositions;

    vector_ec52ae8c *mColumnPositions;

    float mCurrentCellMinX;

    float mCurrentCellMaxX;

    float mCurrentCellMinY;

    float mCurrentCellMaxY;

    id mCurrentCellStorage;

    id mCurrentCellStyle;

}



- (void)aboutToReadCells;

- (void)aboutToReadColumnVectors;

- (void)aboutToReadRowVectors;

- (float)alongValueForVectorUid:(const char *)arg1;

- (void)dealloc;

- (id)init;

- (void)setAlongValue:(float)arg1 forOwnedVectorUid:(char *)arg2;



@end


