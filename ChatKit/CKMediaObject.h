/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "CKPreviewDispatchCachePolicyDelegate.h"

#import "QLPreviewItem.h"



@class NSData, NSDictionary, NSString, NSURL;



@interface CKMediaObject : NSObject <CKPreviewDispatchCachePolicyDelegate, QLPreviewItem>

{

    id <CKFileTransfer> _transfer;

}



+ (id)UTITypes;

+ (id)fallbackFilenamePrefix;

+ (id)iconCache;

+ (_Bool)isPreviewable;

+ (id)previewDispatchCache;

- (id)PNGDataFromImage:(id)arg1;

@property(readonly, nonatomic) NSString *UTIType;

- (void)_sampleImageEdges:(id)arg1 usingRect:(struct CGRect)arg2 forMostlyWhitePixels:(unsigned long long *)arg3 otherPixels:(unsigned long long *)arg4;

- (Class)balloonViewClass;

- (id)bbPreviewFillToSize:(struct CGSize)arg1;

- (struct CGSize)bbSize;

@property(readonly, nonatomic) NSData *data;

- (void)dealloc;

- (id)description;

- (id)downloadProgressImage;

- (id)downloadProgressString;

- (id)fileManager;

- (id)fileSizeString;

@property(readonly, nonatomic) NSURL *fileURL;

@property(readonly, nonatomic) NSString *filename;

- (id)generatePreviewFromThumbnail:(id)arg1 forOrientation:(BOOL)arg2;

- (id)generateThumbnail;

- (id)generateThumbnailFillToSize:(struct CGSize)arg1;

- (id)icon;

- (id)initWithTransfer:(id)arg1;

- (_Bool)isPreviewable;

@property(readonly, nonatomic) int mediaType;

@property(readonly, nonatomic) NSString *mimeType;

- (id)pasteboardItem;

- (Class)previewBalloonViewClass;

- (id)previewDispatchCache;

- (_Bool)previewDispatchCache:(id)arg1 shouldReplaceCachedPreview:(id)arg2 withPreview:(id)arg3;

- (id)previewForOrientation:(BOOL)arg1;

@property(readonly) NSURL *previewItemURL;

- (void)savePreview:(id)arg1 toURL:(id)arg2 forOrientation:(BOOL)arg3;

- (id)savedPreviewFromURL:(id)arg1 forOrientation:(BOOL)arg2;

@property(retain, nonatomic) id <CKFileTransfer> transfer; // @synthesize transfer=_transfer;

- (_Bool)shouldBeQuickLooked;

- (_Bool)shouldShowDisclosure;

- (_Bool)shouldShowViewer;

- (id)subtitle;

- (id)title;

@property(readonly, nonatomic) NSDictionary *transcoderUserInfo;

@property(readonly, nonatomic) NSString *transferGUID;



// Remaining properties

@property(readonly) NSString *previewItemTitle;



@end


