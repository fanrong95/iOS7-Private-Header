/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSURL.h"



#import "TSUDownloadItem.h"



@class NSString;



@interface NSURL (DownloadItem) <TSUDownloadItem>

+ (_Bool)canHandleDownloadTask:(id)arg1;

+ (void)downloadManager:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;

+ (void)downloadManager:(id)arg1 task:(id)arg2 didFinishDownloadingToURL:(id)arg3;

@property(readonly, nonatomic) NSString *downloadTaskDescription;

@property(readonly, nonatomic) NSURL *downloadURL;

@property(readonly, nonatomic) long long totalBytesExpectedToBeDownloaded;



// Remaining properties

@property(readonly, nonatomic) _Bool needsDownload;

@end


