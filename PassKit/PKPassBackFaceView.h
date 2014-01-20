/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PKPassFaceView.h"


#import "UITableViewDataSource.h"

#import "UITableViewDelegate.h"

#import "UITextViewDelegate.h"



@class BluetoothManager, NSArray, NSMutableDictionary, NSTimer, PKLinkedAppView, PKSettingTableCell, UIAlertView, UIButton, UILabel, UIRefreshControl, UITableView, UIView;



@interface PKPassBackFaceView : PKPassFaceView <UITableViewDataSource, UITableViewDelegate, UITextViewDelegate>

{

    UIRefreshControl *_refreshControl;

    _Bool _tall;

    UILabel *_updateDateLabel;

    UIButton *_doneButton;

    PKLinkedAppView *_linkedApp;

    UIAlertView *_storeDemoRefuseDeleteAlert;

    UIView *_locationHelpView;

    UITableView *_bodyTable;

    PKSettingTableCell *_automaticUpdates;

    PKSettingTableCell *_showInLockScreen;

    NSArray *_rowCountBySection;

    unsigned long long _settingsSection;

    unsigned long long _linkedAppSection;

    unsigned long long _fieldsSection;

    NSMutableDictionary *_fieldCellsByIndexPath;

    NSTimer *_refreshTimeoutTimer;

    BluetoothManager *_btManager;

    _Bool _isBluetoothEnabled;

    _Bool _isLocationEnabled;

    _Bool _isWifiEnabled;

    _Bool _showsDelete;

    _Bool _showsLinkedApp;

    _Bool _showsSettings;

    _Bool _showsLinks;

}



+ (id)_linkColor;

+ (id)_linkTextAttributes;

+ (_Bool)isWifiEnabled;

- (void)_bluetoothPowerChanged:(id)arg1;

- (void)_deleteButtonPressed:(id)arg1;

- (void)_doneButtonPressed:(id)arg1;

- (id)_fieldCellForIndexPath:(id)arg1;

- (id)_fieldForIndexPath:(id)arg1;

- (id)_formattedUpdateDate:(id)arg1;

- (_Bool)_isBluetoothEnabled;

- (_Bool)_linkedAppAvailable;

- (id)_locationHelpViewForTableView:(id)arg1;

- (id)_locationRelevancyHelpText;

- (void)_refreshTimeoutFired;

- (id)_relevantBuckets;

- (_Bool)_settingsAvailable;

- (id)_settingsCellForRow:(unsigned long long)arg1;

- (id)_updateLabelAttributedStringWithString:(id)arg1;

- (void)_wifiChanged:(id)arg1;

- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;

- (void)applicationDidEnterBackground:(id)arg1;

- (struct CGSize)contentSize;

- (void)createBodyInvariantViews;

- (void)dealloc;

- (_Bool)deleteEnabled;

- (void)didMoveToWindow;

- (id)initTall:(_Bool)arg1;

- (_Bool)isFrontFace;

- (void)layoutSubviews;

@property(nonatomic) PKLinkedAppView *linkedApp; // @synthesize linkedApp=_linkedApp;

- (long long)numberOfSectionsInTableView:(id)arg1;

- (void)pushSettingsFromViewToModel;

- (void)refreshControlValueChanged:(id)arg1;

- (void)registerForEnterBackgroundNotification;

@property(nonatomic) _Bool showsDelete; // @synthesize showsDelete=_showsDelete;

@property(nonatomic) _Bool showsLinkedApp; // @synthesize showsLinkedApp=_showsLinkedApp;

@property(nonatomic) _Bool showsLinks; // @synthesize showsLinks=_showsLinks;

@property(nonatomic) _Bool showsSettings; // @synthesize showsSettings=_showsSettings;

@property(retain, nonatomic) UIAlertView *storeDemoRefuseDeleteAlert; // @synthesize storeDemoRefuseDeleteAlert=_storeDemoRefuseDeleteAlert;

- (void)setupRefreshControl:(id)arg1;

- (_Bool)shouldAllowRefresh;

- (_Bool)showBackgroundMatte;

- (_Bool)showUpdateDateLabel;

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;

- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;

- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;

- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;

- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;

- (void)unregisterForEnterBackgroundNotification;

- (void)willMoveToSuperview:(id)arg1;



@end


