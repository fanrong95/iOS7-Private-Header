/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "_NSUndoObject.h"


__attribute__((visibility("hidden")))

@interface _NSUndoBeginMark : _NSUndoObject

{

    id _groupIdentifier;

    _Bool _isDiscardable;

}



- (void)dealloc;

- (id)description;

- (id)groupIdentifier;

- (_Bool)isBeginMark;

- (_Bool)isDiscardable;

- (void)setDiscardable:(_Bool)arg1;

- (void)setGroupIdentifier:(id)arg1;



@end


