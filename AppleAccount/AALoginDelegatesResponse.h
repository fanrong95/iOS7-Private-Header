/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "AAResponse.h"


@class NSDictionary, NSNumber, NSString;



@interface AALoginDelegatesResponse : AAResponse

{

}



@property(readonly, nonatomic) NSString *dsid;

@property(readonly, nonatomic) NSDictionary *responseParameters;

- (id)responseParametersForServiceIdentifier:(id)arg1;

@property(readonly, nonatomic) NSNumber *status;

@property(readonly, nonatomic) NSString *statusMessage;



@end


