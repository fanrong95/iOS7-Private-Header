/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SKUIPageComponent.h"


#import "SSMetricsEventFieldProvider.h"



@class NSString, SKUIArtworkList, SKUILink;



@interface SKUIMediaComponent : SKUIPageComponent <SSMetricsEventFieldProvider>

{

    NSString *_accessibilityLabel;

    long long _alignment;

    double _duration;

    SKUILink *_link;

    long long _mediaIdentifier;

    long long _mediaType;

    NSString *_mediaURLString;

    SKUIArtworkList *_thumbnailArtworkList;

    NSString *_title;

    float _titleFontSize;

    long long _titleFontWeight;

}



- (void).cxx_destruct;

@property(readonly, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;

@property(readonly, nonatomic) long long alignment; // @synthesize alignment=_alignment;

- (id)bestThumbnailArtwork;

- (id)bestThumbnailForWidth:(double)arg1;

- (long long)componentType;

@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;

- (id)initWithArtwork:(id)arg1;

- (id)initWithArtworkList:(id)arg1;

- (id)initWithCustomPageContext:(id)arg1;

@property(readonly, nonatomic) SKUILink *link; // @synthesize link=_link;

@property(readonly, nonatomic) long long mediaIdentifier; // @synthesize mediaIdentifier=_mediaIdentifier;

@property(readonly, nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;

@property(readonly, nonatomic) NSString *mediaURLString; // @synthesize mediaURLString=_mediaURLString;

- (id)metricsElementName;

@property(readonly, nonatomic) SKUIArtworkList *thumbnailArtworkList; // @synthesize thumbnailArtworkList=_thumbnailArtworkList;

@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;

@property(readonly, nonatomic) float titleFontSize; // @synthesize titleFontSize=_titleFontSize;

@property(readonly, nonatomic) long long titleFontWeight; // @synthesize titleFontWeight=_titleFontWeight;

- (id)valueForMetricsField:(id)arg1;



@end


