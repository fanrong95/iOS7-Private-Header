/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "ASPolicyManager.h"


@class NSString;



@interface ASClientPolicyManager : ASPolicyManager

{

    NSString *_powerAssertionGroupIdentifier;

}



- (void)dealloc;

- (id)initWithAccount:(id)arg1;

- (void)policyKeyChanged:(id)arg1;

- (void)requestPolicyUpdate;

- (void)setDelegate:(id)arg1;



@end


