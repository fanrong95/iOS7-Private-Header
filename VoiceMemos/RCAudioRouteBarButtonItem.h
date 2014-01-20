/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIBarButtonItem.h"



@class UIButton, UIColor, UIView;



@interface RCAudioRouteBarButtonItem : UIBarButtonItem

{

    UIView *_contentView;

    UIButton *_button;

    UIColor *_toggleSpeakerSpeakerRouteChosenColor;

    UIColor *_toggleSpeakerOtherRouteChosenColor;

}



+ (id)newAudioRouteItem;

- (void).cxx_destruct;

- (void)_audioRouteControllerAvailableRoutesMaskDidChangeNotification:(id)arg1;

- (void)_audioRouteControllerPickedRouteDidChangeNotification:(id)arg1;

- (void)_showAvailableRoutesAction;

- (void)_toggleSpeakerAction;

- (void)_updateButton;

- (void)dealloc;

- (id)initAudioRouteItem;



@end


