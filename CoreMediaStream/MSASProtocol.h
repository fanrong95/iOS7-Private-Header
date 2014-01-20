/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSURLConnectionDelegate.h"



@class MSASPConnectionGate, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSString, NSURL;



@interface MSASProtocol : NSObject <NSURLConnectionDelegate>

{

    _Bool _isShuttingDown;

    MSASPConnectionGate *_gate;

    NSObject<OS_dispatch_queue> *_pendingConnectionsQueue;

    NSObject<OS_dispatch_group> *_pendingConnectionsGroup;

    NSString *_personID;

    NSURL *_baseURL;

    NSString *_serverSideConfigVersion;

    NSString *_headerVersion;

    NSObject<OS_dispatch_queue> *_workQueue;

    NSObject<OS_dispatch_queue> *_memberQueue;

}



- (void).cxx_destruct;

- (id)HTTPErrorWithStatusCode:(long long)arg1;

- (id)_addCommentURLWithBaseURL:(id)arg1;

- (id)_albumStateURL;

- (id)_albumSummaryURLWithBaseURL:(id)arg1;

- (id)_couldNotReauthorizeError;

- (id)_createAlbumURL;

- (id)_deleteAssetsURLWithBaseURL:(id)arg1;

- (id)_deleteCommentURLWithBaseURL:(id)arg1;

- (id)_deleteURLWithBaseURL:(id)arg1;

- (id)_enableMultipleContributorsURLWithBaseURL:(id)arg1;

- (id)_enablePublicAccessURLWithBaseURL:(id)arg1;

- (id)_getAlbumURL;

- (id)_getAssetsURLWithBaseURL:(id)arg1;

- (id)_getChangesURL;

- (id)_getCommentsURLWithBaseURL:(id)arg1;

- (id)_getTokensURLWithBaseURL:(id)arg1;

- (id)_getUploadTokensURLWithBaseURL:(id)arg1;

- (id)_getVideoURLWithBaseURL:(id)arg1;

- (id)_putAssetsURLWithBaseURL:(id)arg1;

- (id)_serverSideConfigURL;

- (id)_setAlbumStateURL;

- (id)_setAssetStateURL;

- (id)_setCommentPositionURL;

- (id)_shareURL;

- (id)_sharingInfoURLWithBaseURL:(id)arg1;

- (id)_subscribeURL;

- (id)_unshareURL;

- (id)_unsubscribeURL;

- (id)_updateAlbumURLWithBaseURL:(id)arg1;

- (id)_uploadCompleteURLWithBaseURL:(id)arg1;

- (void)acceptInvitationWithToken:(id)arg1 completionBlock:(id)arg2;

- (void)addComment:(id)arg1 toAssetCollection:(id)arg2 inAlbum:(id)arg3 albumURLString:(id)arg4 completionBlock:(id)arg5;

- (void)addSharingRelationships:(id)arg1 toAlbum:(id)arg2 completionBlock:(id)arg3;

- (void)albumSummaryAlbum:(id)arg1 albumURLString:(id)arg2 resetSync:(_Bool)arg3 completionBlock:(id)arg4;

@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;

- (void)createAlbum:(id)arg1 completionBlock:(id)arg2;

- (void)dealloc;

- (void)deleteAlbum:(id)arg1 completionBlock:(id)arg2;

- (void)deleteAssetCollections:(id)arg1 inAlbum:(id)arg2 completionBlock:(id)arg3;

- (void)deleteComment:(id)arg1 fromAssetCollection:(id)arg2 inAlbum:(id)arg3 albumURLString:(id)arg4 completionBlock:(id)arg5;

- (id)errorFromStandardProcessingOnResponse:(id)arg1 responseObject:(id)arg2 checkServerSideConfigVersion:(_Bool)arg3 error:(id)arg4 body:(id)arg5;

@property(retain, nonatomic) MSASPConnectionGate *gate; // @synthesize gate=_gate;

- (void)getAlbumSyncedStateForAlbum:(id)arg1 assetCollectionStateBlock:(id)arg2 completionBlock:(void)arg3;

- (void)getAlbumURLForAlbumWithGUID:(id)arg1 completionBlock:(id)arg2;

- (void)getAssetCollections:(id)arg1 inAlbum:(id)arg2 albumURLString:(id)arg3 completionBlock:(id)arg4;

- (void)getChangesRootCtag:(id)arg1 completionBlock:(id)arg2;

- (void)getCommentsFromAssetCollection:(id)arg1 inAlbum:(id)arg2 albumURLString:(id)arg3 fromPosition:(int)arg4 completionBlock:(id)arg5;

- (void)getServerSideConfigCompletionBlock:(id)arg1;

- (void)getSharingInfoForAlbum:(id)arg1 albumURLString:(id)arg2 completionBlock:(id)arg3;

- (void)getTokensForAssets:(id)arg1 inAlbum:(id)arg2 albumURLString:(id)arg3 completionBlock:(id)arg4;

- (void)getUploadTokens:(id)arg1 forAssetCollectionWithGUID:(id)arg2 inAlbumWithGUID:(id)arg3 albumURLString:(id)arg4 completionBlock:(id)arg5;

- (void)getVideoURL:(id)arg1 forAssetCollectionWithGUID:(id)arg2 inAlbumWithGUID:(id)arg3 albumURLString:(id)arg4 completionBlock:(id)arg5;

@property(readonly, nonatomic) NSString *headerVersion; // @synthesize headerVersion=_headerVersion;

- (id)initWithPersonID:(id)arg1;

@property(nonatomic) _Bool isShuttingDown; // @synthesize isShuttingDown=_isShuttingDown;

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // @synthesize memberQueue=_memberQueue;

@property(retain, nonatomic) NSObject<OS_dispatch_group> *pendingConnectionsGroup; // @synthesize pendingConnectionsGroup=_pendingConnectionsGroup;

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *pendingConnectionsQueue; // @synthesize pendingConnectionsQueue=_pendingConnectionsQueue;

@property(readonly, nonatomic) NSString *personID; // @synthesize personID=_personID;

- (void)putAssetCollections:(id)arg1 intoAlbum:(id)arg2 albumURLString:(id)arg3 completionBlock:(id)arg4;

- (void)removeSharingRelationships:(id)arg1 fromAlbum:(id)arg2 completionBlock:(id)arg3;

- (_Bool)responseDict:(id)arg1 containsLimitErrorCode:(id)arg2 outMaxAllowed:(id *)arg3;

- (void)sendURLRequest:(id)arg1 bodyObj:(id)arg2 completionBlock:(id)arg3;

- (void)sendURLRequest:(id)arg1 method:(id)arg2 bodyObj:(id)arg3 checkServerSideConfigVersion:(_Bool)arg4 completionBlock:(id)arg5;

- (void)sendUploadCompleteSuccessfulAssetCollections:(id)arg1 failedAssetCollections:(id)arg2 album:(id)arg3 completionBlock:(id)arg4;

@property(retain, nonatomic) NSString *serverSideConfigVersion; // @synthesize serverSideConfigVersion=_serverSideConfigVersion;

- (void)setAlbumSyncedState:(id)arg1 forAlbum:(id)arg2 albumStateCtag:(id)arg3 completionBlock:(id)arg4;

- (void)setAssetCollectionSyncedState:(id)arg1 forAssetCollection:(id)arg2 inAlbum:(id)arg3 assetCollectionStateCtag:(id)arg4 completionBlock:(id)arg5;

- (void)setMultipleContributorsEnabled:(_Bool)arg1 forAlbum:(id)arg2 completionBlock:(id)arg3;

- (void)setPublicAccessEnabled:(_Bool)arg1 forAlbum:(id)arg2 completionBlock:(id)arg3;

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

- (void)shutDownCompletionBlock:(id)arg1;

- (id)shutDownError;

- (void)stopCompletionBlock:(id)arg1;

- (id)stopHandlerBlock;

- (id)stoppingError;

- (void)subscribeToAlbum:(id)arg1 completionBlock:(id)arg2;

- (void)unsubscribeFromAlbum:(id)arg1 completionBlock:(id)arg2;

- (void)updateAlbum:(id)arg1 albumURLString:(id)arg2 completionBlock:(id)arg3;



@end


