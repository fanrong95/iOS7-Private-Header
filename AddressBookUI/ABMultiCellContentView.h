/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "ABPersonCellContentView.h"


#import "ABResponderDelegate.h"



@class ABAbstractPropertyGroup, UITableViewCell, UIView;



@interface ABMultiCellContentView : ABPersonCellContentView <ABResponderDelegate>

{

    UITableViewCell *_cell;

    _Bool _usesCustomPropertyCell;

    UIView *_labelDivider;

    _Bool _isImportant;

    _Bool _isEmphasized;

    _Bool _isHighlighted;

    _Bool _allowsEditing;

    _Bool _isEditing;

    _Bool _shouldIgnoreEndEditing;

    int _property;

    ABAbstractPropertyGroup *_pg;

    id _pgInfo;

    _Bool _needsReload;

    UIView *_touchedView;

    id <ABMultiCellContentViewUpdateDelegate> _updateDelegate;

    int _abCellStyle;

}



+ (Class)classForProperty:(int)arg1;

+ (struct CGSize)layoutSubviewsForView:(id)arg1 usingSize:(struct CGSize)arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(_Bool)arg6;

+ (id)reuseIdentifierForPropertyGroup:(id)arg1 info:(id)arg2;

+ (void)setupTextField:(id)arg1 withStyleProvider:(id)arg2;

+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 forPropertyGroup:(id)arg2 info:(id)arg3 styleProvider:(id)arg4 whenEditing:(_Bool)arg5;

- (_Bool)ABTabToNextResponder:(_Bool)arg1 fromView:(id)arg2;

@property(nonatomic) int abCellStyle; // @synthesize abCellStyle=_abCellStyle;

@property(nonatomic) _Bool allowsEditing; // @synthesize allowsEditing=_allowsEditing;

- (struct CGRect)backgroundRectForView:(id)arg1;

- (id)badgeIconWhenEditing:(_Bool)arg1;

- (_Bool)becomeFirstResponder;

- (_Bool)canBecomeFirstResponder;

- (_Bool)canBeginEditingAnytime;

- (_Bool)canHandleProperty:(int)arg1;

- (_Bool)canResignFirstResponder;

@property(nonatomic) UITableViewCell *cell; // @synthesize cell=_cell;

- (void)clearTextFieldDelegates:(id)arg1;

- (void)dealloc;

- (id)displayHighlightedTextColor;

- (id)displayTextColor;

- (void)entryField:(id)arg1 didEndEditingForKey:(id)arg2;

- (void)entryField:(id)arg1 valueDidChange:(id)arg2 forKey:(id)arg3;

- (void)entryFieldBeginAttemptBecomeFirstResponder:(id)arg1;

- (void)entryFieldDidBeginEditing:(id)arg1;

- (void)entryFieldEndAttemptBecomeFirstResponder:(id)arg1;

- (_Bool)entryFieldShouldBeginEditing:(id)arg1;

- (_Bool)entryFieldShouldEndEditing:(id)arg1;

- (_Bool)entryFieldShouldReturn:(id)arg1;

- (struct CGRect)focusRectForView:(id)arg1;

- (struct CGRect)frameForLabelDivider;

- (id)hitTestForTouches:(id)arg1 withEvent:(id)arg2;

- (id)init;

- (id)initCommonWithFrame:(struct CGRect)arg1 property:(int)arg2;

- (id)initWithFrame:(struct CGRect)arg1;

- (id)initWithFrame:(struct CGRect)arg1 property:(int)arg2;

@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_isEditing;

@property(nonatomic, getter=isEmphasized) _Bool emphasized; // @synthesize emphasized=_isEmphasized;

- (_Bool)isHighlighted;

@property(nonatomic, getter=isImportant) _Bool important; // @synthesize important=_isImportant;

- (_Bool)isValidValue:(id)arg1;

- (id)labelTextColorWhenEditing:(_Bool)arg1;

- (void)layoutLabel;

- (void)layoutSubviews;

- (id)newTextFieldWithFrame:(struct CGRect)arg1 tag:(long long)arg2 keyboardSettings:(id)arg3 delegate:(id)arg4;

- (id)pickerView;

@property(readonly, nonatomic) ABAbstractPropertyGroup *propertyGroup; // @synthesize propertyGroup=_pg;

@property(retain, nonatomic) id propertyGroupInfo; // @synthesize propertyGroupInfo=_pgInfo;

- (struct CGRect)rectForView:(id)arg1;

- (void)reload;

- (void)reloadFromModel;

- (void)reloadIfNeeded:(_Bool)arg1 reloadFromModel:(_Bool)arg2;

- (void)reloadLabelFromModel;

- (_Bool)resignFirstResponder;

- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;

- (void)setHighlighted:(_Bool)arg1;

- (void)setKeyboardSettings:(id)arg1 onTextField:(id)arg2;

- (void)setLabelText:(id)arg1;

- (void)setPropertyGroup:(id)arg1 andInfo:(id)arg2;

@property(nonatomic) _Bool shouldIgnoreEndEditing; // @synthesize shouldIgnoreEndEditing=_shouldIgnoreEndEditing;

@property(nonatomic) id <ABMultiCellContentViewUpdateDelegate> updateDelegate; // @synthesize updateDelegate=_updateDelegate;

@property(nonatomic) _Bool usesCustomPropertyCell; // @synthesize usesCustomPropertyCell=_usesCustomPropertyCell;

- (_Bool)shouldSendTouchesToSuperviewForHitView:(id)arg1;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1 forPropertyGroup:(id)arg2 info:(id)arg3 styleProvider:(id)arg4 whenEditing:(_Bool)arg5;

- (_Bool)tabToNextResponder:(_Bool)arg1 fromView:(id)arg2;

- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;

- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

- (void)updateSubviewsForNewStateAnimated:(_Bool)arg1;

- (id)viewForFirstResponder;

- (_Bool)wantsLabelDivider;



@end


