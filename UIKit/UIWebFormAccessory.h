/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIInputView.h"


@class UIBarButtonItem, UISegmentedControl, UIToolbar;



@interface UIWebFormAccessory : UIInputView

{

    UIToolbar *_leftToolbar;

    UIToolbar *_rightToolbar;

    UIBarButtonItem *_doneButton;

    UIBarButtonItem *_flexibleSpaceItem;

    UIBarButtonItem *_previousItem;

    UIBarButtonItem *_nextItem;

    UISegmentedControl *_tab;

    UIBarButtonItem *_autofill;

    UIBarButtonItem *_clearButton;

    id <UIWebFormAccessoryDelegate> delegate;

}



+ (id)toolbarWithItems:(id)arg1;

- (void)_applyTreatmentToAutoFillLabel;

- (id)_autoFillButton;

@property(retain, nonatomic) UIBarButtonItem *_autofill; // @synthesize _autofill;

@property(retain, nonatomic) UIBarButtonItem *_clearButton; // @synthesize _clearButton;

- (void)_nextTapped:(id)arg1;

- (void)_orientationDidChange:(id)arg1;

- (void)_previousTapped:(id)arg1;

- (void)_refreshAutofillPresentation;

@property(retain, nonatomic) UISegmentedControl *_tab; // @synthesize _tab;

- (void)_tabSegmentedControlDidChange:(id)arg1;

- (void)_updateFrame;

- (void)autoFill:(id)arg1;

- (void)clear:(id)arg1;

- (void)dealloc;

@property(nonatomic) id <UIWebFormAccessoryDelegate> delegate; // @synthesize delegate;

- (void)done:(id)arg1;

- (void)hideAutoFillButton;

- (id)initWithFrame:(struct CGRect)arg1;

@property(nonatomic, getter=isNextEnabled) _Bool nextEnabled;

@property(nonatomic, getter=isPreviousEnabled) _Bool previousEnabled;

- (void)layoutSubviews;

- (void)setClearVisible:(_Bool)arg1;

- (void)showAutoFillButton;

- (void)showAutoFillButtonWithTitle:(id)arg1;



@end


