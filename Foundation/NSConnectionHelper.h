/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSConnection, NSSet;



__attribute__((visibility("hidden")))

@interface NSConnectionHelper : NSObject

{

    double reqLim;

    double repLim;

    _Bool remoteUsesKeyedDO;

    NSSet *whitelist;

    _Bool useKeyedDO;

    NSConnection *parent;

}



- (void)dealloc;

- (void)finalize;

- (id)init;

- (void)setWhitelist:(id)arg1;



@end


