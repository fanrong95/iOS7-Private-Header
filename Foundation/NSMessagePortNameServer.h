/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSPortNameServer.h"


@interface NSMessagePortNameServer : NSPortNameServer

{

}



+ (id)sharedInstance;

- (id)portForName:(id)arg1;

- (id)portForName:(id)arg1 host:(id)arg2;

- (_Bool)registerPort:(id)arg1 name:(id)arg2;

- (_Bool)removePortForName:(id)arg1;



@end


