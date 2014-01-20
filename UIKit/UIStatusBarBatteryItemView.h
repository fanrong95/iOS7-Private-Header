/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIStatusBarItemView.h"


@class UIView;



__attribute__((visibility("hidden")))

@interface UIStatusBarBatteryItemView : UIStatusBarItemView

{

    int _capacity;

    int _state;

    UIView *_accessoryView;

}



- (id)_accessoryImage;

- (double)_batteryYOffsetWithBackground:(id)arg1;

- (_Bool)_needsAccessoryImage;

- (void)_updateAccessoryImage;

- (id)contentsImage;

- (void)dealloc;

- (double)extraRightPadding;

- (double)legibilityStrength;

- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;



@end


