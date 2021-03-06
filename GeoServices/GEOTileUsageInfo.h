/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMapTable;



@interface GEOTileUsageInfo : NSObject

{

    double _startTime;

    double _endTime;

    NSMapTable *_tileStyleToCount;

    unsigned long long _dataLength;

}



- (void)addTileKey:(const struct _GEOTileKey *)arg1 dataLength:(unsigned long long)arg2;

@property(readonly, nonatomic) unsigned long long dataLength; // @synthesize dataLength=_dataLength;

- (void)dealloc;

@property(nonatomic) double endTime; // @synthesize endTime=_endTime;

@property(nonatomic) double startTime; // @synthesize startTime=_startTime;

@property(readonly, nonatomic) NSMapTable *tileStyleToCount; // @synthesize tileStyleToCount=_tileStyleToCount;



@end


