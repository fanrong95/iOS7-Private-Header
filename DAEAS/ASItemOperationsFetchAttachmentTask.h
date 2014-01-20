/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "ASTask.h"


#import "ASFetchAttachmentTaskProtocol.h"



@class NSString;



@interface ASItemOperationsFetchAttachmentTask : ASTask <ASFetchAttachmentTaskProtocol>

{

    NSString *_messageServerID;

    NSString *_attachmentName;

}



- (id)attachmentName;

- (int)commandCode;

- (void)dealloc;

- (void)finishWithError:(id)arg1;

- (_Bool)getTopLevelToken:(char *)arg1 outStatusCodePage:(char *)arg2 outStatusToken:(char *)arg3;

- (int)handleStreamOperation:(int)arg1 forCodePage:(int)arg2 tag:(int)arg3 withParentItem:(id)arg4 withData:(char *)arg5 dataLength:(int)arg6;

- (id)initForMessageServerID:(id)arg1 andAttachmentName:(id)arg2;

- (id)messageID;

- (_Bool)processContext:(id)arg1;

- (id)requestBody;



@end


