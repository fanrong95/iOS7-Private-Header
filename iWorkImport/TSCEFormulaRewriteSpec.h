/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface TSCEFormulaRewriteSpec : NSObject

{

    int mType;

    CDUnion_25764664 mInfo;

}



- (id).cxx_construct;

- (struct __CFUUID *)affectedOwnerID;

- (void)dealloc;

- (id)description;

- (id)initWithArchive:(const struct FormulaRewriteSpecArchive *)arg1;

- (id)initWithCellMergeInTable:(struct __CFUUID *)arg1 mergedRange:(struct)arg2;

- (id)initWithOwnerDeletion:(struct __CFUUID *)arg1;

- (id)initWithRangeMoveFrom:(CDStruct_5744d895)arg1 to:(CDStruct_5744d895)arg2;

- (id)initWithSortMapping:(id)arg1 tableID:(struct __CFUUID *)arg2 explodeRanges:(_Bool)arg3;

- (id)initWithTableResize:(struct __CFUUID *)arg1 oldTableSize:(struct)arg2 newTableSize:(struct)arg3;

- (id)initWithTectonicShift:(id)arg1;

- (CDUnion_25764664)rewriteInfo;

- (int)rewriteType;

- (void)saveToArchive:(struct FormulaRewriteSpecArchive *)arg1 archiver:(id)arg2;



@end


