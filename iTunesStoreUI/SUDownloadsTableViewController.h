/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SUTableViewController.h"


#import "SUDownloadsChildViewController.h"



@class NSArray, SUTableDataSource;



@interface SUDownloadsTableViewController : SUTableViewController <SUDownloadsChildViewController>

{

}



- (id)_downloadsViewController;

- (void)_reloadPreviewOverlayVisibility;

- (void)dealloc;

- (_Bool)deleteRowAtIndexPath:(id)arg1;

- (void)didMoveToParentViewController:(id)arg1;

- (_Bool)handleSelectionForIndexPath:(id)arg1 tapCount:(long long)arg2;

- (id)init;

- (void)loadView;

- (void)reloadDownloadCellForDownload:(id)arg1;

@property(retain, nonatomic) NSArray *scriptButtons;

- (void)tabBarControllerDidReselectTabBarItem:(id)arg1;

- (void)viewWillAppear:(_Bool)arg1;

- (id)visibleDownloadCellForDownload:(id)arg1;



// Remaining properties

@property(retain, nonatomic) SUTableDataSource *dataSource; // @dynamic dataSource;



@end


