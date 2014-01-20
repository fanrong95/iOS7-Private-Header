/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CoreDAVItem.h"



@class CoreDAVHrefItem, CoreDAVItemWithHrefChildItem, CoreDAVItemWithNoChildren, CoreDAVLeafItem, NSString, NSURL;



@interface CalDAVCalendarServerInviteReplyItem : CoreDAVItem

{

    CoreDAVHrefItem *_href;

    CoreDAVItemWithNoChildren *_inviteStatus;

    CoreDAVItemWithHrefChildItem *_hostURL;

    CoreDAVLeafItem *_inReplyTo;

    CoreDAVLeafItem *_summary;

    NSString *_firstName;

    NSString *_lastName;

    NSURL *_acceptedURL;

}



@property(retain) NSURL *acceptedURL; // @synthesize acceptedURL=_acceptedURL;

- (id)copyParseRules;

- (void)dealloc;

@property(retain) NSString *firstName; // @synthesize firstName=_firstName;

@property(retain) CoreDAVItemWithHrefChildItem *hostURL; // @synthesize hostURL=_hostURL;

@property(retain) CoreDAVHrefItem *href; // @synthesize href=_href;

@property(retain) CoreDAVLeafItem *inReplyTo; // @synthesize inReplyTo=_inReplyTo;

- (id)init;

@property(retain) CoreDAVItemWithNoChildren *inviteStatus; // @synthesize inviteStatus=_inviteStatus;

@property(retain) NSString *lastName; // @synthesize lastName=_lastName;

- (void)setAcceptedURLItem:(id)arg1;

- (void)setFirstNameItem:(id)arg1;

- (void)setLastNameItem:(id)arg1;

@property(retain) CoreDAVLeafItem *summary; // @synthesize summary=_summary;



@end


