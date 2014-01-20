/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SKUICollectionViewCell.h"


#import "SKUICellLayoutParentView.h"



@class SKUIEditorialCardCellLayout;



@interface SKUIEditorialCardCell : SKUICollectionViewCell <SKUICellLayoutParentView>

{

    SKUIEditorialCardCellLayout *_layout;

    _Bool _layoutNeedsLayout;

}



- (void).cxx_destruct;

- (void)configureForSearchEditorial:(id)arg1;

- (id)initWithFrame:(struct CGRect)arg1;

@property(readonly, nonatomic) SKUIEditorialCardCellLayout *layout; // @synthesize layout=_layout;

- (void)layoutSubviews;

- (void)prepareForReuse;

- (void)setCellLayoutNeedsLayout;



@end


