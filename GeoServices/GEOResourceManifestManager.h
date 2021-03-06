/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "GEOResourceManifestServerProxyDelegate.h"



@class GEOActiveTileGroup, GEOLocalizationRegionsInfo, NSDictionary, NSHashTable, NSLock, NSMutableArray;



@interface GEOResourceManifestManager : NSObject <GEOResourceManifestServerProxyDelegate>

{

    id <GEOResourceManifestServerProxy> _serverProxy;

    NSHashTable *_serverProxyObservers;

    GEOActiveTileGroup *_activeTileGroup;

    NSLock *_activeTileGroupLock;

    NSDictionary *_resourceNamesToPaths;

    NSMutableArray *_tileGroupObservers;

    NSLock *_tileGroupObserversLock;

    GEOLocalizationRegionsInfo *_localizationRegionsInfo;

    NSMutableArray *_networkActivityHandlers;

    _Bool _isUpdatingManifest;

    _Bool _isLoadingResources;

    NSLock *_resourceNamesToPathsLock;

}



+ (void)disableServerConnection;

+ (id)modernManager;

+ (void)setCallerWillStartServer;

+ (void)setHiDPI:(_Bool)arg1;

+ (id)sharedManager;

+ (void)useLocalProxy;

+ (void)useRemoteProxy;

- (id)_activeTileSetForKey:(const struct _GEOTileKey *)arg1;

- (void)_buildResourceNamesToPaths;

- (void)_localeChanged:(id)arg1;

- (void)_notifyObserversOfResourcesChange;

@property(readonly, nonatomic) GEOActiveTileGroup *activeTileGroup;

- (unsigned int)activeTileGroupIdentifier;

- (void)addNetworkActivityHandler:(id)arg1;

- (void)addServerProxyObserver:(id)arg1;

- (void)addTileGroupObserver:(id)arg1 queue:(id)arg2;

- (id)allResourceNames;

- (id)authToken;

- (id)baseURLStringForTileKey:(const struct _GEOTileKey *)arg1;

- (void)closeServerConnection;

- (void)dealloc;

- (id)detailedDescription;

- (void)devResourcesFolderDidChange;

- (void)forceUpdate;

- (void)getResourceManifestWithHandler:(id)arg1;

@property(readonly, nonatomic) _Bool hasActiveTileGroup;

- (_Bool)hasResourceManifest;

- (id)init;

- (_Bool)isAvailableForTileKey:(const struct _GEOTileKey *)arg1;

- (id)languageForTileKey:(const struct _GEOTileKey *)arg1;

- (id)localizationURLStringIfNecessaryForTileKey:(const struct _GEOTileKey *)arg1;

- (int)mapMatchingTileSetStyle;

- (unsigned int)mapMatchingZoomLevel;

- (id)multiTileURLStringForTileKey:(const struct _GEOTileKey *)arg1 useStatusCodes:(_Bool *)arg2;

- (void)openServerConnection;

- (id)pathForResourceWithName:(id)arg1;

- (void)removeServerProxyObserver:(id)arg1;

- (void)removeTileGroupObserver:(id)arg1;

- (void)resetActiveTileGroup;

@property(readonly, nonatomic) id <GEOResourceManifestServerProxy> serverProxy; // @synthesize serverProxy=_serverProxy;

- (oneway void)serverProxyDidChangeActiveTileGroup:(id)arg1 finishedCallback:(id)arg2;

- (oneway void)serverProxyDidStopLoadingResources;

- (oneway void)serverProxyDidStopUpdatingResourceManifest;

- (oneway void)serverProxyWillStartLoadingResources;

- (oneway void)serverProxyWillStartUpdatingResourceManifest;

- (void)setActiveTileGroupIdentifier:(unsigned int)arg1;

- (void)setManifestToken:(id)arg1 completionHandler:(id)arg2;

- (void)startObservingDevResources;

- (void)stopObservingDevResources;

- (_Bool)supportsTileStyle:(int)arg1 size:(int)arg2 scale:(int)arg3;

- (double)timeToLiveForTileKey:(const struct _GEOTileKey *)arg1;

- (unsigned int)versionForTileKey:(const struct _GEOTileKey *)arg1;



@end


