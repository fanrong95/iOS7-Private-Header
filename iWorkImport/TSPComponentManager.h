/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "TSPComponentDelegate.h"

#import "TSPObjectModifyDelegate.h"



@class NSCache, NSHashTable, NSMapTable, NSObject<OS_dispatch_queue>, TSPComponent, TSPObjectContext;



__attribute__((visibility("hidden")))

@interface TSPComponentManager : NSObject <TSPComponentDelegate, TSPObjectModifyDelegate>

{

    int _ignoreCachedObjectEvictionCount;

    NSObject<OS_dispatch_queue> *_componentQueue;

    NSHashTable *_components;

    NSMapTable *_componentDictionary;

    NSCache *_componentCache;

    TSPComponent *_viewStateComponent;

    NSObject<OS_dispatch_queue> *_readFlushedComponentQueue;

    TSPObjectContext *_context;

    TSPComponent *_packageMetadataComponent;

}



- (void).cxx_destruct;

- (void)beginIgnoringCachedObjectEviction;

- (void)cacheComponent:(id)arg1;

- (id)componentForRootObjectIdentifier:(long long)arg1;

- (void)componentForRootObjectIdentifier:(long long)arg1 queue:(id)arg2 completion:(id)arg3;

- (id)componentForRootObjectOfLazyReference:(id)arg1;

- (void)componentForRootObjectOfLazyReference:(id)arg1 queue:(id)arg2 completion:(id)arg3;

- (id)componentForRootObjectOfLazyReferenceImpl:(id)arg1;

@property(readonly, nonatomic) TSPObjectContext *context; // @synthesize context=_context;

- (void)dealloc;

- (void)didModifyFlushedComponent:(id)arg1 forObject:(id)arg2;

- (void)dirtyAllComponentsForDocumentUpgradeInPackage:(unsigned char)arg1;

- (void)discardOrphanedComponents;

@property(readonly, nonatomic) TSPComponent *documentComponent;

- (id)documentComponentImpl;

@property(readonly, nonatomic) TSPComponent *documentObjectContainerComponent;

- (void)endIgnoringCachedObjectEviction;

- (void)enumerateComponents:(id)arg1;

- (void)evictAllCachedObjects;

- (id)init;

- (id)initWithContext:(id)arg1;

@property(readonly, nonatomic) _Bool isDocumentComponentTreeModified;

@property(readonly, nonatomic) _Bool isSupportComponentTreeModified;

- (void)loadFromPackageMetadata:(id)arg1 packageIdentifier:(unsigned char)arg2;

- (id)objectForIdentifier:(long long)arg1;

@property(readonly, nonatomic) TSPComponent *packageMetadataComponent; // @synthesize packageMetadataComponent=_packageMetadataComponent;

- (void)removeComponentFromCacheWithIdentifier:(long long)arg1;

- (void)resumeLoadingModifiedFlushedComponents;

- (void)retrieveOrCreateComponentForRootObject:(id)arg1 queue:(id)arg2 completion:(id)arg3;

- (id)rootComponentForPackageIdentifier:(unsigned char)arg1;

- (id)rootComponentWithIdentifierImpl:(long long)arg1 locator:(id)arg2 packageIdentifier:(unsigned char)arg3;

@property(retain) TSPComponent *viewStateComponent;

- (_Bool)shouldKeepAllCachedObjectsInMemory;

@property(readonly, nonatomic) TSPComponent *supportComponent;

- (id)supportComponentImpl;

@property(readonly, nonatomic) TSPComponent *supportObjectContainerComponent;

- (void)suspendLoadingModifiedFlushedComponentsAndWait;

- (void)traverseComponentTreeFromRoot:(id)arg1 accessor:(id)arg2;

- (void)willModifyObject:(id)arg1 duringReadOperation:(_Bool)arg2;



@end


