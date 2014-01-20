/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class EBReaderState, EDSheet;



__attribute__((visibility("hidden")))

@interface EBReaderSheetState : NSObject

{

    EBReaderState *mReaderState;

    EDSheet *mEDSheet;

    struct map<int, unsigned long, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, unsigned long>>> mSharedFormulas;

    unsigned long long mChartIndex;

}



- (id).cxx_construct;

- (void).cxx_destruct;

- (void)dealloc;

- (id)edSheet;

- (id)initWithReaderState:(id)arg1;

- (unsigned long long)nextChartIndex;

- (id)readerState;

- (void)reportWorksheetWarning:(struct CPTaggedMessageStructure *)arg1;

- (id)resources;

- (void)setEDSheet:(id)arg1;

- (void)setSharedFormulaIndex:(unsigned long long)arg1 forRowCol:(int)arg2;

- (unsigned long long)sharedFormulaIndexForRowCol:(int)arg1;

- (id)workbook;

- (struct XlBinaryReader *)xlReader;



@end

