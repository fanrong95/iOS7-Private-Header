/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSLocking.h"



@class NSString;



@interface CPExclusiveLock : NSObject <NSLocking>

{

    int _fd;

    NSString *_name;

}



- (void)dealloc;

- (id)init;

- (id)initWithName:(id)arg1;

- (void)lock;

- (id)name;

- (void)setName:(id)arg1;

- (_Bool)tryLock;

- (void)unlock;



@end

