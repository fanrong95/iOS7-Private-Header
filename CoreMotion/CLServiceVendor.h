/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface CLServiceVendor : NSObject

{

}



+ (_Bool)ensureServiceIsRunning:(id)arg1;

+ (_Bool)getKeyClass:(Class *)arg1 andSilo:(id *)arg2 forServiceWithName:(id)arg3;

+ (id)getServiceWithName:(id)arg1;

+ (id)getSiloForService:(id)arg1;

+ (void)initialize;

+ (_Bool)isServiceEnabled:(id)arg1;

+ (_Bool)isServiceRunning:(id)arg1;

+ (id)proxyForService:(id)arg1;

+ (void)rereadConfiguration;

+ (void)retireServiceWithName:(id)arg1;



@end


