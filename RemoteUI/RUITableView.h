/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "RUIElement.h"


#import "UITableViewDataSource.h"

#import "UITableViewDelegate.h"

#import "UIWebViewDelegate.h"



@class NSDictionary, NSMutableArray, NSString, RUIObjectModel, RUITableHeaderView, RUITableViewRow, UIDatePicker, UIPickerView, UITableView, _UIBackdropView;



@interface RUITableView : RUIElement <UITableViewDataSource, UITableViewDelegate, UIWebViewDelegate>

{

    NSMutableArray *_sections;

    UITableView *_tableView;

    UIPickerView *_selectPicker;

    _Bool _showSelectPicker;

    UIDatePicker *_datePicker;

    _Bool _showDatePicker;

    _UIBackdropView *_pickerBackdrop;

    RUITableViewRow *_defaultFirstResponderRow;

    _Bool _viewShrunk;

    RUIObjectModel *_objectModel;

    _Bool _registeredForNotifications;

    float _lastLayoutWidth;

    float _fullscreenCellHeight;

    RUITableHeaderView *_headerView;

    NSDictionary *_headerViewAttributes;

    NSDictionary *_footerViewAttributes;

}



- (void)_clearPickers;

- (void)_registerForNotifications:(_Bool)arg1;

- (struct CGRect)_selectPickerFrame;

- (void)_setBottomInset:(float)arg1;

- (void)_textChanged:(id)arg1;

- (void)activateRowAtIndexPath:(id)arg1 animated:(_Bool)arg2;

- (void)automaticKeyboardDidHide:(id)arg1;

- (void)automaticKeyboardDidShow:(id)arg1;

- (void)dealloc;

@property(retain, nonatomic) RUITableViewRow *defaultFirstResponderRow; // @synthesize defaultFirstResponderRow=_defaultFirstResponderRow;

@property(retain, nonatomic) NSDictionary *footerViewAttributes; // @synthesize footerViewAttributes=_footerViewAttributes;

@property(retain, nonatomic) NSString *headerTitle;

@property(readonly, nonatomic) RUITableHeaderView *headerView; // @synthesize headerView=_headerView;

@property(retain, nonatomic) NSDictionary *headerViewAttributes; // @synthesize headerViewAttributes=_headerViewAttributes;

- (id)indexPathForRow:(id)arg1;

- (id)init;

@property(readonly, nonatomic, getter=isShowingPicker) _Bool showingPicker;

- (long long)numberOfSectionsInTableView:(id)arg1;

@property(nonatomic) RUIObjectModel *objectModel; // @synthesize objectModel=_objectModel;

- (id)objectModelRowForIndexPath:(id)arg1;

- (void)populatePostbackDictionary:(id)arg1;

- (void)rowDidChange:(id)arg1;

- (void)rowDidEndEditing:(id)arg1;

- (void)rowIsFirstResponder:(id)arg1;

- (void)sectionActivatedButton:(id)arg1 attributes:(id)arg2;

- (void)sectionActivatedLink:(id)arg1 attributes:(id)arg2;

@property(readonly, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;

- (void)setAttributes:(id)arg1;

- (id)sourceURL;

- (id)sourceURLForRUITableViewRow;

- (id)sourceURLForRUITableViewSection;

- (Class)tableCellClassForTableViewRow:(id)arg1;

- (id)tableView;

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;

- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;

- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;

- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

- (_Bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;

- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;

- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;

- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;

- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;

- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;

- (id)textFieldRow:(id)arg1 changeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;

- (void)textFieldStartedEditing:(id)arg1;

- (void)viewDidAppear:(_Bool)arg1;

- (void)viewDidDisappear:(_Bool)arg1;

- (void)viewDidLayout;

- (void)viewWillAppear:(_Bool)arg1;

- (void)viewWillDisappear:(_Bool)arg1;

- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;



@end


