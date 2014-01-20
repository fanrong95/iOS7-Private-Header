/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSWPTextBaseCommand.h"


@class TSKAddedToDocumentContext, TSWPAttachment, TSWPSelection, TSWPStorage;



__attribute__((visibility("hidden")))

@interface TSWPInsertAttachmentCommand : TSWPTextBaseCommand

{

    TSWPStorage *_storage;

    TSWPSelection *_selection;

    TSWPAttachment *_attachment;

    TSKAddedToDocumentContext *_dolcContext;

    struct TSWPStorageTransaction *_undoRedoTransaction;

    struct _NSRange _redoRestoreRange;

}



- (id).cxx_construct;

- (id)actionString;

- (void)commit;

- (void)dealloc;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithStorage:(id)arg1 selection:(id)arg2 attachment:(id)arg3 dolcContext:(id)arg4;

- (void)loadFromArchive:(const struct InsertAttachmentCommandArchive *)arg1 unarchiver:(id)arg2;

- (void)p_invalidateRange:(struct _NSRange)arg1;

- (void)p_invalidateSelection:(id)arg1;

- (_Bool)process;

- (void)redo;

- (void)saveToArchive:(struct InsertAttachmentCommandArchive *)arg1 archiver:(id)arg2;

- (void)saveToArchiver:(id)arg1;

- (_Bool)shouldRunSynchronously;

@property(readonly, nonatomic) TSWPStorage *storage;

- (void)undo;

- (struct _NSRange)undoRedo;



@end


