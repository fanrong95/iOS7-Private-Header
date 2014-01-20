/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UICollectionViewLayout.h"



@class NSArray, NSMutableDictionary, PUAlbumListTransitionContext, UICollectionViewLayoutAttributes;



@interface PUStackedAlbumLayout : UICollectionViewLayout

{

    NSMutableDictionary *_visibleLayoutAttributesByIndexPath;

    NSMutableDictionary *_derivedLayoutAttributesByIndexPath;

    NSMutableDictionary *_zIndexByIndexPath;

    _Bool _isInteractive;

    NSArray *_visibleStackedItemLayoutAttributes;

    UICollectionViewLayoutAttributes *_referenceItemLayoutAttributes;

    double _yAdjust;

    PUAlbumListTransitionContext *_albumListTransitionContext;

    struct CGPoint _referenceCenter;

    struct CGSize _contentSizeAdjust;

}



- (void).cxx_destruct;

- (id)_animationForReusableView:(SEL)arg1 toLayoutAttributes:(id)arg2 type:(id)arg3;

- (id)_newAdjustedLayoutAttributes:(id)arg1 indexPath:(id)arg2;

@property(retain, nonatomic) PUAlbumListTransitionContext *albumListTransitionContext; // @synthesize albumListTransitionContext=_albumListTransitionContext;

- (struct CGSize)collectionViewContentSize;

@property(nonatomic) struct CGSize contentSizeAdjust; // @synthesize contentSizeAdjust=_contentSizeAdjust;

@property(nonatomic, setter=setInteractive:) _Bool isInteractive; // @synthesize isInteractive=_isInteractive;

- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;

- (id)layoutAttributesForItemAtIndexPath:(id)arg1;

- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;

- (void)prepareLayout;

@property(nonatomic) struct CGPoint referenceCenter; // @synthesize referenceCenter=_referenceCenter;

@property(copy, nonatomic) UICollectionViewLayoutAttributes *referenceItemLayoutAttributes; // @synthesize referenceItemLayoutAttributes=_referenceItemLayoutAttributes;

@property(copy, nonatomic) NSArray *visibleStackedItemLayoutAttributes; // @synthesize visibleStackedItemLayoutAttributes=_visibleStackedItemLayoutAttributes;

@property(nonatomic) double yAdjust; // @synthesize yAdjust=_yAdjust;

- (long long)zIndexForItemAtIndexPath:(id)arg1;



@end


