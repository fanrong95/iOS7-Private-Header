/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSSecureCoding.h"



@class NSDictionary, NSString;



@interface AXIPCMessage : NSObject <NSSecureCoding>

{

    int _key;

    unsigned int _clientPort;

    NSDictionary *_payload;

    CDStruct_4c969caf _auditToken;

}



+ (id)archivedMessageFromData:(id)arg1;

+ (_Bool)supportsSecureCoding;

@property(nonatomic) CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;

@property(nonatomic) unsigned int clientPort; // @synthesize clientPort=_clientPort;

- (void)dealloc;

- (id)description;

- (void)encodeWithCoder:(id)arg1;

- (id)initWithCoder:(id)arg1;

- (id)initWithKey:(int)arg1;

- (id)initWithKey:(int)arg1 payload:(id)arg2;

- (id)initWithKey:(int)arg1 payload:(id)arg2 keyDebugInfo:(id)arg3;

@property(nonatomic) int key; // @synthesize key=_key;

@property(retain, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;

@property(readonly, nonatomic) NSString *senderBundleId;



@end


