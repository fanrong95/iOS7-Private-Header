/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSData, NSError, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSThread, NSURL, NSURLConnection, NSURLRequest, NSURLResponse;



__attribute__((visibility("hidden")))

@interface QLPreviewParts : NSObject

{

    NSURL *_url;

    NSData *_data;

    NSString *_fileName;

    NSString *_uti;

    NSString *_password;

    _Bool _progressive;

    void *_convertFunction;

    NSURLConnection *_connection;

    id _delegate;

    long long _pageCount;

    float _pageWidth;

    float _pageHeight;

    NSURL *previewURL;

    NSURLResponse *previewResponse;

    NSMutableSet *registeredURLs;

    NSMutableSet *outstandingURLs;

    NSMutableDictionary *encodingsForURLs;

    NSThread *delegateCallbackThread;

    NSError *mainError;

    _Bool computed;

    _Bool cancelled;

    const void *representedObject;

    CDStruct_b3b3fc87 representedObjectCallbacks;

    long long representedObjectProtection;

    NSMutableDictionary *dumpFileHandles;

    _Bool dumpToDisk;

    _Bool htmlErrorDisabled;

}



+ (_Bool)isSafeRequest:(id)arg1;

+ (_Bool)isSafeURL:(id)arg1;

+ (void)registerPreview:(id)arg1;

+ (id)relativeStringForSafeURL:(id)arg1;

+ (id)safeURLScheme;

+ (void)unregisterPreview:(id)arg1;

- (void)_discardRepresentedObjectSafely;

- (void)_dumpData:(id)arg1 withURL:(id)arg2 lastChunk:(_Bool)arg3;

- (void)_protectRepresentedObjectSafely;

- (void)_registerURL:(id)arg1 mimeType:(id)arg2 textEncoding:(id)arg3;

- (id)_requestForURL:(id)arg1;

- (id)_voidRequest;

- (void)appendData:(id)arg1 forURL:(id)arg2 lastChunk:(_Bool)arg3;

@property(readonly, nonatomic) NSSet *attachmentURLs;

- (void)cancel;

- (unsigned int)cfEncodingForAttachmentURL:(id)arg1;

- (void)computePreview;

- (void)computePreviewInThread;

@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;

@property(retain, nonatomic) NSData *data; // @synthesize data=_data;

- (void)dealloc;

@property(nonatomic) id delegate; // @synthesize delegate=_delegate;

- (const void *)documentObject;

@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;

@property _Bool htmlErrorDisabled; // @synthesize htmlErrorDisabled;

@property(readonly, getter=isCancelled) _Bool cancelled;

@property(readonly, getter=isComputed) _Bool computed;

- (id)mimeTypeForAttachmentURL:(id)arg1;

- (id)newAttachmentURLWithID:(id)arg1 properties:(id)arg2;

- (id)newSafeAttachmentURLWithID:(id)arg1 mimeType:(id)arg2 textEncoding:(id)arg3;

@property(readonly) long long pageCount; // @synthesize pageCount=_pageCount;

@property(readonly) float pageHeight; // @synthesize pageHeight=_pageHeight;

@property(readonly) float pageWidth; // @synthesize pageWidth=_pageWidth;

@property(retain, nonatomic) NSString *password; // @synthesize password=_password;

@property(readonly, nonatomic) NSURLRequest *previewRequest;

@property(readonly, nonatomic) NSURLResponse *previewResponse;

@property(readonly, nonatomic) NSURL *previewURL; // @synthesize previewURL;

@property(nonatomic) _Bool progressive; // @synthesize progressive=_progressive;

- (id)safeRequestForRequest:(id)arg1;

- (void)setDocumentObject:(const void *)arg1 callbacks:(const CDStruct_b3b3fc87 *)arg2;

- (void)setError:(id)arg1;

@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;

@property(retain, nonatomic) NSString *uti; // @synthesize uti=_uti;

- (void)startComputingPreview;

- (void)startDataRepresentationWithContentType:(id)arg1 properties:(id)arg2;



@end


