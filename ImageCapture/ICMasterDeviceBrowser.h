/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableArray;



@interface ICMasterDeviceBrowser : NSObject

{

    NSMutableArray *_devices;

    NSMutableArray *_browsers;

    long long _numberOfBrowsingBrowsers;

    id _msDevManager;

    id _ptpDevManager;

    id _exFATManager;

}



+ (id)defaultBrowser;

+ (_Bool)exists;

- (void)addBrowser:(id)arg1;

- (int)addExFATCamera:(id)arg1;

- (int)addMSCamera:(id)arg1;

- (int)addPTPCamera:(id)arg1;

@property(readonly) NSMutableArray *browsers; // @synthesize browsers=_browsers;

- (void)dealloc;

- (id)deviceWithDelegate:(id)arg1;

@property(readonly) NSMutableArray *devices; // @synthesize devices=_devices;

- (void)finalize;

- (void)handleCommandCompletionNotification:(id)arg1;

- (void)handleImageCaptureEventNotification:(id)arg1;

- (void)informBrowserDelegateUsingSelector:(SEL)arg1 withObject:(id)arg2;

- (id)init;

- (void)removeBrowser:(id)arg1;

- (void)removeMSCamera:(id)arg1;

- (void)removePTPCamera:(id)arg1;

- (int)start:(id)arg1;

- (void)stop:(id)arg1;



@end


