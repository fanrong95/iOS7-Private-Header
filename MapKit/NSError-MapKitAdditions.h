/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSError.h"



@class NSURL;



@interface NSError (MapKitAdditions)

@property(readonly, nonatomic, getter=_mapkit_isCLDenied) _Bool _mapkit_CLDenied;

@property(readonly, nonatomic, getter=_mapkit_isCLErrorNetwork) _Bool _mapkit_CLErrorNetwork;

@property(readonly, nonatomic, getter=_mapkit_isCLHeadingFailure) _Bool _mapkit_CLHeadingFailure;

@property(readonly, nonatomic, getter=_mapkit_isCLLocationUnknown) _Bool _mapkit_CLLocationUnknown;

@property(readonly, nonatomic) NSURL *_mapkit_locationErrorSettingsURL;

@end


