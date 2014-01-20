/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSPPasteboard.h"


@class NSMutableDictionary, NSObject<OS_dispatch_queue>;



__attribute__((visibility("hidden")))

@interface TSPPasteboardUIPasteboard : TSPPasteboard

{

    int _transactionCount;

    NSObject<OS_dispatch_queue> *_pasteboardItemQueue;

    NSMutableDictionary *_pasteboardItem;

}



- (void).cxx_destruct;

- (id)URLs;

- (void)addData:(id)arg1 forPasteboardType:(id)arg2;

- (void)addItems:(id)arg1 isSmartCopy:(_Bool)arg2;

- (void)beginTransaction;

- (long long)clearContents;

- (_Bool)containsImportableTextTypes;

- (id)dataForPasteboardType:(id)arg1;

- (id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2;

- (void)endTransaction;

- (id)importablePlainTextTypes;

- (id)initWithGeneralPasteboard;

- (id)initWithNativePasteboard:(id)arg1;

- (id)initWithPasteboardName:(id)arg1 create:(_Bool)arg2;

- (id)initWithUniquePasteboardName;

- (oneway void)invalidate;

- (long long)numberOfItems;

- (id)pasteboardTypes;

- (id)pasteboardTypesForItemSet:(id)arg1;

- (void)setString:(id)arg1;

- (id)string;

- (id)strings;

- (id)valueForPasteboardType:(id)arg1;

- (id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2;



@end


