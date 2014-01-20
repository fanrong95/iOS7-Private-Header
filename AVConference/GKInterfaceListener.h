/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface GKInterfaceListener : NSObject

{

    struct __SCDynamicStore *_dynamicStore;

    struct _opaque_pthread_mutex_t _storeMutex;

    id <InterfaceListenerDelegate> interfaceListenerDelegate;

    _Bool _isWifiUp;

    _Bool _isCellUp;

}



@property _Bool _isCellUp; // @synthesize _isCellUp;

@property _Bool _isWifiUp; // @synthesize _isWifiUp;

- (void)dealloc;

- (void)hasConnectionWithWifi:(_Bool *)arg1 withCell:(_Bool *)arg2;

- (id)init;

@property id <InterfaceListenerDelegate> interfaceListenerDelegate; // @synthesize interfaceListenerDelegate;

- (_Bool)startChangeListener;

- (_Bool)stopChangeListener;



@end

