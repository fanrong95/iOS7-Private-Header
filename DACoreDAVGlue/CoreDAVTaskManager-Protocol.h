/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSRunLoop;



@protocol CoreDAVTaskManager <NSObject>

- (void)coreDAVTaskDidFinish:(id)arg1;

- (void)coreDAVTaskEndModal:(id)arg1;

- (void)coreDAVTaskRequestModal:(id)arg1;

@property(retain) NSRunLoop *workRunLoop;

- (void)shutdown;

- (void)submitIndependentCoreDAVTask:(id)arg1;

- (void)submitQueuedCoreDAVTask:(id)arg1;

@end


