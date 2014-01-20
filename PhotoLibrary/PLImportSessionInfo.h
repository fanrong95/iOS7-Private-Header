/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSIndexSet, NSMutableIndexSet;



@interface PLImportSessionInfo : NSObject

{

    _Bool _importComplete;

    _Bool _importStopped;

    _Bool _importingSelection;

    NSMutableIndexSet *_importIndexes;

    NSMutableIndexSet *_importInProgressIndexes;

    NSMutableIndexSet *_importErrorIndexes;

    NSMutableIndexSet *_importCompleteIndexes;

}



- (_Bool)_isImportCompleteForIndex:(unsigned long long)arg1;

- (void)addIndexToImport:(unsigned long long)arg1;

- (void)beginImportForIndex:(unsigned long long)arg1;

- (void)completeImportForIndex:(unsigned long long)arg1 error:(_Bool)arg2;

@property(readonly, nonatomic) NSIndexSet *completedIndexes; // @synthesize completedIndexes=_importCompleteIndexes;

- (void)dealloc;

@property(readonly, nonatomic) NSIndexSet *errorIndexes; // @synthesize errorIndexes=_importErrorIndexes;

@property(nonatomic) _Bool importComplete; // @synthesize importComplete=_importComplete;

@property(readonly, nonatomic) NSIndexSet *importIndexes; // @synthesize importIndexes=_importIndexes;

@property(nonatomic) _Bool importStopped; // @synthesize importStopped=_importStopped;

@property(nonatomic) _Bool importingSelection; // @synthesize importingSelection=_importingSelection;

@property(readonly, nonatomic) NSIndexSet *inProgressIndexes; // @synthesize inProgressIndexes=_importInProgressIndexes;

- (id)initWithImportIndexes:(id)arg1;

- (void)removeIndex:(unsigned long long)arg1;

- (void)shiftIndexesStartingAtIndex:(unsigned long long)arg1 by:(unsigned long long)arg2;



@end


