/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class NSDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;



@interface EasyConfigDevice : NSObject <NSCopying>

{

    NSObject<OS_dispatch_queue> *_internalQueue;

    NSObject<OS_dispatch_queue> *_userQueue;

    NSDictionary *_scanRecord;

    _Bool _started;

    int _firstErr;

    struct BonjourBrowser *_airplayBrowser;

    NSDictionary *_airplayBonjourInfo;

    struct BonjourBrowser *_raopBrowser;

    NSDictionary *_raopBonjourInfo;

    struct BonjourBrowser *_mfiConfigBrowser;

    NSDictionary *_mfiConfigBonjourInfo;

    unsigned int _configSeed;

    struct HTTPClientPrivate *_httpClient;

    NSObject<OS_dispatch_source> *_timeoutTimer;

    int _state;

    double _mfiSAPStartTime;

    double _mfiSAPFinishTime;

    struct MFiSAP *_mfiSAP;

    unsigned long long _deviceIdentifier;

    unsigned long long _features;

    NSString *_model;

    NSString *_name;

    NSDictionary *_configuration;

    NSDictionary *_configResponse;

    _Bool _pausesAfterApply;

    _Bool _supportsTLV;

    _Bool _preConfigMetricsSet;

    CDStruct_56123b44 _preConfigMetrics;

    _Bool _postConfigMetricsSet;

    CDStruct_6a23f5a0 _postConfigMetrics;

    double _configStartTime;

    double _findPreConfigStartTime;

    double _findPreConfigFoundTime;

    double _findPostConfigStartTime;

    double _findPostConfigFoundTime;

    double _applyConfigStartTime;

    double _applyConfigFinishTime;

    double _postConfigCheckStartTime;

    double _postConfigCheckFinishTime;

}



+ (id)deviceWithScanRecord:(id)arg1;

+ (_Bool)supportedScanRecord:(id)arg1;

- (void)_applyConfigCompletion:(struct HTTPMessagePrivate *)arg1;

- (int)_applyConfigStart;

- (int)_configureStart:(id)arg1;

- (void)_findDevicePostConfigEvent:(unsigned int)arg1 info:(id)arg2;

- (int)_findDevicePostConfigStart;

- (void)_findDevicePreConfigEvent:(unsigned int)arg1 info:(id)arg2;

- (int)_findDevicePreConfigStart;

- (void)_handleError:(int)arg1;

- (void)_logEnded;

- (int)_mfiSAPNext:(struct HTTPMessagePrivate *)arg1;

- (int)_mfiSAPStart;

- (void)_postConfigCheckCompletion:(struct HTTPMessagePrivate *)arg1;

- (void)_postConfigCheckStart:(id)arg1;

- (void)_postNote:(id)arg1 info:(id)arg2;

- (void)_postProgress:(int)arg1;

- (void)_postProgress:(int)arg1 withResponse:(id)arg2;

- (int)_setupClient:(id)arg1;

- (void)_start;

- (int)_startBonjourWithTimeout:(int)arg1 handler:(id)arg2;

- (void)_stop:(int)arg1;

- (int)_timeoutTimerStart:(unsigned int)arg1 block:(id)arg2;

@property(copy, nonatomic) NSDictionary *configuration; // @synthesize configuration=_configuration;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

@property(nonatomic) unsigned long long deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;

@property(nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_userQueue;

@property(nonatomic) unsigned long long features; // @synthesize features=_features;

- (id)init;

@property(copy, nonatomic) NSString *model; // @synthesize model=_model;

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;

@property(nonatomic) _Bool pausesAfterApply; // @synthesize pausesAfterApply=_pausesAfterApply;

- (_Bool)removed:(id)arg1;

- (void)resumePostConfig;

- (void)setPostConfigMetrics:(const CDStruct_6a23f5a0 *)arg1;

- (void)setPreConfigMetrics:(const CDStruct_56123b44 *)arg1;

- (void)start;

- (void)stop;

- (_Bool)updated:(id)arg1;



@end


