/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class CoreThemeDocument, NSConditionLock, NSMutableArray, TDLogger;



@interface TDRenditionsDistiller : NSObject

{

    CoreThemeDocument *document;

    NSMutableArray *renditionInQueue;

    NSMutableArray *psiDataInfoOutQueue;

    NSConditionLock *inQueueLock;

    NSConditionLock *outQueueLock;

    _Bool shouldCompressCSIDataFlag;

    _Bool noMoreCSIDataInfo;

    _Bool noMoreRenditions;

    TDLogger *_logger;

}



- (void)_distill:(id)arg1;

- (void)_enqueueCSIDataInfo:(id)arg1;

- (void)_enqueueDistillingAbortedInfo;

- (void)_enqueueLastCSIDataInfoFlag;

- (void)_enqueueOnInQueueTheObject:(id)arg1;

- (void)_enqueueOnOutQueueTheObject:(id)arg1;

- (void)_enqueueOnQueue:(id)arg1 withQueueLock:(id)arg2 object:(id)arg3;

- (id)_nextObjectFromInQueue;

- (void)dealloc;

- (void)detachDistillationThread;

- (void)enqueueAbortFlag;

- (void)enqueueLastRenditionFlag;

- (void)enqueueRenditionSpec:(id)arg1;

- (id)initWithDocument:(id)arg1 shouldCompressCSIDataFlag:(_Bool)arg2;

@property(retain) TDLogger *logger; // @synthesize logger=_logger;

- (id)nextCSIDataInfoFromQueue;



@end


