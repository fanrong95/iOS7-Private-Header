/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "IDSProfileMessage.h"


#import "NSCopying.h"



@class NSDictionary, NSNumber, NSString;



@interface IDSProfileLinkHandleMessage : IDSProfileMessage <NSCopying>

{

    NSString *_uri;

    NSDictionary *_authenticationData;

    NSNumber *_responseVettingStatus;

}



@property(copy, setter=setURI:) NSString *URI; // @synthesize URI=_uri;

- (id)additionalMessageHeaders;

@property(copy) NSDictionary *authenticationData; // @synthesize authenticationData=_authenticationData;

- (id)bagKey;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (void)handleResponseDictionary:(id)arg1;

- (id)init;

- (id)messageBody;

- (id)requiredKeys;

@property(copy) NSNumber *responseVettingStatus; // @synthesize responseVettingStatus=_responseVettingStatus;

- (_Bool)wantsBodySignature;

- (_Bool)wantsSignature;



@end


