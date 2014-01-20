/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIPickerTableViewCell.h"


@class UIView;



__attribute__((visibility("hidden")))

@interface UIPickerTableViewWrapperCell : UIPickerTableViewCell

{

    UIView *_wrappedView;

    UIView *_wrappedViewContainer;

    struct CGSize _wrappedViewSize;

}



- (id)_anyDateLabel;

- (void)_commonInit;

- (void)_setIsCenterCell:(_Bool)arg1 shouldModifyAlphaOfView:(_Bool)arg2;

- (void)_updateWrappedView;

- (void)_updateWrappedViewFrame;

- (void)dealloc;

- (id)initWithFrame:(struct CGRect)arg1;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

- (void)prepareForReuse;

- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;

@property(retain, nonatomic) UIView *wrappedView;



@end


