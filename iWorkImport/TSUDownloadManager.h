/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSURLSessionDownloadDelegate.h"



@class NSHashTable, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSOperationQueue, NSURL, NSURLSession;



__attribute__((visibility("hidden")))

@interface TSUDownloadManager : NSObject <NSURLSessionDownloadDelegate>

{

    NSOperationQueue *_downloadSessionsQueue;

    NSHashTable *_downloadSessions;

    NSObject<OS_dispatch_queue> *_activeTasksQueue;

    NSMutableDictionary *_activeTasks;

    NSMutableDictionary *_inProgressDownloadItems;

    NSMutableArray *_inProcessDownloadQueue;

    NSMutableArray *_completionHandlers;

    NSURLSession *_defaultURLSession;

}



+ (_Bool)isUnitTest;

+ (id)newFilteredDownloadItems:(id)arg1;

+ (void)registerDownloadItemClass:(Class)arg1;

+ (id)sharedManager;

+ (void)wakeUp;

- (void).cxx_destruct;

- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;

- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;

- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4;

- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;

- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;

- (_Bool)beginDownloadTaskForDownloadItem:(id)arg1 isInProcessDownloadTask:(_Bool)arg2 taskDescription:(id)arg3 urlOrNil:(id)arg4;

- (void)cancelTasksWithDescriptions:(id)arg1 forDownloadSession:(id)arg2;

@property(readonly, nonatomic) NSURL *downloadInboxDirectory;

- (id)downloadItems:(id)arg1 description:(id)arg2 delegate:(id)arg3;

- (id)downloadSessionForItems:(id)arg1 description:(id)arg2 willRequestDownload:(_Bool)arg3 delegate:(id)arg4 taskHandler:(id)arg5;

- (void)handleEventsForBackgroundURLSession:(id)arg1 completionHandler:(id)arg2;

- (id)init;

- (id)initPrivate;

- (void)notifyWhenAllTasksAreCompletedWithCompletionHandler:(id)arg1;

- (id)outstandingDownloadSessionForItems:(id)arg1 description:(id)arg2 delegate:(id)arg3;



@end


