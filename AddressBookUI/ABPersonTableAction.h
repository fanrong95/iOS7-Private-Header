/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "ABStyleProviding.h"



@class NSString, UIButton, UIView;



@interface ABPersonTableAction : NSObject <ABStyleProviding>

{

    NSString *_title;

    NSString *_shortTitle;

    _Bool _displaysShortTitle;

    _Bool _indicatesFaceTimeHistory;

    NSString *_detailText;

    NSString *_differentiationSheetTitle;

    _Bool _allowDifferentiationSheet;

    id _target;

    SEL _selector;

    int _style;

    int _property;

    struct __CFArray *_properties;

    long long _grouping;

    long long _ordering;

    UIButton *_button;

    UIButton *_FMFButton;

    UIView *_customContentView;

    id <ABPersonTableActionDelegate> _delegate;

}



@property(retain, nonatomic) UIView *actionContentView; // @synthesize actionContentView=_customContentView;

@property(nonatomic) _Bool allowDifferentiationSheet; // @synthesize allowDifferentiationSheet=_allowDifferentiationSheet;

@property(readonly, nonatomic) UIButton *button;

- (void)buttonClicked:(id)arg1;

- (long long)compareOrderingToAction:(id)arg1;

- (void)dealloc;

@property(nonatomic) id <ABPersonTableActionDelegate> delegate; // @synthesize delegate=_delegate;

- (id)description;

@property(readonly, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;

@property(copy, nonatomic) NSString *differentiationSheetTitle; // @synthesize differentiationSheetTitle=_differentiationSheetTitle;

@property(nonatomic) _Bool displaysShortTitle; // @synthesize displaysShortTitle=_displaysShortTitle;

@property(readonly, nonatomic) UIButton *existingButton; // @synthesize existingButton=_button;

@property(nonatomic) long long grouping; // @synthesize grouping=_grouping;

@property(nonatomic) _Bool indicatesFaceTimeHistory; // @synthesize indicatesFaceTimeHistory=_indicatesFaceTimeHistory;

- (id)initWithTitle:(id)arg1 detailText:(id)arg2 style:(int)arg3 target:(id)arg4 selector:(SEL)arg5;

- (id)initWithTitle:(id)arg1 shortTitle:(id)arg2 detailText:(id)arg3 style:(int)arg4 target:(id)arg5 selector:(SEL)arg6 property:(int)arg7;

- (id)initWithTitle:(id)arg1 shortTitle:(id)arg2 target:(id)arg3 selector:(SEL)arg4 property:(int)arg5;

- (id)initWithTitle:(id)arg1 style:(int)arg2 target:(id)arg3 selector:(SEL)arg4;

- (void)modifyDetailText:(id)arg1;

@property(nonatomic) long long ordering; // @synthesize ordering=_ordering;

- (void)performWithSender:(id)arg1 person:(id)arg2 property:(int)arg3 identifier:(int)arg4;

- (void)prepareButton:(id)arg1 forValueAtIndex:(long long)arg2 inPropertyGroup:(id)arg3;

@property(nonatomic) struct __CFArray *properties; // @synthesize properties=_properties;

@property(readonly, nonatomic) int property; // @synthesize property=_property;

@property(readonly, nonatomic) SEL selector; // @synthesize selector=_selector;

- (void)setFMFActionButton:(id)arg1;

@property(readonly, nonatomic) NSString *shortTitle; // @synthesize shortTitle=_shortTitle;

@property(readonly, nonatomic) int style; // @synthesize style=_style;

- (id)styleProvider;

@property(readonly, nonatomic) id target; // @synthesize target=_target;

@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;



@end


