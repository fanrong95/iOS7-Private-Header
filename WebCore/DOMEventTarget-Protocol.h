/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSCopying.h"



@protocol DOMEventTarget <NSObject, NSCopying>

- (void)addEventListener:(id)arg1:(id)arg2:(_Bool)arg3;

- (void)addEventListener:(id)arg1 listener:(id)arg2 useCapture:(_Bool)arg3;

- (_Bool)dispatchEvent:(id)arg1;

- (void)removeEventListener:(id)arg1:(id)arg2:(_Bool)arg3;

- (void)removeEventListener:(id)arg1 listener:(id)arg2 useCapture:(_Bool)arg3;

@end


