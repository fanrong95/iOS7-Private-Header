/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "TSUStreamReadChannel.h"



@class NSObject<OS_dispatch_queue>, SFUDataRepresentation;



__attribute__((visibility("hidden")))

@interface TSPDataRepReadChannel : NSObject <TSUStreamReadChannel>

{

    SFUDataRepresentation *_representation;

    id <SFUInputStream> _inputStream;

    NSObject<OS_dispatch_queue> *_readQueue;

}



- (void).cxx_destruct;

- (void)close;

- (void)dealloc;

- (id)initWithRepresentation:(id)arg1;

- (void)readWithQueue:(id)arg1 handler:(id)arg2;



@end

