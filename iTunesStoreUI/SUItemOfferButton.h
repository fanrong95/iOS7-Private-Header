/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIButton.h"



@class NSString;



@interface SUItemOfferButton : UIButton

{

    long long _animationHorizontalAlignment;

    NSString *_buttonStyle;

    NSString *_confirmationTitle;

    _Bool _isShowingConfirmation;

    NSString *_offerTitle;

    _Bool _shouldShowConfirmation;

}



+ (double)defaultAnimationDuration;

+ (id)itemOfferButtonStyleForItem:(id)arg1 offer:(id)arg2;

- (void)_applyConfiguration:(CDStruct_f9159201)arg1;

- (CDStruct_f9159201)_configurationForStyle:(id)arg1;

- (void)_reloadButton;

@property(nonatomic) long long animationHorizontalAlignment; // @synthesize animationHorizontalAlignment=_animationHorizontalAlignment;

- (_Bool)configureForItem:(id)arg1 offer:(id)arg2;

@property(copy, nonatomic) NSString *confirmationTitle; // @synthesize confirmationTitle=_confirmationTitle;

- (void)dealloc;

- (id)initWithFrame:(struct CGRect)arg1;

@property(nonatomic, getter=isShowingConfirmation) _Bool showingConfirmation; // @synthesize showingConfirmation=_isShowingConfirmation;

@property(copy, nonatomic) NSString *itemOfferButtonStyle; // @synthesize itemOfferButtonStyle=_buttonStyle;

- (void)layoutSubviews;

@property(copy, nonatomic) NSString *offerTitle; // @synthesize offerTitle=_offerTitle;

@property(nonatomic) _Bool shouldShowConfirmation; // @synthesize shouldShowConfirmation=_shouldShowConfirmation;

- (void)setShowingConfirmation:(_Bool)arg1 duration:(double)arg2;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;



@end


