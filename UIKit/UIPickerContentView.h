/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"


@class UIImageView, UILabel;



__attribute__((visibility("hidden")))

@interface UIPickerContentView : UIView

{

    UILabel *_titleLabel;

    UIImageView *_checkView;

    struct {

        unsigned int checked:1;

        unsigned int highlighted:1;

    } _pickerContentViewFlags;

}



+ (double)_checkmarkOffset;

- (_Bool)_isSelectable;

- (id)checkedColor;

- (void)dealloc;

@property(nonatomic, getter=isChecked) _Bool checked;

- (_Bool)isHighlighted;

- (double)labelWidthForBounds:(struct CGRect)arg1;

- (void)layoutSubviews;

- (void)setHighlighted:(_Bool)arg1;

@property(readonly, nonatomic) UILabel *titleLabel;



@end

