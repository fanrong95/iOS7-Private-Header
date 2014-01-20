/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "GQUOutputBundle.h"



__attribute__((visibility("hidden")))

@interface GQUQuicklookOutputBundle : NSObject <GQUOutputBundle>

{

    struct __CFDictionary *mQuicklookProperties;

    struct __CFDictionary *mAttachments;

    struct __CFData *mMainHtmlData;

    struct __CFString *mUriScheme;

    struct __CFString *mUuidStr;

}



- (struct __CFString *)createUriForResource:(struct __CFString *)arg1;

- (void)dealloc;

- (_Bool)giveOutputToPreviewRequest:(struct __QLPreviewRequest *)arg1;

- (id)init;

- (id)initWithUriScheme:(struct __CFString *)arg1;

- (struct __CFData *)mainHtmlData;

- (struct __CFDictionary *)quicklookDictionary;

- (_Bool)setData:(struct __CFData *)arg1 mimeType:(struct __CFString *)arg2 forNamedResource:(struct __CFString *)arg3;

- (_Bool)setDataForMainHtmlResource:(struct __CFData *)arg1;

- (void)setDocumentSize:(struct CGSize)arg1;

- (void)setPageElementXPath:(struct __CFString *)arg1 withThumbnailsOnLeft:(_Bool)arg2;



@end


