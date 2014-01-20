/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class IMConnectionMonitor, IMRemoteURLConnection, NSData, NSDate, NSDictionary, NSMutableURLRequest, NSNumber, NSObject<OS_dispatch_queue>, NSString, NSURL;



@interface IDSServerBag : NSObject

{

    _Bool _allowSelfSignedCertificates;

    _Bool _allowUnsignedBags;

    int _trustStatus;

    IMConnectionMonitor *_connectionMonitor;

    NSURL *_bagURL;

    NSString *_apsEnvironmentName;

    NSDictionary *_bag;

    NSDictionary *_cachedBag;

    NSMutableURLRequest *_urlRequest;

    IMRemoteURLConnection *_remoteURLConnection;

    NSObject<OS_dispatch_queue> *_bagQueue;

    NSString *_cachedURLString;

    NSData *_certData;

    NSString *_cachedHash;

    NSDate *_loadDate;

    NSNumber *_cacheTime;

}



+ (id)_bagCreationLock;

+ (id)_sharedInstance;

+ (id)_sharedInstanceForClass:(Class)arg1;

+ (id)sharedInstance;

+ (id)sharedInstanceForBagType:(long long)arg1;

- (void)__saveCacheToPrefs;

- (_Bool)_allowInvalid;

@property(retain, setter=_setBag:) NSDictionary *_bag; // @synthesize _bag;

- (id)_bagDefaultsDomain;

- (void)_bagExternallyReloaded;

@property NSObject<OS_dispatch_queue> *_bagQueue; // @synthesize _bagQueue;

@property(retain) NSNumber *_cacheTime; // @synthesize _cacheTime;

@property(retain, setter=_setCachedBag:) NSDictionary *_cachedBag; // @synthesize _cachedBag;

@property(retain, setter=_setCachedHash:) NSString *_cachedHash; // @synthesize _cachedHash;

@property(retain, setter=_setCachedURLString:) NSString *_cachedURLString; // @synthesize _cachedURLString;

- (void)_cancelCurrentLoad;

@property(retain) NSData *_certData; // @synthesize _certData;

- (void)_clearCache;

@property(retain) IMConnectionMonitor *_connectionMonitor; // @synthesize _connectionMonitor;

- (void)_generateURLRequest;

- (id)_initWithURL:(id)arg1 apsEnvironmentName:(id)arg2 allowSelfSignedCertificates:(_Bool)arg3 allowUnsignedBags:(_Bool)arg4;

- (void)_invalidate;

@property(retain) NSDate *_loadDate; // @synthesize _loadDate;

- (void)_loadFromCache;

- (_Bool)_loadFromDictionary:(id)arg1 returningError:(id *)arg2;

- (_Bool)_loadFromSignedDictionary:(id)arg1 returningError:(id *)arg2;

- (void)_processBagResultData:(id)arg1 response:(id)arg2 inBackground:(_Bool)arg3;

@property IMRemoteURLConnection *_remoteURLConnection; // @synthesize _remoteURLConnection;

- (void)_saveCacheToPrefs;

- (void)_saveToCache;

@property(setter=_setTrustStatus:) int _trustStatus; // @synthesize _trustStatus;

- (void)_startBagLoad:(_Bool)arg1;

@property(retain) NSMutableURLRequest *_urlRequest; // @synthesize _urlRequest;

@property _Bool allowSelfSignedCertificates; // @synthesize allowSelfSignedCertificates=_allowSelfSignedCertificates;

@property _Bool allowUnsignedBags; // @synthesize allowUnsignedBags=_allowUnsignedBags;

@property(retain) NSString *apsEnvironmentName; // @synthesize apsEnvironmentName=_apsEnvironmentName;

@property(retain) NSURL *bagURL; // @synthesize bagURL=_bagURL;

- (void)connectionMonitorDidUpdate:(id)arg1;

- (void)dealloc;

- (void)forceBagLoad;

@property(readonly) _Bool isInDebilitatedMode;

@property(readonly) _Bool isLoaded;

@property(readonly) _Bool isLoading;

@property(readonly) _Bool isServerAvailable;

- (id)objectForKey:(id)arg1;

- (void)startBagLoad;

- (id)urlWithKey:(id)arg1;



@end


