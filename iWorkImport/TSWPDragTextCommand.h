/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSWPTextCommand.h"


__attribute__((visibility("hidden")))

@interface TSWPDragTextCommand : TSWPTextCommand

{

    unsigned long long _dropCharIndex;

    struct _NSRange _dragRange;

    _Bool _coalescing;

}



- (id).cxx_construct;

- (_Bool)canCoalesceWithCommand:(id)arg1;

- (void)coalesceWithCommand:(id)arg1;

@property(nonatomic) _Bool coalescing; // @synthesize coalescing=_coalescing;

- (void)doCommit;

- (id)initWithStorage:(id)arg1 srcSelection:(id)arg2 dropLocation:(unsigned long long)arg3;

- (int)persistenceKind;

- (void)setSelection:(id)arg1 onStorage:(id)arg2 withFlags:(unsigned long long)arg3;



@end


