/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MPImageCacheRequest.h"


@class RadioStation;



@interface MPRadioStationImageCacheRequest : MPImageCacheRequest

{

    _Bool _usePlaceholderAsFallback;

    RadioStation *_radioStation;

}



- (void).cxx_destruct;

- (_Bool)canRequestSynchronously;

- (id)copyRawImageReturningError:(id *)arg1;

- (id)initWithRadioStation:(id)arg1;

- (id)placeholderImage;

@property(readonly, nonatomic) RadioStation *radioStation; // @synthesize radioStation=_radioStation;

@property(nonatomic) _Bool usePlaceholderAsFallback; // @synthesize usePlaceholderAsFallback=_usePlaceholderAsFallback;

- (id)uniqueKey;



@end


