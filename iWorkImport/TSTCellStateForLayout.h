/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class TSTCell, TSTLayoutContentCachedKey, TSWPColumn;



__attribute__((visibility("hidden")))

@interface TSTCellStateForLayout : NSObject

{

    _Bool mCellPropsRowHeight;

    _Bool mCellWraps;

    _Bool mForDrawing;

    _Bool mInDynamicLayout;

    CDStruct_0441cfb5 mModelCellID;

    int mVerticalAlignment;

    int mLayoutCacheFlags;

    TSTCell *mCell;

    CDStruct_5f1f7aa9 mMergedRange;

    TSWPColumn *mWPColumn;

    id mCellContents;

    TSTLayoutContentCachedKey *mKeyVal;

    unsigned long long mPageNumber;

    unsigned long long mPageCount;

    struct CGSize mMinSize;

    struct CGSize mMaxSize;

    struct UIEdgeInsets mPaddingInsets;

}



@property(copy, nonatomic) TSTCell *cell; // @synthesize cell=mCell;

@property(retain, nonatomic) id cellContents; // @synthesize cellContents=mCellContents;

@property(nonatomic) _Bool cellPropsRowHeight; // @synthesize cellPropsRowHeight=mCellPropsRowHeight;

@property(nonatomic) _Bool cellWraps; // @synthesize cellWraps=mCellWraps;

- (void)dealloc;

@property(nonatomic) _Bool forDrawing; // @synthesize forDrawing=mForDrawing;

@property(readonly, nonatomic) _Bool hasContent;

@property(nonatomic) _Bool inDynamicLayout; // @synthesize inDynamicLayout=mInDynamicLayout;

- (id)init;

@property(retain, nonatomic) TSTLayoutContentCachedKey *keyVal; // @synthesize keyVal=mKeyVal;

@property(nonatomic) int layoutCacheFlags; // @synthesize layoutCacheFlags=mLayoutCacheFlags;

@property(nonatomic) struct CGSize maxSize; // @synthesize maxSize=mMaxSize;

@property(nonatomic) CDStruct_5f1f7aa9 mergedRange; // @synthesize mergedRange=mMergedRange;

@property(nonatomic) struct CGSize minSize; // @synthesize minSize=mMinSize;

@property(nonatomic) CDStruct_0441cfb5 modelCellID; // @synthesize modelCellID=mModelCellID;

@property(nonatomic) struct UIEdgeInsets paddingInsets; // @synthesize paddingInsets=mPaddingInsets;

@property(nonatomic) unsigned long long pageCount; // @synthesize pageCount=mPageCount;

@property(nonatomic) unsigned long long pageNumber; // @synthesize pageNumber=mPageNumber;

@property(nonatomic) int verticalAlignment; // @synthesize verticalAlignment=mVerticalAlignment;

@property(retain, nonatomic) TSWPColumn *wpColumn; // @synthesize wpColumn=mWPColumn;



@end


