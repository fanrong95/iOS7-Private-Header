/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "HSRequest.h"


@interface HSBulkSetItemPropertiesRequest : HSRequest

{

}



+ (id)requestWithDatabaseID:(unsigned int)arg1 sessionID:(unsigned int)arg2 itemID:(unsigned int)arg3 properties:(id)arg4;

+ (id)requestWithDatabaseID:(unsigned int)arg1 sessionID:(unsigned int)arg2 itemIDs:(id)arg3 properties:(id)arg4 useLongIDs:(_Bool)arg5;

+ (id)requestWithDatabaseID:(unsigned int)arg1 sessionID:(unsigned int)arg2 longItemID:(unsigned long long)arg3 properties:(id)arg4;

- (id)_bodyDataForSessionID:(unsigned int)arg1 itemIDs:(id)arg2 properties:(id)arg3 useLongIDs:(_Bool)arg4;

- (id)_propertyCodeForPropertyName:(id)arg1 valueLength:(unsigned int *)arg2;

- (id)initWithDatabaseID:(unsigned int)arg1 sessionID:(unsigned int)arg2 itemIDs:(id)arg3 properties:(id)arg4 useLongIDs:(_Bool)arg5;



@end


