/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class MPImageCache, MPImageCacheRequest, MPTimeMarker, UIImage;



@interface MPVideoChapterCellContentView : UIView

{

    unsigned int _current:1;

    unsigned long long _index;

    unsigned int _selected:1;

    unsigned int _showThumbnailColumn:1;

    double _timeColumnWidth;

    MPTimeMarker *_timeMarker;

    UIImage *_artwork;

    MPImageCache *_artworkImageCache;

    MPImageCacheRequest *_artworkImageRequest;

}



- (void).cxx_destruct;

@property(retain, nonatomic) UIImage *artwork; // @synthesize artwork=_artwork;

@property(retain, nonatomic) MPImageCache *artworkImageCache; // @synthesize artworkImageCache=_artworkImageCache;

- (void)dealloc;

- (void)drawRect:(struct CGRect)arg1;

@property(nonatomic) unsigned long long index; // @synthesize index=_index;

@property(nonatomic, getter=isCurrent) _Bool current;

@property(nonatomic, getter=isSelected) _Bool selected;

- (void)setArtworkImageRequest:(id)arg1 artworkLoadCompletionHandler:(id)arg2;

@property(nonatomic) _Bool showThumbnailColumn;

@property(nonatomic) double timeColumnWidth; // @synthesize timeColumnWidth=_timeColumnWidth;

@property(retain, nonatomic) MPTimeMarker *timeMarker; // @synthesize timeMarker=_timeMarker;



@end


