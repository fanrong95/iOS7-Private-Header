/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "EKReminderEditItem.h"


@interface EKReminderChangeVisibilityEditItem : EKReminderEditItem

{

    int _visibilityToCommit;

}



- (void)addStylingToCell:(id)arg1 forSubitemAtIndex:(unsigned long long)arg2 inSubsection:(unsigned long long)arg3;

- (id)cellForSubitemAtIndex:(unsigned long long)arg1 inSubsection:(unsigned long long)arg2;

- (void)editor:(id)arg1 didSelectSubitem:(unsigned long long)arg2 inSubsection:(unsigned long long)arg3;

- (_Bool)editor:(id)arg1 shouldClearSelectionFromSubitem:(unsigned long long)arg2 inSubsection:(unsigned long long)arg3;

- (_Bool)shouldAppearWithVisibility:(int)arg1;

- (_Bool)usesDetailViewControllerForSubitem:(unsigned long long)arg1 inSubsection:(unsigned long long)arg2;

@property(readonly, nonatomic) int visibilityToCommit;



@end


