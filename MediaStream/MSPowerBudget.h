/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class MSPBTimerContext, NSObject<OS_dispatch_queue>, NSString;



@interface MSPowerBudget : NSObject

{

    _Bool _workQueueIsFileTransferAllowed;

    _Bool _workQueueIsExternalPowered;

    _Bool _workQueueIsForeground;

    id <MSPowerBudgetDelegate> _delegate;

    double _maxActiveTimeAfterPush;

    double _maxActiveTimeAfterLossOfForeground;

    double _maxActiveTimeAfterGlobalResetSync;

    NSString *_focusAlbumGUID;

    NSString *_focusAssetCollectionGUID;

    NSString *_personID;

    MSPBTimerContext *_workQueuePushTimerContext;

    MSPBTimerContext *_workQueuePostForegroundTimerContext;

    MSPBTimerContext *_workQueueGlobalResetSyncTimerContext;

    NSObject<OS_dispatch_queue> *_workQueue;

}



- (void).cxx_destruct;

- (void)_globalResetSyncTimerDidExpire:(id)arg1;

- (void)_postForegroundTimerDidExpire:(id)arg1;

@property(nonatomic) __weak id <MSPowerBudgetDelegate> delegate; // @synthesize delegate=_delegate;

- (void)didBeginExternalPower;

- (void)didBeginForegroundFocus;

- (void)didEndExternalPower;

- (void)didEndForegroundFocus;

- (void)didReceiveGlobalResetSync;

- (void)didReceivePushNotification;

@property(retain, nonatomic) NSString *focusAlbumGUID; // @synthesize focusAlbumGUID=_focusAlbumGUID;

@property(retain, nonatomic) NSString *focusAssetCollectionGUID; // @synthesize focusAssetCollectionGUID=_focusAssetCollectionGUID;

@property(readonly, nonatomic) _Bool hasActiveTimers;

@property(readonly, nonatomic, getter=hasForegroundFocus) _Bool foregroundFocus;

- (id)init;

@property(readonly, nonatomic, getter=isFileTransferAllowed) _Bool fileTransferAllowed;

@property(nonatomic) double maxActiveTimeAfterGlobalResetSync; // @synthesize maxActiveTimeAfterGlobalResetSync=_maxActiveTimeAfterGlobalResetSync;

@property(nonatomic) double maxActiveTimeAfterLossOfForeground; // @synthesize maxActiveTimeAfterLossOfForeground=_maxActiveTimeAfterLossOfForeground;

@property(nonatomic) double maxActiveTimeAfterPush; // @synthesize maxActiveTimeAfterPush=_maxActiveTimeAfterPush;

@property(retain, nonatomic) NSString *personID; // @synthesize personID=_personID;

- (void)setIsFileTransferAllowed:(_Bool)arg1;

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

@property(retain, nonatomic) MSPBTimerContext *workQueueGlobalResetSyncTimerContext; // @synthesize workQueueGlobalResetSyncTimerContext=_workQueueGlobalResetSyncTimerContext;

@property(retain, nonatomic) MSPBTimerContext *workQueuePostForegroundTimerContext; // @synthesize workQueuePostForegroundTimerContext=_workQueuePostForegroundTimerContext;

@property(retain, nonatomic) MSPBTimerContext *workQueuePushTimerContext; // @synthesize workQueuePushTimerContext=_workQueuePushTimerContext;

- (void)shutDown;

- (void)workQueueCommitPersistedValues;

@property(nonatomic, setter=workQueueSetExternalPowered:) _Bool workQueueIsExternalPowered; // @synthesize workQueueIsExternalPowered=_workQueueIsExternalPowered;

@property(nonatomic, setter=workQueueSetFileTransferAllowed:) _Bool workQueueIsFileTransferAllowed; // @synthesize workQueueIsFileTransferAllowed=_workQueueIsFileTransferAllowed;

@property(nonatomic, setter=workQueueSetForeground:) _Bool workQueueIsForeground; // @synthesize workQueueIsForeground=_workQueueIsForeground;

- (double)workQueueMaxActiveTimeAfterGlobalResetSync;

- (double)workQueueMaxActiveTimeAfterLossOfForeground;

- (double)workQueueMaxActiveTimeAfterPush;

- (void)workQueueRecomputeFileTransferAllowed;

- (void)workQueueSetGlobalResetSyncTimerDate:(id)arg1;

- (void)workQueueSetIsFileTransferAllowed:(_Bool)arg1;

- (void)workQueueSetPostForegroundTimerDate:(id)arg1;

- (void)workQueueSetPushTimerDate:(id)arg1;



@end

