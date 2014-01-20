/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSKCommand.h"


@class TSPObject<TSSPreset>, TSSTheme;



__attribute__((visibility("hidden")))

@interface TSSThemeMovePresetCommand : TSKCommand

{

    TSSTheme *mTheme;

    TSPObject<TSSPreset> *mPreset;

    unsigned long long mOldIndex;

    unsigned long long mNewIndex;

}



- (void)commit;

- (void)dealloc;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithTheme:(id)arg1 preset:(id)arg2 index:(unsigned long long)arg3;

- (void)p_movePresetToFinalIndex:(unsigned long long)arg1;

- (_Bool)process;

- (void)redo;

- (void)saveToArchiver:(id)arg1;

- (void)undo;



@end


