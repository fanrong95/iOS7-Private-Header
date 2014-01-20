/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SKUISwooshViewController.h"


#import "SKUIEmbeddedMediaViewDelegate.h"

#import "UICollectionViewDataSource.h"

#import "UICollectionViewDelegateFlowLayout.h"



@class SKUISwooshPageComponent, SKUISwooshView, UICollectionView;



@interface SKUIGallerySwooshViewController : SKUISwooshViewController <SKUIEmbeddedMediaViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

{

    UICollectionView *_collectionView;

    _Bool _delegateWantsWillDisplay;

    SKUISwooshPageComponent *_gallerySwoosh;

    double _itemHeight;

    SKUISwooshView *_swooshView;

}



- (void).cxx_destruct;

- (id)_newViewWithMediaComponent:(id)arg1;

- (id)artworkForItemAtIndex:(long long)arg1;

- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;

- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;

- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;

- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;

- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;

@property(readonly, nonatomic) SKUISwooshPageComponent *gallerySwoosh; // @synthesize gallerySwoosh=_gallerySwoosh;

- (id)indexPathsForVisibleItems;

- (id)initWithGallerySwoosh:(id)arg1;

- (void)loadView;

- (void)mediaView:(id)arg1 playbackStateDidChange:(long long)arg2;

- (void)performActionForItemAtIndex:(long long)arg1 animated:(_Bool)arg2;

- (void)setColorScheme:(id)arg1;

@property(nonatomic) __weak id <SKUIGallerySwooshViewControllerDelegate> delegate; // @dynamic delegate;

- (void)setImage:(id)arg1 forItemAtIndex:(long long)arg2;



@end


