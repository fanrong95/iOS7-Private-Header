/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray, NSDictionary, NSString;



@interface MFMailAccountProxy : NSObject

{

    NSDictionary *_properties;

}



- (id)_emailAddressesAndAliases;

- (id)_initWithProperties:(id)arg1;

- (_Bool)_isActive;

- (_Bool)_isRestricted;

- (void)dealloc;

@property(readonly, nonatomic) NSArray *emailAddresses;

@property(readonly, nonatomic) NSString *firstEmailAddress;

@property(readonly, nonatomic) NSArray *fromEmailAddresses;

@property(readonly, nonatomic) NSArray *fromEmailAddressesIncludingDisabled;

@property(readonly, nonatomic) NSString *fullUserName;

@property(readonly, nonatomic) _Bool isDefaultDeliveryAccount;

@property(readonly, nonatomic) id mailAccount;

@property(readonly, nonatomic) _Bool restrictsRepliesAndForwards;

@property(readonly, nonatomic) _Bool supportsSoftBankCodePoints;

@property(readonly, nonatomic) NSString *uniqueID;

@property(readonly, nonatomic) NSString *username;



@end


