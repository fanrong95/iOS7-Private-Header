/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "WebDocumentDOM.h"

#import "WebDocumentRepresentation.h"



@class WebHTMLRepresentationPrivate;



@interface WebHTMLRepresentation : NSObject <WebDocumentRepresentation, WebDocumentDOM>

{

    WebHTMLRepresentationPrivate *_private;

}



+ (id)supportedImageMIMETypes;

+ (id)supportedMIMETypes;

+ (id)supportedNonImageMIMETypes;

+ (id)unsupportedTextMIMETypes;

- (id)DOMDocument;

- (_Bool)_isDisplayingWebArchive;

- (void)_redirectDataToManualLoader:(id)arg1 forPluginView:(id)arg2;

- (_Bool)canProvideDocumentSource;

- (_Bool)canSaveAsWebArchive;

- (id)controlsInForm:(id)arg1;

- (id)currentForm;

- (void)dealloc;

- (id)documentSource;

- (_Bool)elementDoesAutoComplete:(id)arg1;

- (_Bool)elementIsPassword:(id)arg1;

- (id)elementWithName:(id)arg1 inForm:(id)arg2;

- (void)finalize;

- (void)finishedLoadingWithDataSource:(id)arg1;

- (id)formForElement:(id)arg1;

- (id)init;

- (id)matchLabels:(id)arg1 againstElement:(id)arg2;

- (void)receivedData:(id)arg1 withDataSource:(id)arg2;

- (void)receivedError:(id)arg1 withDataSource:(id)arg2;

- (id)searchForLabels:(id)arg1 beforeElement:(id)arg2;

- (id)searchForLabels:(id)arg1 beforeElement:(id)arg2 resultDistance:(unsigned long long *)arg3 resultIsInCellAbove:(_Bool *)arg4;

- (void)setDataSource:(id)arg1;

- (id)title;



@end


