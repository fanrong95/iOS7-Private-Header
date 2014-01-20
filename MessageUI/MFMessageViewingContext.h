/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class MFActivityMonitor, MFAttachmentManager, MFError, MFLock, MFMailMessage, MFMessageBody, MFMimePart, NSArray, NSObject<MFMessageViewingContextDelegate>;



@interface MFMessageViewingContext : NSObject

{

    NSObject<MFMessageViewingContextDelegate> *_delegate;

    MFMailMessage *_message;

    MFMessageBody *_body;

    id _content;

    MFLock *_contentLock;

    MFActivityMonitor *_loadTask;

    MFMimePart *_loadedPart;

    NSArray *_signers;

    MFError *_secureMIMEError;

    MFAttachmentManager *_attachmentManager;

    unsigned long long _contentOffset;

    unsigned int _loadIncrement;

    unsigned int _loadedFullData:1;

    unsigned int _loadBestAlternative:1;

    unsigned int _hasNoContent:1;

    unsigned int _failedToLoad:1;

    unsigned int _isOutgoingMessage:1;

    unsigned int _isDraftMessage:1;

    unsigned int _isEditableMessage:1;

    unsigned int _showMailboxName:1;

}



+ (_Bool)isAttachmentTooLarge:(id)arg1;

+ (unsigned long long)nextOffsetForOffset:(unsigned long long)arg1 totalLength:(unsigned long long)arg2 requestedAmount:(unsigned long long)arg3;

- (void)_notifyAttachmentComplete:(id)arg1 data:(id)arg2;

- (void)_notifyCompletelyComplete;

- (void)_notifyFullMessageLoadFailed;

- (void)_notifyInitialLoadComplete;

- (void)_setContent:(id)arg1;

- (void)_setContentOffset:(unsigned long long)arg1;

- (void)_setLoadedPart:(id)arg1;

- (void)_setMessageBody:(id)arg1;

- (void)_setSecureMIMEError:(id)arg1;

- (void)_setSigners:(id)arg1;

@property(readonly, nonatomic) MFAttachmentManager *attachmentManager; // @synthesize attachmentManager=_attachmentManager;

- (id)attachments;

- (void)cancelLoad;

@property(readonly, nonatomic) id content;

@property(readonly, nonatomic) unsigned long long contentOffset; // @synthesize contentOffset=_contentOffset;

- (void)dealloc;

@property(nonatomic) NSObject<MFMessageViewingContextDelegate> *delegate; // @synthesize delegate=_delegate;

@property(readonly, nonatomic) _Bool failedToLoad;

- (id)fileWrappersForImageAttachments;

@property(readonly, nonatomic) _Bool hasLoaded;

@property(readonly, nonatomic) _Bool hasNoContent;

- (id)initWithMessage:(id)arg1 attachmentManager:(id)arg2;

@property(nonatomic) _Bool isDraftMessage;

@property(nonatomic) _Bool isEditableMessage;

@property(readonly, nonatomic) _Bool isMessageEncrypted;

@property(readonly, nonatomic) _Bool isMessageSigned;

@property(nonatomic) _Bool isOutgoingMessage;

@property(readonly, nonatomic) _Bool isPartial;

- (void)load;

- (void)loadAsPlainText:(_Bool)arg1 asHTML:(_Bool)arg2 downloadIfNecessary:(_Bool)arg3;

- (void)loadBestAlternative;

- (void)loadFull;

- (void)loadMore;

@property(readonly, nonatomic) MFActivityMonitor *loadTask; // @synthesize loadTask=_loadTask;

- (void)loadWithPriority:(int)arg1;

@property(readonly, nonatomic) MFMimePart *loadedPart; // @synthesize loadedPart=_loadedPart;

@property(readonly, nonatomic) MFMailMessage *message; // @synthesize message=_message;

@property(readonly, nonatomic) MFMessageBody *messageBody; // @synthesize messageBody=_body;

@property(readonly, nonatomic) MFError *secureMimeError; // @synthesize secureMimeError=_secureMIMEError;

- (void)setLoadTask:(id)arg1;

@property(nonatomic) _Bool showMailboxName;

@property(readonly, nonatomic) NSArray *signers; // @synthesize signers=_signers;

- (id)uniqueID;

- (void)unload;



@end


