/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "WAKView.h"



#import "WebPDFDocumentRepresentation.h"

#import "WebPDFDocumentView.h"



@class NSString;



@interface WebPDFView : WAKView <WebPDFDocumentView, WebPDFDocumentRepresentation>

{

    _Bool dataSourceHasBeenSet;

    struct CGPDFDocument *_PDFDocument;

    NSString *_title;

    struct CGRect *_pageRects;

}



+ (Class)_representationClassForWebFrame:(id)arg1;

+ (struct CGColor *)backgroundColor;

+ (struct CGColor *)shadowColor;

+ (id)supportedMIMETypes;

- (void)_checkPDFTitle;

- (void)_computePageRects;

- (id)_pagesInRect:(struct CGRect)arg1;

- (_Bool)canProvideDocumentSource;

- (void)dataSourceUpdated:(id)arg1;

- (void)dealloc;

- (struct CGPDFDocument *)doc;

- (id)documentSource;

- (void)drawPage:(struct CGPDFPage *)arg1;

- (void)drawRect:(struct CGRect)arg1;

- (void)finishedLoadingWithDataSource:(id)arg1;

- (void)layout;

- (unsigned int)pageNumberForRect:(struct CGRect)arg1;

- (void)receivedData:(id)arg1 withDataSource:(id)arg2;

- (void)receivedError:(id)arg1 withDataSource:(id)arg2;

- (struct CGRect)rectForPageNumber:(unsigned int)arg1;

- (void)setDataSource:(id)arg1;

- (void)setNeedsLayout:(_Bool)arg1;

- (id)title;

- (unsigned int)totalPages;

- (void)viewDidMoveToHostWindow;

- (void)viewWillMoveToHostWindow:(id)arg1;



@end


