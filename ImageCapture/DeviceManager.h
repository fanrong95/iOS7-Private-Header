/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "ICDeviceManagerProtocol.h"



@class DeviceManagerThread, NSDictionary, NSMutableDictionary;



@interface DeviceManager : NSObject <ICDeviceManagerProtocol>

{

    DeviceManagerThread *_thread;

    NSDictionary *_deviceMatchingInfo;

    NSMutableDictionary *_devices;

}



- (int)closeDevice:(id)arg1 contextInfo:(void *)arg2;

- (void)closeDeviceImp:(id)arg1;

- (int)closeSession:(id)arg1 contextInfo:(void *)arg2;

- (void)closeSessionImp:(id)arg1;

- (void)dealloc;

- (int)deleteFile:(id)arg1 fromDevice:(id)arg2 contextInfo:(void *)arg3;

- (void)deleteFileImp:(id)arg1;

- (int)downloadFile:(id)arg1 fromDevice:(id)arg2 options:(id)arg3 contextInfo:(void *)arg4;

- (void)downloadFileImp:(id)arg1;

- (int)eject:(id)arg1;

- (void)ejectImp:(id)arg1;

- (int)getMetadataOfFile:(id)arg1 fromDevice:(id)arg2 contextInfo:(void *)arg3;

- (void)getMetadataOfFileImp:(id)arg1;

- (int)getThumbnailOfFile:(id)arg1 fromDevice:(id)arg2 contextInfo:(void *)arg3;

- (void)getThumbnailOfFileImp:(id)arg1;

- (id)init;

- (int)openDevice:(id)arg1 contextInfo:(void *)arg2;

- (void)openDeviceImp:(id)arg1;

- (int)openSession:(id)arg1 contextInfo:(void *)arg2;

- (void)openSessionImp:(id)arg1;

- (void)postCommandCompletionNotification:(id)arg1;

- (void)postNotification:(id)arg1;

- (void)startRunning;

- (void)stopRunning;

- (int)syncClock:(id)arg1 contextInfo:(void *)arg2;

- (void)syncClockImp:(id)arg1;



@end


