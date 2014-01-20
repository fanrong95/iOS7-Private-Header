/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SKUIStorePageSection.h"


@class SKUIEditorialComponent, SKUIEditorialLayout;



@interface SKUIEditorialPageSection : SKUIStorePageSection

{

    SKUIEditorialLayout *_editorialLayout;

    _Bool _isExpanded;

}



- (void).cxx_destruct;

- (id)_editorialLayout;

- (id)cellForIndexPath:(id)arg1;

- (struct CGSize)cellSizeForIndexPath:(id)arg1;

- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;

- (id)initWithPageComponent:(id)arg1;

- (long long)numberOfCells;

- (void)willAppearInContext:(id)arg1;

- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;



// Remaining properties

@property(readonly, nonatomic) SKUIEditorialComponent *pageComponent; // @dynamic pageComponent;



@end


