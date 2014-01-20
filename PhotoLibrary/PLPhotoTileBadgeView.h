/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class UIImageView, UILabel;



@interface PLPhotoTileBadgeView : UIView

{

    long long _style;

    long long _numberOfPhotos;

    UIView *__backgroundView;

    UIImageView *__badgeImageView;

    UILabel *__textLabel;

}



@property(readonly, nonatomic) UIView *_backgroundView; // @synthesize _backgroundView=__backgroundView;

@property(readonly, nonatomic) UIImageView *_badgeImageView; // @synthesize _badgeImageView=__badgeImageView;

- (void)_commonPLPhotoTileBadgeViewInitialization;

@property(readonly, nonatomic) UILabel *_textLabel; // @synthesize _textLabel=__textLabel;

- (void)_updateBadgeText;

- (void)dealloc;

- (id)initWithCoder:(id)arg1;

- (id)initWithFrame:(struct CGRect)arg1;

- (void)layoutSubviews;

@property(nonatomic) long long numberOfPhotos; // @synthesize numberOfPhotos=_numberOfPhotos;

- (void)setAlpha:(double)arg1;

@property(nonatomic) long long style; // @synthesize style=_style;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;



@end


