/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "RTF_CMArchiveManager.h"


@class NSMutableDictionary, NSMutableString;



__attribute__((visibility("hidden")))

@interface RTF_CMProgressiveArchiveManager : RTF_CMArchiveManager

{

    const void *mClient;

    CDStruct_4e53fc95 *mCallBacks;

    NSMutableDictionary *mDataCache;

    NSMutableDictionary *mStyleCache;

    NSMutableString *mCssString;

    _Bool mMainDataInited;

    NSMutableString *mHtmlLogString;

}



- (id)addCssStyle:(id)arg1;

- (void)addCssStyle:(id)arg1 withName:(id)arg2;

- (void)closeResourceAtPath:(id)arg1;

- (void)commitDataAtPath:(id)arg1;

- (id)cssStylesheetString;

- (void)dealloc;

- (id)initWithClient:(const void *)arg1 andCallBacks:(CDStruct_4e53fc95 *)arg2;

- (_Bool)isProgressive;

- (id)newResourceWithName:(id)arg1;

- (void)pushCssToPath:(id)arg1;

- (void)pushData:(id)arg1 toPath:(id)arg2;

- (void)pushText:(id)arg1 toPath:(id)arg2;



@end


