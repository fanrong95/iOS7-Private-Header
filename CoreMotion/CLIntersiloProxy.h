/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSProxy.h"



#import "CLIntersiloServiceProtocol.h"



@class CLIntersiloInterface, CLIntersiloInterfaceSelectorInfo, CLSilo;



@interface CLIntersiloProxy : NSProxy <CLIntersiloServiceProtocol>

{

    CLIntersiloProxy *_peer;

    CLIntersiloProxy *_asymStrongPeer;

    CLIntersiloInterfaceSelectorInfo *_last;

    id _delegate;

    CLSilo *_delegateSilo;

    CLIntersiloInterface *_delegateInterface;

    CLIntersiloInterface *_proxiedInterface;

}



+ (id)getSilo;

+ (id)proxyForRecipientObject:(id)arg1 inSilo:(id)arg2 withInboundInterface:(id)arg3 andOutboundInterface:(id)arg4;

- (void).cxx_destruct;

- (_Bool)conformsToProtocol:(id)arg1;

@property(readonly, nonatomic) id delegate; // @synthesize delegate=_delegate;

@property(readonly, nonatomic) CLIntersiloInterface *delegateInterface; // @synthesize delegateInterface=_delegateInterface;

@property(readonly, nonatomic) CLSilo *delegateSilo; // @synthesize delegateSilo=_delegateSilo;

- (void)forwardInvocation:(id)arg1;

- (void)heartAttack;

- (id)initWithDelegateInterface:(id)arg1 proxiedInterface:(id)arg2 andUninitializedPeer:(id)arg3;

- (id)initWithDelegateInterface:(id)arg1 proxiedInterface:(id)arg2 delegateObject:(id)arg3 delegateSilo:(id)arg4 andUninitializedPeer:(id)arg5;

- (id)methodSignatureForSelector:(SEL)arg1;

@property(readonly, nonatomic) CLIntersiloInterface *proxiedInterface; // @synthesize proxiedInterface=_proxiedInterface;

- (void)registerDelegate:(id)arg1 inSilo:(id)arg2;



@end

