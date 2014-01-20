/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSWPTextBaseCommand.h"


@class NSString, TSWPChangeSession, TSWPRubyField, TSWPStorage;



__attribute__((visibility("hidden")))

@interface TSWPModifyRubyTextCommand : TSWPTextBaseCommand

{

    TSWPRubyField *_rubyField;

    NSString *_rubyText;

    NSString *_baseText;

    unsigned long long _uiSessionID;

    TSWPChangeSession *_changeSession;

    NSString *_language;

    struct TSWPStorageTransaction *_undoRedoTransaction;

}



+ (struct _NSRange)p_modifyRubyField:(id)arg1 baseText:(id)arg2 changeSession:(id)arg3 language:(id)arg4 undoTransaction:(struct TSWPStorageTransaction *)arg5;

- (_Bool)canCoalesceWithCommand:(id)arg1;

- (void)coalesceWithCommand:(id)arg1;

- (void)commit;

- (void)dealloc;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithRubyField:(id)arg1 baseText:(id)arg2 rubyText:(id)arg3 rubyUISession:(unsigned long long)arg4 changeSession:(id)arg5 language:(id)arg6;

- (id)initWithRubyField:(id)arg1 baseText:(id)arg2 rubyText:(id)arg3 rubyUISession:(unsigned long long)arg4 language:(id)arg5;

- (void)loadFromArchive:(const struct ModifyRubyTextCommandArchive *)arg1 unarchiver:(id)arg2;

- (void)p_swapRubyTexts;

- (void)p_undoRedo;

- (_Bool)process;

- (void)redo;

- (void)saveToArchive:(struct ModifyRubyTextCommandArchive *)arg1 archiver:(id)arg2;

- (void)saveToArchiver:(id)arg1;

@property(readonly, nonatomic) TSWPStorage *storage;

- (void)undo;



@end


