/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"


#import "NSCoding.h"

#import "UIGestureRecognizerDelegate.h"

#import "UIScrollViewDelegate.h"



@class NSIndexPath, NSString, NSTimer, UIColor, UIControl, UIImage, UIImageView, UILabel, UILongPressGestureRecognizer, UIScrollView, UITableView, UITableViewCellDeleteConfirmationView, UITapGestureRecognizer, UITextField, _UITableViewCellSeparatorView;



@interface UITableViewCell : UIView <UIScrollViewDelegate, NSCoding, UIGestureRecognizerDelegate>

{

    UITableView *_tableView;

    id _layoutManager;

    id _target;

    SEL _editAction;

    SEL _accessoryAction;

    id _oldEditingData;

    id _editingData;

    double _rightMargin;

    long long _indentationLevel;

    double _indentationWidth;

    NSString *_reuseIdentifier;

    UIView *_contentView;

    UIImageView *_imageView;

    UILabel *_textLabel;

    UILabel *_detailTextLabel;

    UIView *_backgroundView;

    UIView *_selectedBackgroundView;

    UIView *_multipleSelectionBackgroundView;

    UIView *_selectedOverlayView;

    double _selectionFadeDuration;

    UIColor *_backgroundColor;

    UIColor *_separatorColor;

    UIColor *_topShadowColor;

    UIColor *_bottomShadowColor;

    UIColor *_sectionBorderColor;

    UIView *_floatingSeparatorView;

    UIView *_topShadowAnimationView;

    UIView *_bottomShadowAnimationView;

    id _badge;

    struct __CFDictionary *_unhighlightedStates;

    id _highlightingSupport;

    id _selectionSegueTemplate;

    id _accessoryActionSegueTemplate;

    struct {

        unsigned int showingDeleteConfirmation:1;

        unsigned int separatorStyle:3;

        unsigned int selectionStyle:3;

        unsigned int selectionFadeFraction:11;

        unsigned int editing:1;

        unsigned int editingStyle:3;

        unsigned int accessoryType:3;

        unsigned int editingAccessoryType:3;

        unsigned int showsAccessoryWhenEditing:1;

        unsigned int showsReorderControl:1;

        unsigned int showDisclosure:1;

        unsigned int showTopSeparator:1;

        unsigned int hideTopSeparatorDuringReordering:1;

        unsigned int disclosureClickable:1;

        unsigned int disclosureStyle:1;

        unsigned int showingRemoveControl:1;

        unsigned int sectionLocation:3;

        unsigned int tableViewStyle:1;

        unsigned int shouldIndentWhileEditing:1;

        unsigned int fontSet:1;

        unsigned int usingDefaultSelectedBackgroundView:1;

        unsigned int wasSwiped:1;

        unsigned int highlighted:1;

        unsigned int separatorDirty:1;

        unsigned int drawn:1;

        unsigned int drawingDisabled:1;

        unsigned int style:12;

        unsigned int showingMenu:1;

        unsigned int clipsContents:1;

        unsigned int animatingSelection:1;

        unsigned int backgroundColorSet:1;

        unsigned int needsSetup:1;

        unsigned int dontDrawTopShadow:1;

        unsigned int usingMultiselectbackgroundView:1;

        unsigned int layoutLoopCounter:2;

        unsigned int isPigglyWigglyCell;

        unsigned int deleteAnimationInProgress:1;

        unsigned int deleteCancelationAnimationInProgress:1;

        unsigned int animating:1;

        unsigned int shouldHaveFullLengthBottomSeparator:1;

        unsigned int shouldHaveFullLengthTopSeparator:1;

        unsigned int drawsSeparatorAtTopOfSection:1;

        unsigned int drawsSeparatorAtBottomOfSection:1;

        unsigned int separatorBackdropOverlayBlendMode:3;

        unsigned int separatorDrawsInVibrantLightMode:1;

        unsigned int separatorHidden:1;

    } _tableCellFlags;

    UIControl *_accessoryView;

    UIControl *_editingAccessoryView;

    UIView *_customAccessoryView;

    UIView *_customEditingAccessoryView;

    _UITableViewCellSeparatorView *_separatorView;

    _UITableViewCellSeparatorView *_topSeparatorView;

    UIView *_topShadowView;

    UITextField *_editableTextField;

    double _lastSelectionTime;

    NSTimer *_deselectTimer;

    double _textFieldOffset;

    double _indexBarWidth;

    struct UIEdgeInsets _separatorInset;

    struct UIEdgeInsets _backgroundInset;

    SEL _returnAction;

    UIColor *_selectionTintColor;

    UIColor *_accessoryTintColor;

    UIImage *_reorderControlImage;

    UILongPressGestureRecognizer *_menuGesture;

    NSIndexPath *_representedIndexPath;

    _Bool _isPigglyWigglyCell;

    UITableViewCellDeleteConfirmationView *_swipeToDeleteConfirmationView;

    UITapGestureRecognizer *_swipeToDeleteCancelationGesture;

    UIScrollView *_wrapperView;

    UIView *_clearBlendingView;

    double _swipeToDeleteDistancePulled;

    double _sectionCornerRadius;

    double _sectionBorderWidth;

}



+ (id)_defaultTopShadowColor;

+ (void)initialize;

- (SEL)_accessoryAction;

- (id)_accessoryTintColor;

- (id)_accessoryView:(_Bool)arg1;

- (void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;

- (void)_animateFloatingSeparatorForInsertion:(_Bool)arg1 withRowAnimation:(long long)arg2;

- (void)_animateInnerShadowForInsertion:(_Bool)arg1 withRowAnimation:(long long)arg2;

- (void)_animateSwipeCancelation;

- (_Bool)_backgroundColorSet;

- (struct UIEdgeInsets)_backgroundInset;

- (id)_backgroundView:(_Bool)arg1;

- (id)_badge;

- (id)_badge:(_Bool)arg1;

- (id)_badgeText;

- (void)_beginSwiping;

- (_Bool)_canDoSeparatorLayout;

- (_Bool)_canDrawContent;

- (void)_cancelInternalPerformRequests;

- (id)_checkmarkImage:(_Bool)arg1;

- (void)_clearOpaqueViewState:(id)arg1;

- (id)_contentBackgroundColor;

- (id)_createRemoveControlForStyle:(long long)arg1;

- (void)_createReorderControlIfNeeded;

- (id)_currentAccessoryView:(_Bool)arg1;

- (id)_customAccessoryView:(_Bool)arg1;

- (id)_customEditingAccessoryView:(_Bool)arg1;

- (id)_defaultAccessoryView;

- (id)_defaultFont;

- (void)_delayedDeselect;

- (struct CGRect)_delegateConfirmationRect;

- (id)_deleteConfirmationView;

- (void)_descendent:(id)arg1 didMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;

- (void)_descendent:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;

- (void)_deselectAnimationFinished;

- (id)_detailDisclosureImage:(_Bool)arg1;

- (id)_detailTextLabel;

- (id)_detailTextLabel:(_Bool)arg1;

- (void)_didCreateContentView;

- (id)_disclosureImage:(_Bool)arg1;

- (id)_disclosurePressedImage:(_Bool)arg1;

- (void)_drawContentInRect:(struct CGRect)arg1 selected:(_Bool)arg2;

- (void)_drawSeparatorInRect:(struct CGRect)arg1;

- (_Bool)_drawsSeparatorAtBottomOfSection;

- (_Bool)_drawsSeparatorAtTopOfSection;

- (_Bool)_drawsTopSeparatorDuringReordering;

- (_Bool)_drawsTopShadow;

- (id)_editableTextField;

- (id)_editableTextField:(_Bool)arg1;

- (id)_editingAccessoryView:(_Bool)arg1;

- (double)_editingButtonOffset;

- (void)_editingTransitionAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;

- (id)_encodableSubviews;

- (void)_endSwiping:(_Bool)arg1;

- (void)_finishedFadingGrabber:(id)arg1 finished:(_Bool)arg2;

- (_Bool)_gestureRecognizerShouldBegin:(id)arg1;

- (void)_grabberBeganReorder:(id)arg1;

- (void)_grabberDragged:(id)arg1 yDelta:(float)arg2;

- (void)_grabberReleased:(id)arg1;

- (void)_handleSwipeDeleteCancelation:(id)arg1;

- (_Bool)_hasAccessoryView;

- (_Bool)_hasEditingAccessoryView;

- (struct CGSize)_imageInsetSize;

- (id)_imageView;

- (id)_imageView:(_Bool)arg1;

- (double)_indexBarWidth;

- (id)_indexPath;

- (_Bool)_insetsBackground;

- (_Bool)_isAnimating;

- (_Bool)_isCurrentlyConsideredHighlighted;

- (_Bool)_isDeleteAnimationInProgress;

- (_Bool)_isHighlighted;

- (_Bool)_isInModalViewController;

- (_Bool)_isMultiselecting;

- (_Bool)_isPigglyWigglyCell;

- (_Bool)_isReorderable;

- (_Bool)_isUsingOldStyleMultiselection;

- (void)_layoutSubviewsAnimated:(_Bool)arg1;

- (void)_longPressGestureRecognized:(id)arg1;

- (double)_marginWidth;

- (void)_menuDismissed:(id)arg1;

- (id)_multiselectBackgroundColor;

- (void)_multiselectColorChanged;

- (_Bool)_needsSetup;

- (id)_newAccessoryView:(_Bool)arg1;

- (void)_performAction:(SEL)arg1 sender:(id)arg2;

- (long long)_popoverControllerStyle;

- (void)_populateArchivedSubviews:(id)arg1;

- (void)_releaseRemoveControl;

- (void)_releaseReorderingControl;

- (id)_removeControl;

- (void)_removeFloatingSeparator;

- (void)_removeInnerShadow;

- (void)_removeRemoveControl;

- (id)_reorderControlImage;

- (id)_reorderingControl;

- (id)_reorderingSeparatorView;

- (void)_resetSelectionTimer;

- (double)_rightMarginWidth;

- (void)_saveOpaqueViewState:(id)arg1;

- (id)_scriptingInfo;

- (double)_sectionBorderWidth;

- (id)_selectedBackgroundView:(_Bool)arg1;

- (long long)_separatorBackdropOverlayBlendMode;

- (_Bool)_separatorDrawsInVibrantLightMode;

- (struct CGRect)_separatorFrame;

- (_Bool)_separatorHidden;

- (void)_setAccessoryAction:(SEL)arg1;

- (void)_setAccessoryTintColor:(id)arg1;

- (void)_setAnimating:(_Bool)arg1;

- (void)_setAnimating:(_Bool)arg1 clippingAdjacentCells:(_Bool)arg2;

- (void)_setBackgroundInset:(struct UIEdgeInsets)arg1;

- (void)_setBadgeText:(id)arg1;

- (void)_setDrawsSeparatorAtBottomOfSection:(_Bool)arg1;

- (void)_setDrawsSeparatorAtTopOfSection:(_Bool)arg1;

- (void)_setDrawsTopSeparator:(_Bool)arg1;

- (void)_setDrawsTopSeparatorDuringReordering:(_Bool)arg1;

- (void)_setDrawsTopShadow:(_Bool)arg1;

- (void)_setEditingStyle:(long long)arg1;

- (void)_setFont:(id)arg1 layout:(_Bool)arg2;

- (void)_setGrabberHidden:(_Bool)arg1;

- (void)_setHiddenForReuse:(_Bool)arg1;

- (void)_setIndexBarWidth:(double)arg1;

- (void)_setIndexPath:(id)arg1;

- (void)_setIsPigglyWigglyCell:(_Bool)arg1;

- (void)_setMarginWidth:(double)arg1;

- (void)_setMultiselecting:(_Bool)arg1;

- (void)_setNeedsSetup:(_Bool)arg1;

- (void)_setOpaque:(_Bool)arg1 forSubview:(id)arg2;

- (void)_setReorderControlImage:(id)arg1;

- (void)_setReordering:(_Bool)arg1;

- (void)_setRightMarginWidth:(double)arg1;

- (void)_setSectionBorderWidth:(double)arg1;

- (void)_setSelectionStyle:(long long)arg1 selectionTintColor:(id)arg2;

- (void)_setSeparatorBackdropOverlayBlendMode:(long long)arg1;

- (void)_setSeparatorDrawsInVibrantLightMode:(_Bool)arg1;

- (void)_setSeparatorDrawsInVibrantLightModeUIAppearance:(id)arg1;

- (void)_setSeparatorHidden:(_Bool)arg1;

- (void)_setShouldHaveFullLengthBottomSeparator:(_Bool)arg1;

- (void)_setShouldHaveFullLengthTopSeparator:(_Bool)arg1;

- (void)_setShouldIndentWhileEditing:(_Bool)arg1;

- (void)_setShowingDeleteConfirmation:(_Bool)arg1;

- (void)_setShowsReorderControl:(_Bool)arg1;

- (void)_setTableBackgroundCGColor:(struct CGColor *)arg1 withSystemColorName:(id)arg2;

- (void)_setTableView:(id)arg1;

- (void)_setTarget:(id)arg1;

- (void)_setupMenuGesture;

- (void)_setupSelectedBackgroundView;

- (void)_setupTableViewCellCommon;

- (_Bool)_shouldHaveFullLengthBottomSeparator;

- (_Bool)_shouldHaveFullLengthTopSeparator;

- (_Bool)_shouldSaveOpaqueStateForView:(id)arg1;

- (_Bool)_showFullLengthTopSeparatorForTopOfSection;

- (void)_showReorderControl;

- (_Bool)_showSeparatorAtTopOfSection;

- (void)_startToEditTextField;

- (void)_swipeAccessoryButtonPushed;

- (void)_swipeDeleteButtonPushed;

- (id)_swipeToDeleteConfirmationView;

- (void)_syncAccessoryViewsIfNecessary;

- (id)_tableView;

- (void)_tableViewDidUpdateMarginWidth;

- (id)_target;

- (struct CGSize)_textInsetSize;

- (id)_textLabel;

- (id)_textLabel:(_Bool)arg1;

- (id)_tintedDisclosureImagePressed:(_Bool)arg1;

- (id)_titleForDeleteConfirmationButton;

- (struct CGRect)_topSeparatorFrame;

- (void)_topShadowDidFadeOut;

- (id)_topShadowView:(_Bool)arg1;

- (void)_uiRemoveControlMinusButtonHideAnimationDone:(id)arg1;

- (void)_updateAndCacheBackgroundColorForHighlightIgnoringSelection:(_Bool)arg1;

- (void)_updateCellMaskViewsForView:(id)arg1 backdropView:(id)arg2;

- (void)_updateContentClip;

- (void)_updateFullWidthSwipeDeletionView;

- (void)_updateHighlightColors;

- (void)_updateHighlightColorsForAnimationHalfwayPoint;

- (void)_updateHighlightColorsForView:(id)arg1 highlighted:(_Bool)arg2;

- (void)_updateSeparatorContent;

- (void)_updateSeparatorContent:(_Bool)arg1;

- (void)_updateSwipeWithDistancePulled:(double)arg1;

- (void)_updateTopShadowView:(_Bool)arg1;

- (void)_updateViewsForDeleteButton;

- (void)_updateWrapperContentInset;

- (_Bool)_usesRoundedGroups;

- (void)_willBeDeleted;

- (id)_wrapperView;

- (SEL)accessoryAction;

- (id)accessoryActionSegueTemplate;

- (struct CGRect)accessoryRectForBounds:(struct CGRect)arg1 accessoryView:(id)arg2 isCustom:(_Bool)arg3;

@property(nonatomic) long long accessoryType;

@property(retain, nonatomic) UIView *accessoryView;

- (id)backgroundColor;

- (struct CGRect)backgroundRectForBounds:(struct CGRect)arg1;

@property(retain, nonatomic) UIView *backgroundView;

- (id)bottomShadowColor;

- (void)bringSubviewToFront:(id)arg1;

- (_Bool)canBecomeFirstResponder;

- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;

- (_Bool)clipsContents;

- (struct CGRect)contentRectForBounds:(struct CGRect)arg1;

- (struct CGRect)contentRectForState:(unsigned long long)arg1;

@property(readonly, nonatomic) UIView *contentView;

- (void)copy:(id)arg1;

- (unsigned long long)currentStateMask;

- (void)cut:(id)arg1;

- (void)dealloc;

- (void)deleteConfirmationControlWasCancelled:(id)arg1;

- (void)deleteConfirmationControlWasClicked:(id)arg1;

@property(readonly, nonatomic) UILabel *detailTextLabel;

- (void)didMoveToSuperview;

- (void)didTransitionToState:(unsigned long long)arg1;

- (_Bool)drawingEnabled;

- (SEL)editAction;

- (void)editControlWasClicked:(id)arg1;

- (struct CGRect)editRectForBounds:(struct CGRect)arg1;

- (id)editableTextField;

@property(nonatomic) long long editingAccessoryType;

@property(retain, nonatomic) UIView *editingAccessoryView;

- (id)editingData:(_Bool)arg1;

@property(readonly, nonatomic) long long editingStyle;

- (void)encodeWithCoder:(id)arg1;

- (id)font;

- (_Bool)hidesAccessoryWhenEditing;

- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

- (id)image;

- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;

@property(readonly, nonatomic) UIImageView *imageView;

@property(nonatomic) long long indentationLevel;

@property(nonatomic) double indentationWidth;

- (id)init;

- (id)initWithCoder:(id)arg1;

- (id)initWithFrame:(struct CGRect)arg1;

- (id)initWithFrame:(struct CGRect)arg1 reuseIdentifier:(id)arg2;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

- (void)insertControl:(id)arg1 shouldInsertWithTarget:(id)arg2;

- (_Bool)isAtLeastHalfSelected;

@property(nonatomic, getter=isEditing) _Bool editing;

- (_Bool)isElementAccessibilityExposedToInterfaceBuilder;

@property(nonatomic, getter=isHighlighted) _Bool highlighted;

@property(nonatomic, getter=isSelected) _Bool selected;

- (id)layoutManager;

- (void)layoutSubviews;

- (long long)lineBreakMode;

@property(retain, nonatomic) UIView *multipleSelectionBackgroundView;

- (id)oldEditingData;

- (void)paste:(id)arg1;

- (void)prepareForReuse;

- (struct CGRect)removeControl:(id)arg1 endFrameForTarget:(id)arg2;

- (struct CGRect)removeControl:(id)arg1 startFrameForTarget:(id)arg2;

- (void)removeControl:(id)arg1 wasCanceledForTarget:(id)arg2;

- (void)removeControl:(id)arg1 willRemoveTarget:(id)arg2;

- (void)removeControlWillHideRemoveConfirmation:(id)arg1;

- (void)removeEditingData;

- (void)removeFromSuperview;

- (struct CGRect)reorderRectForBounds:(struct CGRect)arg1;

- (SEL)returnAction;

@property(readonly, nonatomic) NSString *reuseIdentifier;

- (void)scrollViewDidEndDecelerating:(id)arg1;

- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;

- (void)scrollViewDidEndScrollingAnimation:(id)arg1;

- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;

- (id)sectionBorderColor;

- (int)sectionLocation;

@property(retain, nonatomic) UIView *selectedBackgroundView;

- (void)selectedBackgroundViewChange:(id)arg1 finished:(id)arg2 context:(id)arg3;

- (id)selectedImage;

- (id)selectedOverlayView;

- (id)selectedTextColor;

- (double)selectionFadeDuration;

- (float)selectionPercent;

- (id)selectionSegueTemplate;

@property(nonatomic) long long selectionStyle;

- (id)selectionTintColor;

- (void)sendSubviewToBack:(id)arg1;

- (id)separatorColor;

@property(nonatomic) struct UIEdgeInsets separatorInset;

- (long long)separatorStyle;

- (void)setAccessoryAction:(SEL)arg1;

- (void)setAccessoryActionSegueTemplate:(id)arg1;

- (void)setBackgroundColor:(id)arg1;

- (void)setBottomShadowColor:(id)arg1;

- (void)setClipsContents:(_Bool)arg1;

- (void)setDrawingEnabled:(_Bool)arg1;

- (void)setEditAction:(SEL)arg1;

- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;

- (void)setEditingStyle:(long long)arg1;

- (void)setFont:(id)arg1;

- (void)setFrame:(struct CGRect)arg1;

- (void)setHidesAccessoryWhenEditing:(_Bool)arg1;

- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;

- (void)setImage:(id)arg1;

- (void)setLayoutManager:(id)arg1;

- (void)setLineBreakMode:(long long)arg1;

- (void)setOldEditingData:(id)arg1;

- (void)setPlaceHolderValue:(id)arg1;

- (void)setReturnAction:(SEL)arg1;

- (void)setReuseIdentifier:(id)arg1;

- (void)setSectionBorderColor:(id)arg1;

- (void)setSectionLocation:(int)arg1;

- (void)setSectionLocation:(int)arg1 animated:(_Bool)arg2;

- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;

- (void)setSelectedBackgroundView:(id)arg1 animated:(_Bool)arg2;

- (void)setSelectedImage:(id)arg1;

- (void)setSelectedTextColor:(id)arg1;

- (void)setSelectionFadeDuration:(double)arg1;

- (void)setSelectionSegueTemplate:(id)arg1;

- (void)setSelectionTintColor:(id)arg1;

- (void)setSeparatorColor:(id)arg1;

- (void)setSeparatorStyle:(long long)arg1;

@property(nonatomic) _Bool shouldIndentWhileEditing;

- (void)setShowingDeleteConfirmation:(_Bool)arg1;

@property(nonatomic) _Bool showsReorderControl;

- (void)setTableBackgroundColor:(id)arg1;

- (void)setTableViewStyle:(long long)arg1;

- (void)setTarget:(id)arg1;

- (void)setText:(id)arg1;

- (void)setTextAlignment:(long long)arg1;

- (void)setTextColor:(id)arg1;

- (void)setTextFieldOffset:(double)arg1;

- (void)setTopShadowColor:(id)arg1;

- (void)setWasSwiped:(_Bool)arg1;

- (void)showSelectedBackgroundView:(_Bool)arg1 animated:(_Bool)arg2;

@property(readonly, nonatomic) _Bool showingDeleteConfirmation;

- (long long)style;

- (id)tableBackgroundColor;

- (long long)tableViewStyle;

- (id)target;

- (id)text;

- (long long)textAlignment;

- (id)textColor;

- (void)textFieldDidBecomeFirstResponder:(id)arg1;

- (double)textFieldOffset;

@property(readonly, nonatomic) UILabel *textLabel;

- (struct CGRect)textRectForContentRect:(struct CGRect)arg1;

- (id)topShadowColor;

- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;

- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

- (_Bool)wasSwiped;

- (void)willMoveToSuperview:(id)arg1;

- (void)willTransitionToState:(unsigned long long)arg1;



@end

