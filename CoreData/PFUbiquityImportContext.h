/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSDictionary, NSMutableDictionary, NSString, PFUbiquityKnowledgeVector, PFUbiquityPeer, PFUbiquityStoreMetadata, PFUbiquityStoreSaveSnapshot, PFUbiquitySwitchboardCacheWrapper, PFUbiquityTransactionLog, _PFUbiquityStack;



__attribute__((visibility("hidden")))

@interface PFUbiquityImportContext : NSObject

{

    _PFUbiquityStack *_stack;

    PFUbiquityStoreMetadata *_storeMetadata;

    PFUbiquityPeer *_actingPeer;

    PFUbiquityKnowledgeVector *_kv;

    PFUbiquityKnowledgeVector *_currentKnowledgeVector;

    NSString *_exportingPeerID;

    PFUbiquityTransactionLog *_transactionLog;

    PFUbiquityStoreSaveSnapshot *_storeSaveSnapshot;

    NSDictionary *_globalIDToLocalIDURICache;

    NSMutableDictionary *_globalIDToFetchedObject;

    PFUbiquitySwitchboardCacheWrapper *_cacheWrapper;

}



@property(readonly, nonatomic) PFUbiquityPeer *actingPeer; // @synthesize actingPeer=_actingPeer;

@property(retain, nonatomic) PFUbiquitySwitchboardCacheWrapper *cacheWrapper; // @synthesize cacheWrapper=_cacheWrapper;

@property(retain, nonatomic) PFUbiquityKnowledgeVector *currentKnowledgeVector; // @synthesize currentKnowledgeVector=_currentKnowledgeVector;

- (void)dealloc;

@property(retain, nonatomic) NSString *exportingPeerID; // @synthesize exportingPeerID=_exportingPeerID;

@property(readonly, nonatomic) NSMutableDictionary *globalIDToFetchedObject; // @synthesize globalIDToFetchedObject=_globalIDToFetchedObject;

@property(retain, nonatomic) NSDictionary *globalIDToLocalIDURICache; // @synthesize globalIDToLocalIDURICache=_globalIDToLocalIDURICache;

- (id)init;

- (id)initWithStack:(id)arg1 andStoreMetadata:(id)arg2;

- (id)initWithStoreName:(id)arg1 andUbiquityRootLocation:(id)arg2 withLocalPeerID:(id)arg3;

@property(retain, nonatomic) PFUbiquityKnowledgeVector *knowledgeVector; // @synthesize knowledgeVector=_kv;

- (_Bool)prefetchManagedObjectsInContext:(id)arg1 error:(id *)arg2;

- (void)setActingPeer:(id)arg1;

@property(retain, nonatomic) _PFUbiquityStack *stack; // @synthesize stack=_stack;

@property(retain, nonatomic) PFUbiquityStoreMetadata *storeMetadata; // @synthesize storeMetadata=_storeMetadata;

@property(retain, nonatomic) PFUbiquityStoreSaveSnapshot *storeSaveSnapshot; // @synthesize storeSaveSnapshot=_storeSaveSnapshot;

@property(retain, nonatomic) PFUbiquityTransactionLog *transactionLog; // @synthesize transactionLog=_transactionLog;



@end


