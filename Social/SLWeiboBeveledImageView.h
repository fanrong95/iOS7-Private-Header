/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class UIActivityIndicatorView, UIImage, UIImageView;



__attribute__((visibility("hidden")))

@interface SLWeiboBeveledImageView : UIView

{

    _Bool _hasBevel;

    UIImage *_image;

    UIImageView *_chromeView;

    UIImageView *_previewView;

    UIActivityIndicatorView *_activityView;

}



+ (id)blankWebpageImage;

- (void).cxx_destruct;

- (struct CGRect)_previewFrame;

@property(retain, nonatomic) UIImage *image;

- (id)initWithBevel:(_Bool)arg1;

@property(nonatomic) _Bool isTranscoding;

- (void)positionPreviewView;



@end


