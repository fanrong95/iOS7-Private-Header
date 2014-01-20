/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "TSCHUnretainedParent.h"



@class TSCHLegendModelCache;



__attribute__((visibility("hidden")))

@interface TSCHLegendViewCache : NSObject <TSCHUnretainedParent>

{

    unsigned long long mCellCount;

    unsigned long long mNumberOfRows;

    unsigned long long mNumberOfColumns;

    struct CGSize mFinalSize;

    TSCHLegendModelCache *mModelCache;

    struct CGPoint *mCellOrigins;

}



- (void)clearParent;

- (void)dealloc;

- (id)initWithLegendModelCache:(id)arg1 legendWidth:(double)arg2;

@property(readonly) struct CGSize legendSize; // @synthesize legendSize=mFinalSize;

@property(readonly) unsigned long long numberOfColumns; // @synthesize numberOfColumns=mNumberOfColumns;

@property(readonly) unsigned long long numberOfRows; // @synthesize numberOfRows=mNumberOfRows;

- (struct CGPoint)originForCell:(id)arg1;



@end


