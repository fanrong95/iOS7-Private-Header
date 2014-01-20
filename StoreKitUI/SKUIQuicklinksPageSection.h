/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SKUIStorePageSection.h"


#import "SKUIQuicklinksViewControllerDelegate.h"



@class SKUIQuicklinksPageComponent, SKUIQuicklinksViewController;



@interface SKUIQuicklinksPageSection : SKUIStorePageSection <SKUIQuicklinksViewControllerDelegate>

{

    SKUIQuicklinksViewController *_quicklinksViewController;

}



- (void).cxx_destruct;

- (id)_quicklinksViewController;

- (id)cellForIndexPath:(id)arg1;

- (struct CGSize)cellSizeForIndexPath:(id)arg1;

- (void)dealloc;

- (id)initWithPageComponent:(id)arg1;

- (long long)numberOfCells;

- (void)quicklinksViewController:(id)arg1 didSelectLink:(id)arg2 atIndex:(long long)arg3;

- (void)willAppearInContext:(id)arg1;



// Remaining properties

@property(readonly, nonatomic) SKUIQuicklinksPageComponent *pageComponent; // @dynamic pageComponent;



@end


