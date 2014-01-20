/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray, TSCHLegendCellMetrics, TSCHLegendViewCache, TSDShadow, TSDStroke, TSWPParagraphStyle;



__attribute__((visibility("hidden")))

@interface TSCHLegendModelCache : NSObject

{

    TSCHLegendCellMetrics *mMetrics;

    _Bool mLegendOn;

    NSArray *mCells;

    unsigned long long mCellCount;

    TSWPParagraphStyle *mParagraphStyle;

    TSDStroke *mStroke;

    TSDShadow *mShadow;

    id mFill;

    double mOpacity;

    double mHorizontalCellSpacing;

    double mVerticalCellSpacing;

    struct CGSize mLargestCellSize;

    double mEffectiveStrokeWidth;

    _Bool mReverseSingleColumnLegendOrder;

    double mLastLegendWidth;

    TSCHLegendViewCache *mLastLegendViewCache;

    double mSymbolGap;

}



@property(readonly) unsigned long long cellCount; // @synthesize cellCount=mCellCount;

- (id)cellForSeriesIndex:(unsigned long long)arg1 cellType:(int)arg2;

@property(readonly) NSArray *cells; // @synthesize cells=mCells;

- (void)dealloc;

@property(readonly) double effectiveStrokeWidth; // @synthesize effectiveStrokeWidth=mEffectiveStrokeWidth;

@property(readonly) id fill; // @synthesize fill=mFill;

@property(readonly) double horizontalCellSpacing; // @synthesize horizontalCellSpacing=mHorizontalCellSpacing;

- (id)initWithChartModel:(id)arg1 textEditingSelectionPair:(id)arg2;

@property(readonly) struct CGSize largestCellSize; // @synthesize largestCellSize=mLargestCellSize;

@property(readonly) _Bool legendOn; // @synthesize legendOn=mLegendOn;

@property(readonly) double opacity; // @synthesize opacity=mOpacity;

@property(readonly) TSWPParagraphStyle *paragraphStyle; // @synthesize paragraphStyle=mParagraphStyle;

@property(readonly) _Bool reverseSingleColumnLegendOrder; // @synthesize reverseSingleColumnLegendOrder=mReverseSingleColumnLegendOrder;

@property(readonly) TSDShadow *shadow; // @synthesize shadow=mShadow;

@property(readonly) TSDStroke *stroke; // @synthesize stroke=mStroke;

@property(readonly) double symbolGap; // @synthesize symbolGap=mSymbolGap;

@property(readonly) double verticalCellSpacing; // @synthesize verticalCellSpacing=mVerticalCellSpacing;

- (id)viewCacheForWidth:(double)arg1;



@end


