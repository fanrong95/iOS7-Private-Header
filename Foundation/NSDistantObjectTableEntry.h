/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSConnection, NSDistantObject;



__attribute__((visibility("hidden")))

@interface NSDistantObjectTableEntry : NSObject

{

    NSConnection *_conn;

    NSDistantObject *_proxy;

    id _localObject;

    unsigned int _wireID;

}



- (void)dealloc;

- (id)description;



@end


