/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class TSUNoCopyDictionary;



__attribute__((visibility("hidden")))

@interface TSCH3DBarResourceCache : NSObject

{

    TSUNoCopyDictionary *mCache;

}



+ (id)_singletonAlloc;

+ (id)allocWithZone:(struct _NSZone *)arg1;

+ (id)barWithExtrusionSetting:(const struct BarExtrusionSetting *)arg1;

+ (id)instance;

- (id)autorelease;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)init;

- (id)p_barWithExtrusionSetting:(const struct BarExtrusionSetting *)arg1;

- (oneway void)release;

- (id)retain;

- (unsigned long long)retainCount;



@end


