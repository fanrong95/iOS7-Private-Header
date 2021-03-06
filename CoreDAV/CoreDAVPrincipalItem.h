/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CoreDAVItem.h"


@class CoreDAVHrefItem, CoreDAVItemWithNoChildren;



@interface CoreDAVPrincipalItem : CoreDAVItem

{

    CoreDAVHrefItem *_href;

    CoreDAVItemWithNoChildren *_all;

    CoreDAVItemWithNoChildren *_authenticated;

    CoreDAVItemWithNoChildren *_unauthenticated;

    CoreDAVItem *_property;

    CoreDAVItemWithNoChildren *_selfItem;

}



+ (id)copyParseRules;

@property(retain) CoreDAVItemWithNoChildren *all; // @synthesize all=_all;

@property(retain) CoreDAVItemWithNoChildren *authenticated; // @synthesize authenticated=_authenticated;

- (void)dealloc;

- (id)description;

- (id)hashString;

@property(retain) CoreDAVHrefItem *href; // @synthesize href=_href;

- (id)init;

- (id)initTypeIsAll;

- (id)initTypeIsAuthenticated;

- (id)initTypeIsHREFWithURL:(id)arg1;

- (id)initTypeIsProperty:(id)arg1;

- (id)initTypeIsSelf;

- (id)initTypeIsUnauthenticated;

@property(retain) CoreDAVItem *property; // @synthesize property=_property;

@property(retain) CoreDAVItemWithNoChildren *selfItem; // @synthesize selfItem=_selfItem;

@property(retain) CoreDAVItemWithNoChildren *unauthenticated; // @synthesize unauthenticated=_unauthenticated;

- (void)write:(id)arg1;



@end


