/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PLPhotoLibrary.h"


@interface PLSharedPhotoLibrary : PLPhotoLibrary

{

}



+ (id)allocWithZone:(struct _NSZone *)arg1;

+ (id)sharedPhotoLibrary;

- (void)_updateWithInsertedAssetsCount:(unsigned long long)arg1 deletedCount:(unsigned long long)arg2 updatedAssets:(id)arg3;

- (id)autorelease;

- (unsigned long long)concurrencyType;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (oneway void)release;

- (id)retain;

- (unsigned long long)retainCount;



@end


