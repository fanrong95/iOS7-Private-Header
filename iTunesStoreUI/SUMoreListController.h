/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIMoreListController.h"



@class UITabBarItem;



@interface SUMoreListController : UIMoreListController

{

    UITabBarItem *_tabBarItem;

}



- (long long)ITunesStoreUIBarStyle;

- (void)_badgeDidChangeNotification:(id)arg1;

- (void)_reloadPreviewOverlayVisibility;

- (void)dealloc;

- (void)didMoveToParentViewController:(id)arg1;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

- (void)loadView;

- (unsigned long long)supportedInterfaceOrientations;

- (id)tabBarItem;

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

- (void)viewWillAppear:(_Bool)arg1;



@end


