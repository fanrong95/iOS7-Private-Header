/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "HSRequest.h"


@interface HSBrowseRequest : HSRequest

{

}



+ (id)requestWithDatabaseID:(unsigned int)arg1 browseGroupType:(long long)arg2;

- (id)_stringForBrowseGroupType:(long long)arg1;

- (id)canonicalResponseForResponse:(id)arg1;

- (id)initWithDatabaseID:(unsigned int)arg1 browseGroupType:(long long)arg2;



@end


