/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class IMLocalObject, NSObject<OS_xpc_object>;



@interface IMMessageContext : NSObject

{

    NSObject<OS_xpc_object> *_xpcMessage;

    IMLocalObject *_localObject;

}



- (void)dealloc;

@property(retain) IMLocalObject *localObject; // @synthesize localObject=_localObject;

@property NSObject<OS_xpc_object> *xpcMessage; // @synthesize xpcMessage=_xpcMessage;



@end


