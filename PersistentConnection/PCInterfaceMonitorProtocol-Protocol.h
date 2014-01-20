/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString;



@protocol PCInterfaceMonitorProtocol <NSObject>

@property(readonly, nonatomic) long long interfaceIdentifier;

@property(readonly, nonatomic) _Bool isInterfaceHistoricallyUsable;

@property(readonly, nonatomic) _Bool isInterfaceUsable;

@property(readonly, nonatomic) _Bool isInternetReachable;

@property(readonly, nonatomic) _Bool isPoorLinkQuality;

@property(readonly, nonatomic) _Bool isRadioHot;

@property(readonly, nonatomic) int linkQuality;

@property(readonly, nonatomic) NSString *linkQualityString;



@optional

@property(readonly, nonatomic) struct __CFString *currentRAT;

@property(readonly, nonatomic) _Bool isLTEWithCDRX;

@end


