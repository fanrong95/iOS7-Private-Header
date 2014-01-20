/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "GKBaseGameCell.h"


@class GKRatingView, GKStoreItemInternal, UILabel;



@interface GKPurchasableGameCell : GKBaseGameCell

{

    float _capturedRating;

    GKStoreItemInternal *_storeItem;

    UILabel *_developerLabel;

    UILabel *_priceLabel;

    GKRatingView *_ratingStarsView;

}



+ (id)_gkStandardConstraintMetrics;

- (_Bool)canRemoveItem;

@property(nonatomic) float capturedRating; // @synthesize capturedRating=_capturedRating;

- (void)dealloc;

@property(retain, nonatomic) UILabel *developerLabel; // @synthesize developerLabel=_developerLabel;

- (void)didUpdateModel;

- (void)establishConstraints;

- (id)initWithFrame:(struct CGRect)arg1;

- (void)prepareForReuse;

@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;

@property(retain, nonatomic) GKRatingView *ratingStarsView; // @synthesize ratingStarsView=_ratingStarsView;

@property(retain, nonatomic) GKStoreItemInternal *storeItem; // @synthesize storeItem=_storeItem;



@end


