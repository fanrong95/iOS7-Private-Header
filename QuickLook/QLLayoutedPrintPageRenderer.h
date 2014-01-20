/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "QLRemotePrintPageHelper.h"


@class NSMutableArray, UIWebPaginationInfo;



@interface QLLayoutedPrintPageRenderer : QLRemotePrintPageHelper

{

    NSMutableArray *_nodes;

    UIWebPaginationInfo *_paginationInfo;

}



- (id)_currentNodes;

- (id)_htmlPageXPath;

- (void)dealloc;

- (long long)numberOfPages;

- (id)pdfDataForPageAtIndex:(long long)arg1 withSize:(struct CGSize)arg2 printingDone:(_Bool *)arg3;

- (void)prepareForDrawingPages:(struct _NSRange)arg1;



@end


