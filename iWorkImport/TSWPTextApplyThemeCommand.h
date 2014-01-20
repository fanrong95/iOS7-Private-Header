/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSSApplyThemeChildCommand.h"


@class TSWPStorage;



__attribute__((visibility("hidden")))

@interface TSWPTextApplyThemeCommand : TSSApplyThemeChildCommand

{

    TSWPStorage *_storage;

    struct TSWPStorageTransaction *_undoRedoTransaction;

}



- (void)commit;

- (void)dealloc;

- (id)description;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithStorage:(id)arg1 parent:(id)arg2;

- (void)loadFromArchive:(const struct TextApplyThemeCommandArchive *)arg1 unarchiver:(id)arg2;

- (_Bool)process;

- (void)redo;

- (void)saveToArchive:(struct TextApplyThemeCommandArchive *)arg1 archiver:(id)arg2;

- (void)saveToArchiver:(id)arg1;

- (_Bool)shouldRunSynchronously;

- (void)undo;

- (void)undoRedo;



@end


