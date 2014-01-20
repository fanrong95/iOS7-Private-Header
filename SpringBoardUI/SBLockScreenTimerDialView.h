/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



#import "SBLegibility.h"



@class _UILegibilityView;



@interface SBLockScreenTimerDialView : UIView <SBLegibility>

{

    _UILegibilityView *_dialView;

    double _strength;

}



- (id)_newDialViewForSettings:(id)arg1;

- (void)dealloc;

- (id)initWithFrame:(struct CGRect)arg1;

@property(nonatomic) double strength; // @synthesize strength=_strength;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

- (void)updateForChangedSettings:(id)arg1;



@end

