/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSPipe.h"


@class NSFileHandle;



__attribute__((visibility("hidden")))

@interface NSConcretePipe : NSPipe

{

    NSFileHandle *_readHandle;

    NSFileHandle *_writeHandle;

}



- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)fileHandleForReading;

- (id)fileHandleForWriting;

- (id)init;



@end


