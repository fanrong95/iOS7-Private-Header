/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSPObject.h"


#import "TSKCommandHistoryDelegate.h"



@class NSString, TSKCommandHistory, TSKCommandSelectionBehaviorHistory, TSPLazyReference;



__attribute__((visibility("hidden")))

@interface TSKDocumentSupport : TSPObject <TSKCommandHistoryDelegate>

{

    TSPLazyReference *_commandHistoryReference;

    TSPLazyReference *_commandSelectionBehaviorHistoryReference;

    TSPObject *_webState;

    unsigned long long _cachedUndoCount;

    unsigned long long _cachedRedoCount;

    NSString *_cachedUndoActionString;

    NSString *_cachedRedoActionString;

}



@property(readonly, nonatomic) NSString *cachedRedoActionString; // @synthesize cachedRedoActionString=_cachedRedoActionString;

@property(readonly, nonatomic) unsigned long long cachedRedoCount; // @synthesize cachedRedoCount=_cachedRedoCount;

@property(readonly, nonatomic) NSString *cachedUndoActionString; // @synthesize cachedUndoActionString=_cachedUndoActionString;

@property(readonly, nonatomic) unsigned long long cachedUndoCount; // @synthesize cachedUndoCount=_cachedUndoCount;

- (void)clearCommandHistory;

@property(readonly, nonatomic) TSKCommandHistory *commandHistory;

- (void)commandHistoryChanged:(id)arg1;

@property(readonly, nonatomic) TSKCommandSelectionBehaviorHistory *commandSelectionBehaviorHistory;

- (void)dealloc;

- (void)didLoadCommandHistory:(id)arg1;

- (void)documentWasSaved;

@property(readonly, nonatomic) _Bool hasCommands;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithContext:(id)arg1;

@property(readonly, nonatomic) _Bool isDocumentEditedSinceLastSave;

- (id)newCommandHistoryReference;

- (id)newCommandSelectionBehaviorHistoryReference;

- (void)saveToArchiver:(id)arg1;

@property(retain, nonatomic) TSPObject *webState; // @synthesize webState=_webState;



@end


