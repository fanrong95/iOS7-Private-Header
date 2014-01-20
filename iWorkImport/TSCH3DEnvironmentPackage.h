/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class NSMutableArray;



__attribute__((visibility("hidden")))

@interface TSCH3DEnvironmentPackage : NSObject <NSCopying>

{

    NSMutableArray *mMaterials;

}



+ (id)instanceWithArchive:(const struct Chart3DEnvironmentPackageArchive *)arg1 unarchiver:(id)arg2;

- (void)addMaterial:(id)arg1;

- (void)affect:(id)arg1 states:(id)arg2 scene:(id)arg3 texturePool:(id)arg4;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (unsigned long long)hash;

- (id)init;

- (id)initWithArchive:(const struct Chart3DEnvironmentPackageArchive *)arg1 unarchiver:(id)arg2;

- (_Bool)isEqual:(id)arg1;

- (unsigned long long)materialCount;

- (id)materialEnumerator;

- (void)saveToArchive:(struct Chart3DEnvironmentPackageArchive *)arg1 archiver:(id)arg2;



@end

