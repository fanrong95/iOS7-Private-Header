/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "TSPComponentWriteChannel.h"



@class NSError, NSObject<OS_dispatch_queue>;



__attribute__((visibility("hidden")))

@interface TSPIOHandlerWriteChannelAdapter : NSObject <TSPComponentWriteChannel>

{

    NSObject<OS_dispatch_queue> *_queue;

    id _handler;

    NSError *_error;

}



- (void).cxx_destruct;

- (void)close;

- (id)initWithQueue:(id)arg1 handler:(id)arg2;

- (void)setError:(id)arg1;

- (void)writeData:(id)arg1;



@end


