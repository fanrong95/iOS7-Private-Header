/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCoding.h"



@class NSObject<OS_xpc_object>;



@interface XPCEndpoint : NSObject <NSCoding>

{

    NSObject<OS_xpc_object> *_endpoint;

}



- (id)_initWithEndpoint:(id)arg1;

- (id)createConnection;

- (void)dealloc;

- (void)encodeWithCoder:(id)arg1;

@property(nonatomic) NSObject<OS_xpc_object> *endpoint; // @synthesize endpoint=_endpoint;

- (id)init;

- (id)initWithCoder:(id)arg1;

- (id)initWithConnection:(id)arg1;



@end


