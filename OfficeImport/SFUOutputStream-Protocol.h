/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SFUSimpleOutputStream.h"



@protocol SFUOutputStream <SFUSimpleOutputStream>

- (_Bool)canCreateInputStream;

- (_Bool)canSeek;

- (void)close;

- (id)closeLocalStream;

- (id)inputStream;

- (long long)offset;

- (void)seekToOffset:(long long)arg1 whence:(int)arg2;

@end


