/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "ABStyleProvider.h"



@class UIColor, UIFont, UIImage, UIView, _UIGraphicsLetterpressStyle;



@interface ABStyleProvider : NSObject <ABStyleProvider>

{

}



+ (id)defaultStyleProvider;

+ (id)defaultStyleProviderForStyle:(int)arg1;

+ (double)memberHeaderRowHeight;

+ (double)memberHeaderTextBaseline;

+ (double)memberRowHeight;

+ (double)memberTextBaseline;

+ (id)preferredContentSizeCategoryName;

- (id)_fontForTextStyle:(id)arg1;

- (int)abCellStyleForCardTableLinkingUI;

- (int)abCellStyleForCardTableWhenEditing:(_Bool)arg1;

- (int)abCellStyleForGroupsTableGrouped;

- (int)abCellStyleForGroupsTablePlain;

- (int)abCellStyleForMembersTable;

- (id)accessoryButtonForRelatedNames;

- (id)accessoryViewForFavoritesBadge;

- (id)accessoryViewForMailVIPBadge;

- (id)accessoryViewForVideoBadge;

@property(readonly, nonatomic) UIImage *cardActionButtonBackgroundHighlighted;

@property(readonly, nonatomic) UIImage *cardActionButtonBackgroundNormal;

@property(readonly, nonatomic) double cardActionButtonHeight;

@property(readonly, nonatomic) struct UIEdgeInsets cardActionButtonImageInsets;

@property(readonly, nonatomic) double cardActionButtonSpacing;

@property(readonly, nonatomic) struct UIEdgeInsets cardActionButtonTitleDoubleLineInsets;

@property(readonly, nonatomic) struct UIEdgeInsets cardActionButtonTitleSingleLineInsets;

@property(readonly, nonatomic) long long cardActionButtonType;

@property(readonly, nonatomic) struct UIEdgeInsets cardActionButtonsInsets;

@property(readonly, nonatomic) UIImage *cardActionConferenceIcon;

@property(readonly, nonatomic) UIImage *cardActionConferenceIconPressed;

@property(readonly, nonatomic) _Bool cardActionsAllowFaceTimeFavorites;

@property(readonly, nonatomic) _Bool cardActionsAllowVoiceFavorites;

@property(readonly, nonatomic) _Bool cardAlwaysShowsNotes;

@property(readonly, nonatomic) long long cardCellAccessoryType;

@property(readonly, nonatomic) long long cardCellAccessoryTypeEdit;

@property(readonly, nonatomic) long long cardCellAccessoryTypeEditRingtone;

@property(readonly, nonatomic) long long cardCellAccessoryTypeRingtone;

@property(readonly, nonatomic) UIColor *cardCellBackgroundColor;

- (struct UIEdgeInsets)cardCellBackgroundInsetsWhenEditing:(_Bool)arg1;

@property(readonly, nonatomic) double cardCellBadgePaddingLeft;

@property(readonly, nonatomic) UIColor *cardCellDisabledBackgroundColor;

- (id)cardCellDividerColorVertical:(_Bool)arg1;

- (id)cardCellDividerShadowColorVertical:(_Bool)arg1;

@property(readonly, nonatomic) UIImage *cardCellFacebookBadge;

@property(readonly, nonatomic) long long cardCellSelectionStyle;

@property(readonly, nonatomic) double cardCellVerticalSpacingBetweenAlertsOfSimilarType;

@property(readonly, nonatomic) UIColor *cardClippingImageLabelBevelColor;

@property(readonly, nonatomic) UIColor *cardClippingImageLabelColor;

@property(readonly, nonatomic) double cardContentOccluderDefaultBottomFadingHeight;

@property(readonly, nonatomic) double cardContentOccluderDefaultTopFadingHeight;

- (double)cardDeleteButtonHeight;

- (id)cardDeleteButtonImage;

- (id)cardDeleteButtonImagePressed;

- (struct UIEdgeInsets)cardDeleteButtonInsets;

@property(readonly, nonatomic) UIColor *cardHeaderBackgroundColor;

@property(readonly, nonatomic) UIColor *cardHeaderDefaultLabelTextColor;

@property(readonly, nonatomic) double cardHeaderDisplayImageLeftMargin;

@property(readonly, nonatomic) double cardHeaderDisplayImageTopMargin;

@property(readonly, nonatomic) double cardHeaderEditingImageLeftMargin;

@property(readonly, nonatomic) double cardHeaderEditingImageTopMargin;

@property(readonly, nonatomic) double cardHeaderImageNameEditorSpacing;

@property(readonly, nonatomic) double cardHeaderImageNameSpacing;

@property(readonly, nonatomic) _Bool cardHeaderNameViewAlignOnBottom;

- (double)cardHeaderSpacingFromCardBodyWhenEditing:(_Bool)arg1;

@property(readonly, nonatomic) double cardHeaderViewLeftMargin;

@property(readonly, nonatomic) double cardHeaderViewTopMargin;

@property(readonly, nonatomic) UIColor *cardHeadlineShadowColor;

@property(readonly, nonatomic) UIColor *cardHeadlineTextColor;

@property(readonly, nonatomic) UIFont *cardHeadlineTextFont;

@property(readonly, nonatomic) UIColor *cardLabelBackgroundColor;

@property(readonly, nonatomic) UIColor *cardLabelDisabledTextColor;

@property(readonly, nonatomic) UIColor *cardLabelEditingTextColor;

@property(readonly, nonatomic) UIFont *cardLabelEditingTextFont;

@property(readonly, nonatomic) UIColor *cardLabelEmphasizedHighlightedTextColor;

@property(readonly, nonatomic) UIColor *cardLabelHighlightedShadowColor;

@property(readonly, nonatomic) UIColor *cardLabelHighlightedTextColor;

@property(readonly, nonatomic) UIColor *cardLabelImportantHighlightedTextColor;

@property(readonly, nonatomic) struct UIEdgeInsets cardLabelInsets;

@property(readonly, nonatomic) UIColor *cardLabelSelectedBackgroundColor;

@property(readonly, nonatomic) UIColor *cardLabelShadowColor;

@property(readonly, nonatomic) struct CGSize cardLabelShadowOffset;

@property(readonly, nonatomic) UIColor *cardLabelTextColor;

@property(readonly, nonatomic) UIFont *cardLabelTextFont;

@property(readonly, nonatomic) double cardLabelWidth;

@property(readonly, nonatomic) double cardLinkingHeaderLabelHeight;

- (double)cardMaxHeightForSwellTextViewWhenEditing:(_Bool)arg1;

- (id)cardNameDividerColor;

@property(readonly, nonatomic) unsigned long long cardNameNumberOfLines;

@property(readonly, nonatomic) UIView *cardNotesHeaderView;

@property(readonly, nonatomic) double cardNotesHeaderViewHeight;

@property(readonly, nonatomic) _Bool cardNotesLabelIncludesSource;

- (double)cardNotesMinimumHeightWhenEditing:(_Bool)arg1;

@property(readonly, nonatomic) UIImage *cardPhotoBackgroundImage;

@property(readonly, nonatomic) UIImage *cardPhotoEditMultipleOverlayImage;

@property(readonly, nonatomic) UIImage *cardPhotoEditMultiplePhotoBackdropImage;

@property(readonly, nonatomic) UIImage *cardPhotoEditOverlayImage;

@property(readonly, nonatomic) UIImage *cardPhotoEditPlaceholderImage;

@property(readonly, nonatomic) UIImage *cardPhotoFacebookAttributionImage;

@property(readonly, nonatomic) double cardPhotoFrameBorderSize;

@property(readonly, nonatomic) UIImage *cardPhotoMaskImage;

@property(readonly, nonatomic) UIImage *cardPhotoMaskMultipleImage;

@property(readonly, nonatomic) struct CGSize cardPhotoOffset;

@property(readonly, nonatomic) UIImage *cardPhotoOverlayImage;

@property(readonly, nonatomic) UIImage *cardPhotoPasteboardMaskImage;

@property(readonly, nonatomic) UIImage *cardPhotoShadowImage;

@property(readonly, nonatomic) struct CGSize cardPhotoShadowOffset;

@property(readonly, nonatomic) _Bool cardPhotoShouldApplyOverlayImageWhenLabelPresent;

@property(readonly, nonatomic) _Bool cardPhotoShouldApplyOverlayImageWhenPersonImagePresent;

@property(readonly, nonatomic) UIImage *cardPlaceholderCompanyImage;

@property(readonly, nonatomic) _Bool cardPlaceholderImageShouldApplyMaskAndOverlay;

@property(readonly, nonatomic) UIImage *cardPlaceholderPersonImage;

@property(readonly, nonatomic) _Bool cardSectionAlwaysWantsHeader;

@property(readonly, nonatomic) _Bool cardSectionDrawsDefaultTopShadow;

@property(readonly, nonatomic) UIFont *cardSectionHeaderFont;

@property(readonly, nonatomic) double cardSectionHeaderHeightForBottomActions;

@property(readonly, nonatomic) double cardSectionHeaderHeightForFirstCardActions;

@property(readonly, nonatomic) double cardSectionHeaderHeightForFollowingCardActions;

@property(readonly, nonatomic) double cardSectionHeaderHorizontalPadding;

@property(readonly, nonatomic) UIColor *cardSectionHeaderShadowColor;

@property(readonly, nonatomic) struct CGSize cardSectionHeaderShadowOffset;

@property(readonly, nonatomic) UIColor *cardSectionHeaderTextColor;

@property(readonly, nonatomic) _Bool cardShouldUseSeparateSectionsForUnknownCardActions;

@property(readonly, nonatomic) UIColor *cardTableBackgroundColor;

@property(readonly, nonatomic) UIColor *cardTableCellBorderColor;

@property(readonly, nonatomic) _Bool cardTableShouldAdjustForKeyboard;

@property(readonly, nonatomic) _Bool cardTableShouldRemoveBackgroundView;

@property(readonly, nonatomic) _Bool cardTableUsesRowFadeAnimation;

- (id)cardTableView:(id)arg1 prepareCell:(id)arg2 forRowAtIndexPath:(id)arg3;

- (_Bool)cardTableView:(id)arg1 wantsHeaderForProperty:(int)arg2 inSection:(long long)arg3 whenEditing:(_Bool)arg4;

- (double)cardTableViewLinkingHeaderBottomPaddingWhenEditing:(_Bool)arg1;

- (double)cardTableViewLinkingHeaderTopPaddingWhenEditing:(_Bool)arg1;

- (double)cardTableViewSectionFooterHeightWhenEditing:(_Bool)arg1;

- (double)cardTableViewSectionHeaderHeightWhenEditing:(_Bool)arg1;

@property(readonly, nonatomic) unsigned long long cardTagNumberOfLines;

@property(readonly, nonatomic) UIColor *cardTaglineShadowColor;

@property(readonly, nonatomic) UIColor *cardTaglineTextColor;

@property(readonly, nonatomic) UIFont *cardTaglineTextFont;

@property(readonly, nonatomic) UIColor *cardValueBackgroundColor;

@property(readonly, nonatomic) UIImage *cardValueClearButtonImage;

@property(readonly, nonatomic) UIColor *cardValueDisabledTextColor;

@property(readonly, nonatomic) struct UIEdgeInsets cardValueEditingInsets;

@property(readonly, nonatomic) UIColor *cardValueHighlightedShadowColor;

@property(readonly, nonatomic) UIColor *cardValueHighlightedTextColor;

@property(readonly, nonatomic) _Bool cardValueHighlightsWhenTouched;

@property(readonly, nonatomic) struct UIEdgeInsets cardValueInsets;

- (struct UIEdgeInsets)cardValueInsetsWhenEditing:(_Bool)arg1;

@property(readonly, nonatomic) UIColor *cardValueShadowColor;

@property(readonly, nonatomic) struct CGSize cardValueShadowOffset;

@property(readonly, nonatomic) UIColor *cardValueTappableColor;

@property(readonly, nonatomic) UIColor *cardValueTextColor;

@property(readonly, nonatomic) UIFont *cardValueTextFont;

@property(readonly, nonatomic) long long composeModalPresentationStyle;

- (id)copyLocalizedLabel:(id)arg1;

- (id)copyLocalizedPropertyName:(int)arg1 lowercase:(_Bool)arg2;

- (Class)customCardActionCellClass;

- (Class)customCardCellClass;

- (void)customSetEmphasized:(_Bool)arg1 onCell:(id)arg2;

@property(readonly, nonatomic) _Bool datePickerHasNavigationTitle;

- (int)dialogStyleForDeleteConfirmation;

- (id)editorViewColor;

- (id)editorViewLargeFont;

- (id)editorViewSmallFont;

@property(readonly, nonatomic) UIColor *groupAccountNameColor;

@property(readonly, nonatomic) UIFont *groupAccountNameFont;

@property(readonly, nonatomic) UIColor *groupAccountNameShadowColor;

@property(readonly, nonatomic) struct CGSize groupAccountNameShadowOffset;

@property(readonly, nonatomic) UIColor *groupCellBackgroundColor;

@property(readonly, nonatomic) UIColor *groupCellHighlightedTextColor;

@property(readonly, nonatomic) long long groupCellSelectionStyle;

@property(readonly, nonatomic) UIColor *groupCellShadowColor;

@property(readonly, nonatomic) struct CGSize groupCellShadowOffset;

@property(readonly, nonatomic) UIColor *groupCellTextColor;

@property(readonly, nonatomic) UIColor *groupHeaderBackgroudColor;

@property(readonly, nonatomic) _Bool groupSectionDrawsDefaultTopShadow;

@property(readonly, nonatomic) double groupSectionHeaderHeight;

@property(readonly, nonatomic) double groupSectionHeaderHorizontalPadding;

@property(readonly, nonatomic) UIColor *groupsTableBackgroundColor;

@property(readonly, nonatomic) _Bool groupsTableShouldRemoveBackgroundView;

@property(readonly, nonatomic) _Bool labelPickerShouldPushCustomLabelCreator;

@property(readonly, nonatomic) _Bool labelPickerUsesOpaqueBackground;

@property(readonly, nonatomic) _UIGraphicsLetterpressStyle *letterpressStyle;

@property(readonly, nonatomic) _Bool linkedCardsShouldAllowDeletion;

@property(readonly, nonatomic) _Bool linkedPhotoLabelStringsDescribeSourceOnly;

@property(readonly, nonatomic) _Bool linkedPhotoPickerIncludesCurrentPhoto;

@property(readonly, nonatomic) UIView *memberHeaderBackgroundView;

@property(readonly, nonatomic) UIFont *memberNameBoldFont;

@property(readonly, nonatomic) UIFont *memberNameBoldFontForSectionHeader;

@property(readonly, nonatomic) UIColor *memberNameDisabledTextColor;

- (double)memberNameFontSize;

@property(readonly, nonatomic) struct UIEdgeInsets memberNameInsets;

@property(readonly, nonatomic) double memberNameInterComponentSpacing;

@property(readonly, nonatomic) UIImage *memberNameMeCardDisabledImage;

@property(readonly, nonatomic) UIImage *memberNameMeCardImage;

@property(readonly, nonatomic) UIImage *memberNameMeCardSelectedImage;

@property(readonly, nonatomic) UIColor *memberNameMeCardShadowColor;

@property(readonly, nonatomic) UIColor *memberNameMeCardTextColor;

@property(readonly, nonatomic) UIFont *memberNamePlaceholderFont;

@property(readonly, nonatomic) UIFont *memberNameRegularFont;

@property(readonly, nonatomic) UIFont *memberNameRegularFontForSectionHeader;

@property(readonly, nonatomic) UIColor *memberNameSelectedColor;

@property(readonly, nonatomic) UIColor *memberNameSelectedShadowColor;

@property(readonly, nonatomic) UIColor *memberNameShadowColor;

@property(readonly, nonatomic) struct CGSize memberNameShadowOffset;

@property(readonly, nonatomic) UIColor *memberNameTextColor;

@property(readonly, nonatomic) UIImage *memberPhotoMaskImage;

@property(readonly, nonatomic) UIImage *memberPhotoOverlayImage;

@property(readonly, nonatomic) UIImage *memberPlaceholderCompanyImage;

@property(readonly, nonatomic) UIImage *memberPlaceholderPersonImage;

@property(readonly, nonatomic) double memberScrollBarInset;

@property(readonly, nonatomic) UIColor *memberSearchFieldBackgroundColor;

@property(readonly, nonatomic) UIImage *memberSectionListHeaderImage;

@property(readonly, nonatomic) UIColor *memberSelectedBackgroundColor;

@property(readonly, nonatomic) _Bool memberShowContactPhoto;

@property(readonly, nonatomic) UIColor *membersBackgroundColor;

@property(readonly, nonatomic) unsigned long long membersCountToShowIndex;

@property(readonly, nonatomic) unsigned long long membersCountToShowSections;

@property(readonly, nonatomic) UIColor *membersHeaderBackgroundColor;

@property(readonly, nonatomic) UIColor *membersHeaderContentViewBackgroundColor;

@property(readonly, nonatomic) double membersIndexMaximumHeight;

@property(readonly, nonatomic) UIColor *membersIndexTextColor;

@property(readonly, nonatomic) UIColor *membersIndexTrackingBackgroundColor;

@property(readonly, nonatomic) _Bool membersSearchBarIsInTableHeader;

@property(readonly, nonatomic) long long membersSelectionStyle;

- (id)newAccessoryDisclosureIndicatorForCellStyle:(int)arg1;

- (id)newBackgroundViewForCellStyle:(int)arg1 selected:(_Bool)arg2;

- (struct __CFDictionary *)newBackgroundViewsForChameleonCell;

- (id)newCardActionButton;

- (id)newCardDividerViewVertical:(_Bool)arg1;

- (id)newCustomCardTableScrollingBackgroundView;

- (id)newTableFooterViewForCellStyle:(int)arg1;

@property(readonly, nonatomic) long long peoplePickerBarStyle;

@property(readonly, nonatomic) _Bool peoplePickerBarStyleIsTranslucent;

- (id)personActionColor;

- (id)personActionFont;

- (id)personActionHighlightedColor;

- (id)personActionShadowColor;

- (struct CGSize)personActionShadowOffset;

- (double)personEditorFieldVerticalInset;

- (id)personHeaderPasteboardColor;

- (id)personHeaderShadowColor;

- (struct CGSize)personHeaderShadowOffset;

- (id)personLabelColor;

- (id)personLabelFont;

- (double)personLabelFontMinSize;

- (id)personLabelHighlightedColor;

- (id)personLabelShadowColor;

- (struct CGSize)personLabelShadowOffset;

- (id)personNoValueLabelFont;

- (id)personNoValueLabelShadowColor;

- (struct CGSize)personNoValueLabelShadowOffset;

- (id)personNoValueLabelTextColor;

- (_Bool)personTableHeaderViewScrollsWhenEditing:(_Bool)arg1;

- (id)personValueBackgroundColor;

- (id)personValueColor;

- (id)personValueEmphasizedColor;

- (id)personValueEmphasizedHighlightColor;

- (id)personValueFont;

- (double)personValueFontMinSize;

- (id)personValueHighlightColor;

- (id)personValueImportantColor;

- (id)personValueImportantHighlightColor;

- (double)personViewDefaultRowHeight;

- (id)personViewGetFavoritesBadge;

- (id)personViewGetFavoritesBadgeHighlighted;

- (id)personViewGetNameViewAccessoryImage;

- (id)personViewGetNameViewAccessoryImageSelected;

- (double)personViewHeaderImageHeight;

- (double)personViewHeaderImageWidth;

- (double)personViewHeaderMinimumHeight;

- (double)personViewHeaderNameViewTextHorizontalInset;

- (double)personViewHeaderNameViewTextVerticalInset;

- (double)personViewHeaderRightMargin;

- (double)personViewHorizontalCellInset;

- (double)personViewRowHeightWhenEditing:(_Bool)arg1;

- (double)personViewVerticalCellInset;

- (double)personViewVerticalSpacing;

@property(readonly, nonatomic) long long pickerTransitionStyle;

@property(readonly, nonatomic) _Bool presentDatePickerInPopover;

@property(readonly, nonatomic) _Bool presentModalViewInPopover;

@property(readonly, nonatomic) _Bool presentNewContactsControllersInPopover;

- (_Bool)refreshTinyActionCell;

- (_Bool)reloadCallAction;

@property(readonly, nonatomic) _Bool searchControllerForceKeyboardDisplayEnabled;

@property(readonly, nonatomic) _Bool searchIsAlwaysActive;

- (void)selectCustomPartWithFrame:(struct CGRect)arg1 occupiedCorners:(unsigned long long)arg2 forCell:(id)arg3;

- (void)selectLabelPartForCell:(id)arg1;

- (void)selectValuePartForCell:(id)arg1;

- (void)selectWholePartForCell:(id)arg1;

- (id)separatorBottomShadowColorForCellStyle:(int)arg1;

- (id)separatorColorForCellStyle:(int)arg1;

- (long long)separatorStyleForCellStyle:(int)arg1;

- (id)separatorTopShadowColorForCellStyle:(int)arg1;

@property(readonly, nonatomic) _Bool serverSearchNavigationBarHidingEnabled;

- (void)setIndicatesFaceTimeHistory:(_Bool)arg1 onActionButton:(id)arg2;

- (id)shadowColorForCellStyle:(int)arg1;

- (_Bool)shouldAdjustTableView:(id)arg1 forKeyboardOrdering:(_Bool)arg2;

@property(readonly, nonatomic) _Bool shouldApplyMaskImage;

- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;

@property(readonly, nonatomic) _Bool shouldDefinePickerTransitionStyle;

@property(readonly, nonatomic) _Bool shouldPropagateStylesThroughUnknownPersonActions;

@property(readonly, nonatomic) _Bool shouldPropagateStylesToPickers;

@property(readonly, nonatomic) _Bool shouldShowCardPhotoPlaceholder;

@property(readonly, nonatomic) _Bool shouldUseCardContentProviderWhenAvailable;

@property(readonly, nonatomic) _Bool shouldUsePeoplePickerBarStyle;

@property(readonly, nonatomic) long long unknownModalPresentationStyle;

- (void)unselectAllCellParts:(id)arg1;

- (_Bool)usesPhoneCardMetrics;



@end


