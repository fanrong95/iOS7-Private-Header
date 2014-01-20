/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableArray, NSMutableDictionary;



__attribute__((visibility("hidden")))

@interface TSUHTMLTable : NSObject

{

    NSMutableDictionary *_columnAttributes;

    NSMutableDictionary *_rowClasses;

    NSMutableDictionary *_cellAttributes;

    NSMutableArray *_columnHeaders;

    NSMutableArray *_rows;

    unsigned long long _rowClassStride;

}



+ (id)_attributesStringFromAttributes:(id)arg1;

+ (id)_keyForCell:(unsigned long long)arg1:(unsigned long long)arg2;

+ (id)htmlTable;

- (void)addRowWithCellMarkup:(id)arg1;

- (void)addRowWithCellText:(id)arg1;

@property(readonly, nonatomic) unsigned long long count;

- (void)dealloc;

- (void)deleteColumnWithTitle:(id)arg1;

- (void)enumerateRowsUsingBlock:(id)arg1;

- (unsigned long long)indexOfColumnWithTitle:(id)arg1;

- (id)init;

@property(readonly, nonatomic) unsigned long long lastRowIndex;

- (id)markup;

@property(nonatomic) unsigned long long rowClassStride; // @synthesize rowClassStride=_rowClassStride;

- (void)setCellAttributes:(id)arg1 rowIndex:(unsigned long long)arg2 columnIndex:(unsigned long long)arg3;

- (void)setCellMarkup:(id)arg1 atRowIndex:(unsigned long long)arg2 columnIndex:(unsigned long long)arg3;

- (void)setClass:(id)arg1 ofColumnIndex:(unsigned long long)arg2;

- (void)setColumnClasses:(id)arg1;

- (void)setColumnHeaders:(id)arg1;

- (void)setRowClass:(id)arg1 atRowIndex:(unsigned long long)arg2;



@end


