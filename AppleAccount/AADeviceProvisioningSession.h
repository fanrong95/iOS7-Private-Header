/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString;



@interface AADeviceProvisioningSession : NSObject

{

    NSString *_dsid;

}



- (void).cxx_destruct;

- (id)deviceProvisioningInfo;

- (int)eraseProvisioning;

- (id)initWithAccount:(id)arg1;

- (id)initWithDSID:(id)arg1;

- (int)provisionDeviceWithData:(id)arg1;

- (int)synchronizeProvisioningWithData:(id)arg1;



@end


