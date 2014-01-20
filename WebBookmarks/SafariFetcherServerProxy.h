/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "WebBookmarksXPCConnectionDelegate.h"



@class WebBookmarksXPCConnection;



@interface SafariFetcherServerProxy : NSObject <WebBookmarksXPCConnectionDelegate>

{

    WebBookmarksXPCConnection *_connection;

    id <WebBookmarksClientDelegateProtocol> _delegate;

}



- (void)_clearConnection;

- (void)clearAllReadingListArchives;

- (void)clearReadingListArchiveWithUUID:(id)arg1;

- (void)connection:(id)arg1 didCloseWithError:(id)arg2;

- (void)dealloc;

@property(nonatomic) id <WebBookmarksClientDelegateProtocol> delegate; // @synthesize delegate=_delegate;

- (void)didFinishFetching;

- (void)didStartFetchingReadingListItemWithMessage:(id)arg1;

- (void)didStopFetchingReadingListItemWithMessage:(id)arg1;

- (void)didUpdateProgressWithMessage:(id)arg1;

- (id)init;

- (void)invalidate;

- (void)startReadingListFetcher;



@end


