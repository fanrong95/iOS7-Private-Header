/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIKeyboardCandidateView_iPhone.h"


#import "UIKeyboardCandidateViewInline.h"



__attribute__((visibility("hidden")))

@interface UIKeyboardCandidateView_iPhone_Floating : UIKeyboardCandidateView_iPhone <UIKeyboardCandidateViewInline>

{

    struct CGRect _collapsedRect;

    _Bool _withKeyboard;

}



- (void)_collapse:(id)arg1;

- (unsigned long long)_numberOfColumns:(_Bool)arg1;

- (_Bool)_shouldShowHideKeyboard;

- (_Bool)_shouldUseFullMetrics;

- (id)activeCandidateList;

- (void)candidatesDidChange;

- (id)initWithFrame:(struct CGRect)arg1;

- (void)setCandidateViewExtended:(_Bool)arg1;



@end


