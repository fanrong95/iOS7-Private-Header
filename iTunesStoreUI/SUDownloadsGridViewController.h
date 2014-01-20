/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SUGridViewController.h"


#import "SUDownloadsChildViewController.h"



@class NSArray, SUClientInterface, SUTableDataSource;



@interface SUDownloadsGridViewController : SUGridViewController <SUDownloadsChildViewController>

{

    _Bool _isEditing;

    SUClientInterface *_clientInterface;

}



- (void)_cancelAction:(id)arg1;

- (void)_deleteAction:(id)arg1;

- (id)_downloadsViewController;

- (void)_editAction:(id)arg1;

- (void)_reloadColumnCountForOrientation:(long long)arg1;

- (void)_updateEditButtons;

@property(retain, nonatomic) SUClientInterface *clientInterface; // @synthesize clientInterface=_clientInterface;

- (void)dealloc;

- (_Bool)deleteCellAtIndexPath:(id)arg1;

- (void)gridViewEditSelectionDidChange:(id)arg1;

- (id)init;

- (void)loadView;

- (void)reloadData;

- (void)reloadDownloadCellForDownload:(id)arg1;

@property(retain, nonatomic) NSArray *scriptButtons;

@property(retain, nonatomic) SUTableDataSource *dataSource; // @dynamic dataSource;

- (void)viewWillAppear:(_Bool)arg1;

- (id)visibleDownloadCellForDownload:(id)arg1;

- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;



@end


