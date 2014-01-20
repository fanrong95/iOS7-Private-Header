/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString;



@interface GKPendingFriendRequest : NSObject

{

    NSString *_recipient;

    int _recipientKind;

    NSString *_originator;

    NSString *_originatorEmail;

    NSString *_requestID;

    NSString *_message;

    NSString *_handle;

    _Bool _shouldBadge;

    unsigned long long _friendRequestCount;

    _Bool _purpleBuddyAccount;

}



+ (id)pushDictionaryForQuery:(id)arg1;

- (void)dealloc;

- (id)description;

@property(nonatomic) unsigned long long friendRequestCount; // @synthesize friendRequestCount=_friendRequestCount;

@property(retain, nonatomic) NSString *handle; // @synthesize handle=_handle;

- (id)initWithPushDictionary:(id)arg1;

- (id)initWithURLQuery:(id)arg1;

@property(retain, nonatomic) NSString *message; // @synthesize message=_message;

@property(retain, nonatomic) NSString *originator; // @synthesize originator=_originator;

@property(retain, nonatomic) NSString *originatorEmail; // @synthesize originatorEmail=_originatorEmail;

@property(nonatomic) _Bool purpleBuddyAccount; // @synthesize purpleBuddyAccount=_purpleBuddyAccount;

@property(retain, nonatomic) NSString *recipient; // @synthesize recipient=_recipient;

@property(nonatomic) int recipientKind; // @synthesize recipientKind=_recipientKind;

@property(retain, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;

@property(nonatomic) _Bool shouldBadge; // @synthesize shouldBadge=_shouldBadge;



@end


