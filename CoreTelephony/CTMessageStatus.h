/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface CTMessageStatus : NSObject

{

    unsigned int _messageId;

    int _messageType;

    int _result;

}



- (id)initWithMessageId:(unsigned int)arg1 messageType:(int)arg2 result:(int)arg3;

@property(readonly) unsigned int messageId; // @synthesize messageId=_messageId;

@property(readonly) int messageType; // @synthesize messageType=_messageType;

@property(readonly) int result; // @synthesize result=_result;



@end


