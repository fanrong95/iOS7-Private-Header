/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableDictionary;



@interface DTXMessageParser : NSObject

{

    const char *_parsingBuffer;

    unsigned long long _parsingBufferUsed;

    unsigned long long _parsingBufferSize;

    struct dispatch_queue_s *_parsingQueue;

    NSMutableDictionary *_fragmentedBuffersByIdentifier;

    struct dispatch_semaphore_s *_hasMoreDataSem;

    struct dispatch_semaphore_s *_wantsMoreDataSem;

    unsigned long long _desiredSize;

    _Bool _eof;

}



- (void)dealloc;

- (id)initWithMessageHandler:(id)arg1;

- (void)parseIncomingBytes:(const char *)arg1 length:(unsigned long long)arg2;

- (id)parseMessage;

- (void)parsingComplete;

- (const void *)waitForMoreData:(unsigned long long)arg1 incrementalBuffer:(const void **)arg2;



@end


