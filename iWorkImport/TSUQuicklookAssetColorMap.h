/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableDictionary, NSString;



__attribute__((visibility("hidden")))

@interface TSUQuicklookAssetColorMap : NSObject

{

    NSMutableDictionary *mAssetMap;

    NSString *mAppAssetPath;

}



+ (id)allocWithZone:(struct _NSZone *)arg1;

+ (id)colorForResource:(id)arg1;

+ (_Bool)hasAppAssets;

+ (id)quicklookAssetMap;

@property(retain, nonatomic) NSString *appAssetPath; // @synthesize appAssetPath=mAppAssetPath;

@property(retain, nonatomic) NSMutableDictionary *assetMap; // @synthesize assetMap=mAssetMap;

- (id)autorelease;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (oneway void)release;

- (id)retain;

- (unsigned long long)retainCount;



@end


