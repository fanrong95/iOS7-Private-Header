/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSPObject.h"


@class NSObject<OS_dispatch_queue>, TSSStylesheet, TSUMutableRetainedPointerSet;



__attribute__((visibility("hidden")))

@interface TSSStylesheetPasteboardProxy : TSPObject

{

    TSSStylesheet *mStylesheet;

    TSUMutableRetainedPointerSet *mReferencedStyles;

    NSObject<OS_dispatch_queue> *mReferencedStylesQueue;

    _Bool mSelfArchiving;

}



- (void)addStyleReference:(id)arg1;

- (void)dealloc;

- (id)initWithContext:(id)arg1 stylesheet:(id)arg2;

- (void)saveToArchiver:(id)arg1;



@end


