/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface VKLabelMarkerFeatureHandle : NSObject

{

    int _featureType;

    int _featureIndex;

    int _tileX;

    int _tileY;

    int _tileZ;

}



- (int)featureIndex;

- (int)featureType;

- (id)initWithFeature:(CDStruct_283a3ada *)arg1;

- (int)tileX;

- (int)tileY;

- (int)tileZ;



@end


