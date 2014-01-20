/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSSStyle.h"


#import "TSWPColumnMetrics.h"



@class TSWPPadding;



__attribute__((visibility("hidden")))

@interface TSWPColumnStyle : TSSStyle <TSWPColumnMetrics>

{

}



+ (float)defaultFloatValueForProperty:(int)arg1;

+ (int)defaultIntValueForProperty:(int)arg1;

+ (id)defaultStyleWithContext:(id)arg1;

+ (id)defaultValueForProperty:(int)arg1;

+ (id)properties;

+ (id)propertiesAllowingNSNull;

@property(readonly, nonatomic) struct CGSize adjustedInsets;

@property(readonly, nonatomic) _Bool alwaysStartsNewTarget;

@property(readonly, nonatomic) unsigned long long columnCount;

@property(readonly, nonatomic) _Bool columnsAreLeftToRight;

- (_Bool)equalWidth;

- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;

- (id)initFromUnarchiver:(id)arg1;

@property(readonly, nonatomic) TSWPPadding *layoutMargins;

- (void)loadFromArchive:(const struct ColumnStyleArchive *)arg1 unarchiver:(id)arg2;

- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 outWidth:(double *)arg3 outGap:(double *)arg4;

- (void)saveToArchive:(struct ColumnStyleArchive *)arg1 archiver:(id)arg2;

- (void)saveToArchiver:(id)arg1;

@property(readonly, nonatomic) _Bool shrinkTextToFit;

- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;



// Remaining properties

@property(readonly, nonatomic) double textScaleFactor;



@end


