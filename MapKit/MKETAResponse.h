/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class MKMapItem;



@interface MKETAResponse : NSObject

{

    MKMapItem *_source;

    MKMapItem *_destination;

    double _expectedTravelTime;

}



- (void)dealloc;

@property(readonly, nonatomic) MKMapItem *destination; // @synthesize destination=_destination;

@property(readonly, nonatomic) double expectedTravelTime; // @synthesize expectedTravelTime=_expectedTravelTime;

- (id)initWithSource:(id)arg1 destination:(id)arg2 expectedTravelTime:(double)arg3;

@property(readonly, nonatomic) MKMapItem *source; // @synthesize source=_source;



@end


