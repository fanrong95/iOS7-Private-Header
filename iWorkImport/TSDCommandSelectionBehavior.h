/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSKCommandSelectionBehavior.h"


@class NSObject<TSDCanvasEditor>, TSKDocumentRoot, TSPObject<TSKArchivedSelection>, TSPObject<TSKModel>;



__attribute__((visibility("hidden")))

@interface TSDCommandSelectionBehavior : TSKCommandSelectionBehavior

{

    TSPObject<TSKArchivedSelection> *mArchivedOldCanvasSelection;

    TSPObject<TSKArchivedSelection> *mArchivedNewCanvasSelection;

    TSPObject<TSKModel> *mModelForSelection;

    TSKDocumentRoot *mDocumentRootForSelection;

    int mType;

    NSObject<TSDCanvasEditor> *mCanvasEditor;

    unsigned long long mSelectionFlags;

}



@property(readonly, nonatomic) NSObject<TSDCanvasEditor> *canvasEditor; // @synthesize canvasEditor=mCanvasEditor;

- (void)dealloc;

- (id)destructiveSelectionChangeForSelection:(id)arg1;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithCanvasEditor:(id)arg1;

- (id)initWithCanvasEditor:(id)arg1 type:(int)arg2;

- (id)initWithCanvasEditor:(id)arg1 type:(int)arg2 canvasSelection:(id)arg3;

- (id)initWithCanvasEditor:(id)arg1 type:(int)arg2 canvasSelection:(id)arg3 selectionFlags:(unsigned long long)arg4;

- (id)initWithCanvasEditor:(id)arg1 type:(int)arg2 constructedInfos:(id)arg3;

- (void)loadFromArchive:(const struct CommandSelectionBehaviorArchive *)arg1 unarchiver:(id)arg2;

@property(readonly, nonatomic) TSPObject<TSKModel> *modelForSelection;

- (void)p_adjustCommentVisibilityWhenNecessary;

- (void)p_registerSelectionChange:(id)arg1 withSelectionFlags:(unsigned long long)arg2;

- (void)p_registerSelectionInvalidation:(id)arg1;

- (void)registerSelectionChangesForCommit;

- (void)registerSelectionChangesForRedo;

- (void)registerSelectionChangesForUndo;

- (void)saveToArchive:(struct CommandSelectionBehaviorArchive *)arg1 archiver:(id)arg2;

- (void)saveToArchiver:(id)arg1;



@end


