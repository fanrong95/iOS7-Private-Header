/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class MFLock, NSMutableDictionary;



@interface MFWebAttachmentSource : NSObject

{

    MFLock *_attachmentsLock;

    NSMutableDictionary *_attachmentsByURL;

    NSMutableDictionary *_removedAttachmentsByURL;

}



+ (id)_setOfAllSources;

+ (id)allSources;

- (id)attachmentForURL:(id)arg1;

- (id)attachmentForURL:(id)arg1 includeRemoved:(_Bool)arg2;

- (void)dealloc;

- (id)description;

- (id)init;

@property _Bool keepRemovedAttachments;

- (void)removeAttachmentForURL:(id)arg1;

- (_Bool)setAttachment:(id)arg1 forURL:(id)arg2;



@end


