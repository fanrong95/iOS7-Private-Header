/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSWPTextCommand.h"


__attribute__((visibility("hidden")))

@interface TSWPApplyChangesInRangeCommand : TSWPTextCommand

{

    _Bool _accept;

    _Bool _forceAll;

    struct _NSRange _range;

    struct _NSRange _selectionRange;

}



- (id).cxx_construct;

- (id)actionString;

- (void)doCommit;

- (id)initWithStorage:(id)arg1 range:(struct _NSRange)arg2 selectionRange:(struct _NSRange)arg3 accept:(_Bool)arg4 forceAll:(_Bool)arg5;

- (void)p_stopEditingFootnote;

- (int)persistenceKind;

- (void)redo;



@end


