/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CKBalloonImageView.h"


#import "UIGestureRecognizerDelegate.h"



@class CKBalloonControl, CKManualUpdater, NSObject<CKBalloonViewDelegate>, UIColor, UILongPressGestureRecognizer, UITapGestureRecognizer;



@interface CKBalloonView : CKBalloonImageView <UIGestureRecognizerDelegate>

{

    CKBalloonControl *_control;

    BOOL _orientation;

    _Bool _hasTail;

    _Bool _filled;

    _Bool _showingMenu;

    _Bool _canUseOpaqueMask;

    _Bool _hasOverlay;

    _Bool _wantsSkinnyMask;

    NSObject<CKBalloonViewDelegate> *_delegate;

    UITapGestureRecognizer *_doubleTapGestureRecognizer;

    UILongPressGestureRecognizer *_longPressGestureRecognizer;

    CKManualUpdater *_displayUpdater;

    CKBalloonImageView *_overlay;

    struct UIEdgeInsets _textAlignmentInsets;

}



- (void)_dismissOverlay;

- (_Bool)becomeFirstResponder;

- (_Bool)canBecomeFirstResponder;

- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;

@property(nonatomic) _Bool canUseOpaqueMask; // @synthesize canUseOpaqueMask=_canUseOpaqueMask;

- (void)configureForMessagePart:(id)arg1;

- (void)dealloc;

@property(nonatomic) NSObject<CKBalloonViewDelegate> *delegate; // @synthesize delegate=_delegate;

- (SEL)delegateActionForAction:(SEL)arg1;

- (id)description;

@property(retain, nonatomic) CKManualUpdater *displayUpdater; // @synthesize displayUpdater=_displayUpdater;

- (void)doDoubleTapOrLongPress;

- (void)doubleTap:(id)arg1 forEvent:(id)arg2;

@property(readonly, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer; // @synthesize doubleTapGestureRecognizer=_doubleTapGestureRecognizer;

- (void)forwardInvocation:(id)arg1;

@property(nonatomic) _Bool hasOverlay; // @synthesize hasOverlay=_hasOverlay;

@property(nonatomic) _Bool hasTail; // @synthesize hasTail=_hasTail;

- (id)initWithFrame:(struct CGRect)arg1;

@property(nonatomic, getter=isFilled) _Bool filled; // @synthesize filled=_filled;

@property(nonatomic, getter=isShowingMenu) _Bool showingMenu; // @synthesize showingMenu=_showingMenu;

- (void)layoutSubviews;

- (void)longPress:(id)arg1 forEvent:(id)arg2;

@property(readonly, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;

- (id)methodSignatureForSelector:(SEL)arg1;

@property(nonatomic) BOOL orientation; // @synthesize orientation=_orientation;

@property(retain, nonatomic) CKBalloonImageView *overlay; // @synthesize overlay=_overlay;

@property(readonly, nonatomic) UIColor *overlayColor;

- (void)prepareForDisplay;

- (void)prepareForDisplayIfNeeded;

- (void)prepareForReuse;

- (_Bool)resignFirstResponder;

- (void)setHasOverlay:(_Bool)arg1 autoDismiss:(_Bool)arg2;

- (void)setNeedsPrepareForDisplay;

@property(nonatomic) struct UIEdgeInsets textAlignmentInsets; // @synthesize textAlignmentInsets=_textAlignmentInsets;

@property(nonatomic) _Bool wantsSkinnyMask; // @synthesize wantsSkinnyMask=_wantsSkinnyMask;

- (void)showMenu;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(struct UIEdgeInsets *)arg2;

- (void)tap:(id)arg1 forEvent:(id)arg2;

- (void)touchCancelForControl:(id)arg1;

- (void)touchDown:(id)arg1 forEvent:(id)arg2;

- (void)willHideMenu:(id)arg1;

- (void)willShowMenu:(id)arg1;



@end


