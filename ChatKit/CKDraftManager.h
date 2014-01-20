/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray, NSMutableDictionary, NSMutableSet;



@interface CKDraftManager : NSObject

{

    NSMutableDictionary *_cachedDrafts;

    NSMutableSet *_dirtyDraftIDs;

    NSArray *_pendingRecipients;

}



+ (id)sharedInstance;

- (void)_clearDraftForConversation:(id)arg1;

- (id)_draftForKey:(id)arg1;

- (id)_pendingRecipients;

- (id)_pendingRecipientsURL;

- (void)_setDraft:(id)arg1 forKey:(id)arg2;

- (void)_setPendingRecipients:(id)arg1;

- (void)clearDraftForPendingConversation;

- (void)dealloc;

- (id)draftForConversation:(id)arg1;

- (id)draftForPendingConversationWithRecipients:(id *)arg1;

- (void)save:(_Bool)arg1;

- (void)setDraft:(id)arg1 forConversation:(id)arg2;

- (void)setDraftForPendingConversation:(id)arg1 withRecipients:(id)arg2;



@end


