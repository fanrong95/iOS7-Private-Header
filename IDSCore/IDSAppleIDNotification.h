/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSDictionary, NSMutableDictionary, NSMutableSet, NSString;



@interface IDSAppleIDNotification : NSObject

{

    NSString *_appleID;

    NSString *_deviceName;

    NSMutableSet *_aliases;

    NSMutableSet *_sessions;

    NSMutableSet *_serviceTypes;

    NSMutableDictionary *_sessionToBlockMap;

}



- (void)addAlias:(id)arg1;

- (void)addCompletionBlock:(id)arg1 forSession:(void)arg2;

- (void)addServiceType:(id)arg1;

- (void)addSession:(id)arg1;

@property(retain, nonatomic) NSMutableSet *aliases; // @synthesize aliases=_aliases;

@property(retain, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;

- (void)dealloc;

@property(retain, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;

- (id)init;

@property(retain, nonatomic) NSMutableSet *serviceTypes; // @synthesize serviceTypes=_serviceTypes;

@property(retain, nonatomic) NSDictionary *sessionToBlockMap; // @synthesize sessionToBlockMap=_sessionToBlockMap;

@property(retain, nonatomic) NSMutableSet *sessions; // @synthesize sessions=_sessions;



@end


