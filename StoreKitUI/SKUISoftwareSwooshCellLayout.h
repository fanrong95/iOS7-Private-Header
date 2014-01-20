/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SKUIItemCellLayout.h"


@class NSString, UIColor, UILabel;



@interface SKUISoftwareSwooshCellLayout : SKUIItemCellLayout

{

    UILabel *_artistNameLabel;

    UILabel *_categoryLabel;

    struct CGSize _maxImageSize;

    UILabel *_priceLabel;

    UIColor *_primaryTextColor;

    UIColor *_titleColor;

    UILabel *_titleLabel;

    unsigned long long _visibleFields;

}



- (void).cxx_destruct;

- (id)_newDefaultLabel;

- (void)_reloadPriceLabel;

@property(copy, nonatomic) NSString *artistName;

@property(copy, nonatomic) NSString *category;

- (struct CGSize)cellSizeForImageOfSize:(struct CGSize)arg1;

- (id)initWithCollectionViewCell:(id)arg1;

- (void)layoutSubviews;

@property(nonatomic) struct CGSize maxImageSize; // @synthesize maxImageSize=_maxImageSize;

@property(copy, nonatomic) NSString *price;

- (void)setBackgroundColor:(id)arg1;

- (void)setColoringWithColorScheme:(id)arg1;

- (void)setItemOffer:(id)arg1;

- (void)setItemState:(id)arg1 animated:(_Bool)arg2;

@property(copy, nonatomic) NSString *title;

@property(nonatomic) unsigned long long visibleFields; // @synthesize visibleFields=_visibleFields;



@end


