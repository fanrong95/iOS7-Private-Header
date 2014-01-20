/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSData, TSCHChartSeries;



__attribute__((visibility("hidden")))

@interface TSCHPointArrayCache : NSObject

{

    TSCHChartSeries *mSeries;

    struct CGRect mAreaFrame;

    unsigned long long mStart;

    unsigned long long mEnd;

    _Bool mCull;

    NSData *mData;

}



+ (CDStruct_460b8ffe *)cachedPointsForSeries:(id)arg1 inAreaFrame:(struct CGRect)arg2 valueStart:(unsigned long long)arg3 valueEnd:(unsigned long long)arg4 cullBadPoints:(_Bool)arg5 outCount:(unsigned long long *)arg6;

+ (void)clearCache;

+ (id)p_getCacheCreate:(_Bool)arg1;

+ (void)setCachedPointsForSeries:(id)arg1 inAreaFrame:(struct CGRect)arg2 valueStart:(unsigned long long)arg3 valueEnd:(unsigned long long)arg4 cullBadPoints:(_Bool)arg5 points:(CDStruct_460b8ffe *)arg6 count:(unsigned long long)arg7;

- (id).cxx_construct;

- (void)dealloc;

- (_Bool)matchesSeries:(id)arg1 areaFrame:(struct CGRect)arg2 start:(unsigned long long)arg3 end:(unsigned long long)arg4 cull:(_Bool)arg5;



@end


