/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol TSTLayoutDynamicResizeInfoProtocol <NSObject>

- (double)applyResizeHeightFactor:(double)arg1;

- (double)applyResizeWidthFactor:(double)arg1;

- (void)captureNewMinimumRowHeights:(id)arg1;

- (double)getColumnInitialWidth:(unsigned char)arg1;

- (double)getColumnWidth:(unsigned char)arg1;

- (double)getColumnWidthResize:(unsigned char)arg1;

- (double)getRowHeight:(unsigned short)arg1;

- (double)getRowHeightResize:(unsigned short)arg1;

- (double)getRowInitialHeight:(unsigned short)arg1;

- (_Bool)hasHeightForRow:(unsigned short)arg1;

- (_Bool)hasWidthForColumn:(unsigned char)arg1;

- (id)initWithDynamicResizeInfo:(id)arg1;

- (id)initWithMasterLayout:(id)arg1;

- (id)initWithMasterLayout:(id)arg1 columnRegion:(id)arg2;

- (id)initWithMasterLayout:(id)arg1 rowRegion:(id)arg2;

- (void)invalidate;

- (_Bool)valid;

@end


