/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UICollectionViewCell.h"



@class PUPhotoView, UIImageView, UIView;



@interface PUPhotosGridCell : UICollectionViewCell

{

    UIView *_selectionOverlayView;

    UIImageView *_selectionBadgeImageView;

    UIView *_highlightOverlayView;

    UIView *_transitionFillerView;

    _Bool _selectionBadgeVisible;

    _Bool _transitionFillerViewEnabled;

    _Bool _transitionIsAppearing;

    PUPhotoView *_photoContentView;

    PUPhotoView *_temporaryPhotoContentView;

    struct UIEdgeInsets _fillerEdgeInsets;

}



- (void).cxx_destruct;

- (void)_layoutTransitionFillerView;

- (void)_updateHighlight;

- (void)_updateSelectionBadge;

- (void)_updateSubviewOrdering;

- (void)addTemporaryPhotoContentView;

- (void)applyLayoutAttributes:(id)arg1;

@property(nonatomic) struct UIEdgeInsets fillerEdgeInsets; // @synthesize fillerEdgeInsets=_fillerEdgeInsets;

- (id)initWithFrame:(struct CGRect)arg1;

@property(nonatomic, getter=isSelectionBadgeVisible) _Bool selectionBadgeVisible; // @synthesize selectionBadgeVisible=_selectionBadgeVisible;

- (void)layoutSubviews;

@property(retain, nonatomic) PUPhotoView *photoContentView; // @synthesize photoContentView=_photoContentView;

- (void)removeTemporaryPhotoContentView;

@property(nonatomic, getter=isHighlighted) _Bool highlighted;

@property(retain, nonatomic) PUPhotoView *temporaryPhotoContentView; // @synthesize temporaryPhotoContentView=_temporaryPhotoContentView;

- (void)setTemporaryPhotoImage:(id)arg1 with:(long long)arg2;

@property(nonatomic) _Bool transitionFillerViewEnabled; // @synthesize transitionFillerViewEnabled=_transitionFillerViewEnabled;

@property(nonatomic) _Bool transitionIsAppearing; // @synthesize transitionIsAppearing=_transitionIsAppearing;

@property(readonly, nonatomic) UIView *transitionFillerView; // @synthesize transitionFillerView=_transitionFillerView;



@end


