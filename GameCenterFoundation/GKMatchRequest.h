/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class GKMatchRequestInternal, NSArray, NSString;



@interface GKMatchRequest : NSObject

{

    GKMatchRequestInternal *_internal;

    id _inviteeResponseHandler;

}



+ (id)instanceMethodSignatureForSelector:(SEL)arg1;

+ (_Bool)instancesRespondToSelector:(SEL)arg1;

+ (unsigned long long)maxPlayersAllowedForMatchOfType:(unsigned long long)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (_Bool)defaultNumberOfPlayersIsValid;

- (id)description;

- (id)forwardingTargetForSelector:(SEL)arg1;

- (unsigned long long)hash;

- (id)init;

- (id)initWithInternalRepresentation:(id)arg1;

@property(retain) GKMatchRequestInternal *internal; // @synthesize internal=_internal;

@property(copy, nonatomic) id inviteeResponseHandler; // @synthesize inviteeResponseHandler=_inviteeResponseHandler;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isTurnBasedValid;

- (_Bool)isValidForHosted:(_Bool)arg1;

- (_Bool)isValidWithMax:(unsigned long long)arg1;

- (id)methodSignatureForSelector:(SEL)arg1;

- (void)removeLocalPlayerFromPlayersToInvite;

- (_Bool)respondsToSelector:(SEL)arg1;

- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;

- (id)valueForUndefinedKey:(id)arg1;



// Remaining properties

@property(nonatomic) unsigned long long defaultNumberOfPlayers; // @dynamic defaultNumberOfPlayers;

@property(copy, nonatomic) NSString *inviteMessage; // @dynamic inviteMessage;

@property(nonatomic) unsigned long long maxPlayers; // @dynamic maxPlayers;

@property(nonatomic) unsigned long long minPlayers; // @dynamic minPlayers;

@property(nonatomic) unsigned int playerAttributes; // @dynamic playerAttributes;

@property(nonatomic) unsigned long long playerGroup; // @dynamic playerGroup;

@property(retain, nonatomic) NSArray *playersToInvite; // @dynamic playersToInvite;



@end


