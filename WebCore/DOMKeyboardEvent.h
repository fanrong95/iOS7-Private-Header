/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "DOMUIEvent.h"


@class NSString;



@interface DOMKeyboardEvent : DOMUIEvent

{

}



@property(readonly) _Bool altGraphKey;

@property(readonly) _Bool altKey;

@property(readonly) int charCode;

@property(readonly) _Bool ctrlKey;

- (_Bool)getModifierState:(id)arg1;

- (void)initKeyboardEvent:(id)arg1 canBubble:(_Bool)arg2 cancelable:(_Bool)arg3 view:(id)arg4 keyIdentifier:(id)arg5 keyLocation:(unsigned int)arg6 ctrlKey:(_Bool)arg7 altKey:(_Bool)arg8 shiftKey:(_Bool)arg9 metaKey:(_Bool)arg10;

- (void)initKeyboardEvent:(id)arg1 canBubble:(_Bool)arg2 cancelable:(_Bool)arg3 view:(id)arg4 keyIdentifier:(id)arg5 keyLocation:(unsigned int)arg6 ctrlKey:(_Bool)arg7 altKey:(_Bool)arg8 shiftKey:(_Bool)arg9 metaKey:(_Bool)arg10 altGraphKey:(_Bool)arg11;

@property(readonly) int keyCode;

@property(readonly) NSString *keyIdentifier;

@property(readonly) unsigned int keyLocation;

@property(readonly) _Bool metaKey;

@property(readonly) _Bool shiftKey;



@end


