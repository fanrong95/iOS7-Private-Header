/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class MFError, NSArray, NSString;



@interface MFMessageSigner : NSObject

{

    int _status;

    struct __SecTrust *_trust;

    NSString *_sender;

    NSString *_uncommentedSender;

}



@property(readonly, nonatomic) int action;

- (void)addTrustException;

@property(readonly, nonatomic) NSArray *certificates;

@property(readonly, nonatomic) NSString *commonName;

- (struct __SecTrust *)copyTrust;

- (void)dealloc;

@property(readonly, nonatomic) NSString *emailAddress;

@property(readonly, nonatomic) MFError *error;

- (_Bool)hasTrustException;

- (id)initWithSender:(id)arg1 trust:(struct __SecTrust *)arg2 verification:(int)arg3;

- (void)removeTrustException;

@property(readonly, nonatomic) NSString *sender; // @synthesize sender=_sender;



@end


