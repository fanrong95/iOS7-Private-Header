/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "DOMUIEvent.h"


@class DOMTouchList;



@interface DOMTouchEvent : DOMUIEvent

{

}



@property(readonly) _Bool altKey;

@property(readonly) DOMTouchList *changedTouches;

@property(readonly) _Bool ctrlKey;

- (void)initTouchEvent:(id)arg1 canBubble:(_Bool)arg2 cancelable:(_Bool)arg3 view:(id)arg4 detail:(int)arg5 screenX:(int)arg6 screenY:(int)arg7 clientX:(int)arg8 clientY:(int)arg9 ctrlKey:(_Bool)arg10 altKey:(_Bool)arg11 shiftKey:(_Bool)arg12 metaKey:(_Bool)arg13 touches:(id)arg14 targetTouches:(id)arg15 changedTouches:(id)arg16 scale:(float)arg17 rotation:(float)arg18;

@property(readonly) _Bool metaKey;

@property(readonly) float rotation;

@property(readonly) float scale;

@property(readonly) _Bool shiftKey;

@property(readonly) DOMTouchList *targetTouches;

@property(readonly) DOMTouchList *touches;



@end


