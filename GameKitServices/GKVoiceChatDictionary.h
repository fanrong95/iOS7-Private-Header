/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableDictionary;



__attribute__((visibility("hidden")))

@interface GKVoiceChatDictionary : NSObject

{

    NSMutableDictionary *actualDictionary;

    unsigned long long type;

    unsigned int orignalCallID;

}



+ (id)dictionaryFromData:(id)arg1;

+ (id)inviteDictionaryToParticipantID:(id)arg1 fromParticipantID:(id)arg2 connectionData:(id)arg3 callID:(unsigned int)arg4 focus:(_Bool)arg5;

+ (_Bool)validateCancel:(id)arg1;

+ (_Bool)validateDictionary:(id)arg1;

+ (_Bool)validateFocus:(id)arg1;

+ (_Bool)validateInvite:(id)arg1;

+ (_Bool)validateReply:(id)arg1;

@property unsigned int callID;

- (id)cancelDictionary;

- (id)connectionData;

- (id)createBlob;

- (void)dealloc;

- (id)description;

- (void)encodeWithCoder:(id)arg1;

- (id)focusDictionary:(_Bool)arg1;

- (id)fromParticipantID;

- (id)initWithCoder:(id)arg1;

- (_Bool)isCancelDictionary;

- (_Bool)isFocus;

- (_Bool)isFocusDictionary;

- (_Bool)isInviteDictionary;

- (_Bool)isReplyDictionary;

- (id)localVCPartyID;

- (_Bool)matchesNonce:(long long)arg1;

- (_Bool)matchesResponse:(id)arg1;

@property long long nonce;

@property(readonly) unsigned int originalCallID;

- (id)participantID;

- (id)remoteVCPartyID;

- (id)replyDictionary:(unsigned long long)arg1 connectionData:(id)arg2 callID:(unsigned int)arg3 focus:(_Bool)arg4;

- (unsigned long long)response;

- (void)setFocus:(_Bool)arg1;

- (void)setFromParticipantID:(id)arg1;

- (id)setLocalVCPartyID:(id)arg1;

- (id)setRemoteVCPartyID:(id)arg1;

- (unsigned long long)type;

- (id)version;



@end


