/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MFBaseFilterDataConsumer.h"


@interface MFProgressFilterDataConsumer : MFBaseFilterDataConsumer

{

    unsigned long long _expectedSize;

    unsigned long long _currentBytes;

    id _progressBlock;

}



- (long long)appendData:(id)arg1;

- (void)dealloc;

@property(readonly) unsigned long long expectedSize; // @synthesize expectedSize=_expectedSize;

- (id)initWithConsumer:(id)arg1 expectedSize:(unsigned long long)arg2;

- (id)initWithConsumers:(id)arg1 expectedSize:(unsigned long long)arg2;

@property(copy, nonatomic) id progressBlock; // @synthesize progressBlock=_progressBlock;



@end


