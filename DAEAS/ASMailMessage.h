/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "DAMailMessage.h"



@class ASEmailItem;



@interface ASMailMessage : DAMailMessage

{

    ASEmailItem *_ASEmailItem;

}



- (id)attachments;

- (id)body;

- (int)bodySize;

- (int)bodyTruncated;

- (id)cc;

- (id)conversationId;

- (id)conversationIndex;

- (id)date;

- (void)dealloc;

- (id)description;

- (id)displayTo;

- (void)encodeWithCoder:(id)arg1;

- (_Bool)flagged;

- (_Bool)flaggedIsSet;

- (id)folderID;

- (id)from;

- (int)importance;

- (id)initWithASEmailItem:(id)arg1;

- (id)initWithCoder:(id)arg1;

- (int)lastVerb;

- (id)longID;

- (_Bool)meetingRequestIsActionable;

- (id)meetingRequestMetaData;

- (id)meetingRequestUUID;

- (id)messageClass;

- (_Bool)read;

- (_Bool)readIsSet;

- (id)remoteID;

- (id)replyTo;

- (id)rfc822Data;

- (int)smimeType;

- (id)subject;

- (id)threadTopic;

- (id)to;

- (_Bool)verbIsSet;



@end


