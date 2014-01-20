/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableDictionary;



@interface AXBinaryMonitor : NSObject

{

    NSMutableDictionary *_bundleHandlerMap;

    NSMutableDictionary *_frameworkHandlerMap;

    NSMutableDictionary *_dylibHandlerMap;

}



+ (void)initialize;

+ (id)sharedInstance;

- (void)_addHandler:(id)arg1 withName:(id)arg2 toMap:(id *)arg3;

- (id)_bundleNameForImage:(id)arg1;

- (id)_dylibNameForImage:(id)arg1;

- (id)_frameworkNameForImage:(id)arg1;

- (void)_handleLoadedImagePath:(id)arg1;

- (_Bool)_loadImageIsBundle:(id)arg1;

- (_Bool)_loadImageIsDylib:(id)arg1;

- (_Bool)_loadImageIsFramework:(id)arg1;

- (void)addHandler:(id)arg1 forBundleID:(void)arg2;

- (void)addHandler:(id)arg1 forBundleName:(void)arg2;

- (void)addHandler:(id)arg1 forDylib:(void)arg2;

- (void)addHandler:(id)arg1 forFramework:(void)arg2;

@property(retain, nonatomic) NSMutableDictionary *bundleHandlerMap; // @synthesize bundleHandlerMap=_bundleHandlerMap;

- (void)dealloc;

@property(retain, nonatomic) NSMutableDictionary *dylibHandlerMap; // @synthesize dylibHandlerMap=_dylibHandlerMap;

@property(retain, nonatomic) NSMutableDictionary *frameworkHandlerMap; // @synthesize frameworkHandlerMap=_frameworkHandlerMap;

- (id)init;



@end

