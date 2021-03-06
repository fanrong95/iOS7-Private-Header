/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "SUDownloadPolicy.h"



@class SUCarrierDownloadPolicyProperties, SUDescriptor, SUNetworkMonitor;



@interface SUDefaultDownloadPolicy : NSObject <SUDownloadPolicy>

{

    SUDescriptor *_descriptor;

    SUCarrierDownloadPolicyProperties *_carrierPolicy;

    SUNetworkMonitor *_networkMonitor;

    _Bool _cellularCapable;

}



- (_Bool)_isCellularCapable;

- (_Bool)_isDownloadableForNetworkType:(int)arg1 error:(long long *)arg2 cellularFeesApply:(_Bool *)arg3 powerRequired:(_Bool *)arg4;

- (id)_stringForBool:(_Bool)arg1;

@property(retain, nonatomic) SUCarrierDownloadPolicyProperties *carrierPolicy; // @synthesize carrierPolicy=_carrierPolicy;

- (void)dealloc;

- (id)description;

@property(retain, nonatomic) SUDescriptor *descriptor; // @synthesize descriptor=_descriptor;

- (_Bool)hasEnoughDiskSpace;

- (id)initWithDescriptor:(id)arg1;

@property(nonatomic, getter=isCellularCapable) _Bool cellularCapable; // @synthesize cellularCapable=_cellularCapable;

- (_Bool)isDownloadAllowableForCellular;

- (_Bool)isDownloadAllowableForCellular2G;

- (_Bool)isDownloadAllowableForCellularRoaming;

- (_Bool)isDownloadAllowableForWiFi;

- (_Bool)isDownloadFreeForCellular;

- (_Bool)isDownloadable;

- (_Bool)isDownloadableForCurrentNetworkConditions:(long long *)arg1 cellularFeesApply:(_Bool *)arg2;

- (_Bool)isDownloadableForCurrentNetworkConditions:(long long *)arg1 cellularFeesApply:(_Bool *)arg2 powerRequired:(_Bool *)arg3;

- (_Bool)isPowerRequired;

- (_Bool)isSamePolicy:(id)arg1;

@property(retain, nonatomic) SUNetworkMonitor *networkMonitor; // @synthesize networkMonitor=_networkMonitor;



@end


