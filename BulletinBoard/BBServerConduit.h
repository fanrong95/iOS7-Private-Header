/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "XPCProxyTarget.h"



@class BBServerConnection;



@interface BBServerConduit : NSObject <XPCProxyTarget>

{

    BBServerConnection *_connection;

}



+ (id)sharedConduit;

- (id)init;

- (void)invalidate;

- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;

- (void)sendMessageToDataProviderSectionID:(id)arg1 name:(id)arg2 userInfo:(id)arg3;

- (void)weeAppWithBundleID:(id)arg1 getHiddenFromUser:(id)arg2;

- (void)weeAppWithBundleID:(id)arg1 setHiddenFromUser:(_Bool)arg2;



@end


