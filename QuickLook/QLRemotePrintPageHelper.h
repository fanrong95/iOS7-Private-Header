/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString, NSURLRequest, QLPreviewConverter, UIWebBrowserView;



@interface QLRemotePrintPageHelper : NSObject

{

    UIWebBrowserView *_browserView;

    NSURLRequest *_request;

    NSString *_documentType;

    QLPreviewConverter *_previewConverter;

    struct CGSize _printableSize;

}



+ (_Bool)_isXPathType:(id)arg1;

+ (id)printPageRendererWithBrowserView:(id)arg1 request:(id)arg2 documentType:(id)arg3;

- (void)_waitForPreview;

- (void)dealloc;

- (id)initWithWebBrowserView:(id)arg1 request:(id)arg2 documentType:(id)arg3;

- (long long)numberOfPages;

- (id)pdfDataForPageAtIndex:(long long)arg1 withSize:(struct CGSize)arg2 printingDone:(_Bool *)arg3;

- (void)prepareForDrawingPages:(struct _NSRange)arg1;

@property(retain) QLPreviewConverter *previewConverter; // @synthesize previewConverter=_previewConverter;

@property struct CGSize printableSize; // @synthesize printableSize=_printableSize;



@end


