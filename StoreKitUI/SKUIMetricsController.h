/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSNumber, NSObject<OS_dispatch_source>, NSString, SKUIMetricsImpressionSession, SSMetricsConfiguration, SSMetricsController;



@interface SKUIMetricsController : NSObject

{

    NSNumber *_accountID;

    SKUIMetricsImpressionSession *_activeImpressionsSession;

    NSString *_applicationIdentifier;

    SSMetricsController *_controller;

    SSMetricsConfiguration *_globalConfiguration;

    _Bool _impressionsEnabled;

    NSObject<OS_dispatch_source> *_impressionsTimer;

    _Bool _loggingEnabled;

    SSMetricsConfiguration *_pageConfiguration;

    NSString *_pageContext;

    NSString *_pageURL;

    NSString *_topic;

    NSString *_userAgent;

    NSString *_windowOrientation;

}



+ (void)flushImmediately;

- (void).cxx_destruct;

- (void)_recordActiveImpressions;

- (void)_waitUntilRecordingComplete;

@property(copy, nonatomic) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountID;

@property(readonly, nonatomic) SKUIMetricsImpressionSession *activeImpressionsSession;

@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;

- (_Bool)canRecordEventWithType:(id)arg1;

- (id)clickEventWithItem:(id)arg1 locationPosition:(long long)arg2;

- (void)closeImpressionsSession;

- (id)compoundStringWithElements:(id)arg1;

- (void)dealloc;

- (void)flushImmediately;

@property(readonly, nonatomic) double flushInterval;

@property(readonly, nonatomic) SSMetricsConfiguration *globalConfiguration; // @synthesize globalConfiguration=_globalConfiguration;

- (id)initWithGlobalConfiguration:(id)arg1;

- (id)itemOfferClickEventWithItem:(id)arg1 locationPosition:(long long)arg2;

- (id)locationWithPageComponent:(id)arg1;

- (id)locationWithPosition:(long long)arg1 type:(id)arg2 fieldData:(id)arg3;

@property(retain, nonatomic) SSMetricsConfiguration *pageConfiguration; // @synthesize pageConfiguration=_pageConfiguration;

@property(copy, nonatomic) NSString *pageContext; // @synthesize pageContext=_pageContext;

@property(copy, nonatomic) NSString *pageURL; // @synthesize pageURL=_pageURL;

- (id)performActionForItem:(id)arg1;

- (void)pingURLs:(id)arg1;

- (void)pingURLs:(id)arg1 withClientContext:(id)arg2;

- (void)recordEvent:(id)arg1;

@property(copy, nonatomic) NSString *topic; // @synthesize topic=_topic;

@property(copy, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;

@property(copy, nonatomic) NSString *windowOrientation; // @synthesize windowOrientation=_windowOrientation;

- (id)tokenStringWithElements:(id)arg1;



@end


