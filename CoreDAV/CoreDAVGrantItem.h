/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CoreDAVItem.h"


@class NSMutableSet;



@interface CoreDAVGrantItem : CoreDAVItem

{

    NSMutableSet *_privileges;

}



+ (id)copyParseRules;

- (void)addPrivilege:(id)arg1;

- (void)dealloc;

- (id)description;

- (id)init;

@property(retain) NSMutableSet *privileges; // @synthesize privileges=_privileges;

- (void)write:(id)arg1;



@end


