/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableArray, NSMutableDictionary;



__attribute__((visibility("hidden")))

@interface VKRealisticPolygonMaker : NSObject

{

    NSMutableArray *_polygons;

    NSMutableDictionary *_styleForPolygon;

}



- (void)addPolygonForPoints:(const Vec2Imp_1782d7e3 *)arg1 pointCount:(unsigned long long)arg2 withStyle:(id)arg3;

- (void)dealloc;

- (void)generateIndexedTrianglesWithHandler:(id)arg1;



@end


