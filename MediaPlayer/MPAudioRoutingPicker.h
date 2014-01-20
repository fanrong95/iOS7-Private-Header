/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIAlertView.h"



#import "MPAudioDeviceControllerDelegate.h"

#import "UITableViewDataSource.h"

#import "UITableViewDelegate.h"



@class MPAudioDeviceController, NSArray;



@interface MPAudioRoutingPicker : UIAlertView <MPAudioDeviceControllerDelegate, UITableViewDataSource, UITableViewDelegate>

{

    MPAudioDeviceController *_audioDeviceController;

    _Bool _ignoringInteractionEvents;

    NSArray *_routes;

}



- (void).cxx_destruct;

- (_Bool)_pickRouteAtIndex:(unsigned long long)arg1 withPassword:(id)arg2;

- (void)audioDeviceControllerAudioRoutesChanged:(id)arg1;

- (void)dealloc;

- (id)initWithAVPlayer:(id)arg1;

- (_Bool)requiresPortraitOrientation;

- (void)setAVPlayer:(id)arg1;

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;

- (void)willMoveToSuperview:(id)arg1;



@end


