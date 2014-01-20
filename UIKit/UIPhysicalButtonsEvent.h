/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIInternalEvent.h"


@class NSMutableSet, _UIPhysicalButton;



__attribute__((visibility("hidden")))

@interface UIPhysicalButtonsEvent : UIInternalEvent

{

    NSMutableSet *_allPhysicalButtons;

    _UIPhysicalButton *_triggeringPhysicalButton;

}



- (void)_addPhysicalButton:(id)arg1;

- (id)_allPhysicalButtons;

- (id)_gestureRecognizersForWindow:(id)arg1;

- (id)_init;

- (id)_physicalButtonsForGestureRecognizer:(id)arg1;

- (id)_physicalButtonsForGestureRecognizer:(id)arg1 withPhase:(long long)arg2;

- (id)_physicalButtonsForResponder:(id)arg1;

- (id)_physicalButtonsForResponder:(id)arg1 withPhase:(long long)arg2;

- (id)_physicalButtonsForWindow:(id)arg1;

- (void)_removePhysicalButton:(id)arg1;

- (id)_respondersForWindow:(id)arg1;

@property(retain, nonatomic) _UIPhysicalButton *_triggeringPhysicalButton; // @synthesize _triggeringPhysicalButton;

- (id)_windows;

- (void)dealloc;



@end


