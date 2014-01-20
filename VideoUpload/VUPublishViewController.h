/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIViewController.h"



#import "UIAlertViewDelegate.h"

#import "UIPickerViewDelegate.h"

#import "UITableViewDataSource.h"

#import "UITableViewDelegate.h"



@class NSArray, NSMutableArray, NSString, PLTableViewEditableCell, UIAlertView, UIImageView, UIPickerView, UITableView, UITableViewCell, UIView, VUCategory, VUCategoryCell, VUFooterContainerView;



@interface VUPublishViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIPickerViewDelegate, UIAlertViewDelegate>

{

    UITableView *_tableView;

    UIPickerView *_picker;

    UIView *_pickerContainer;

    _Bool _viewShrunk;

    _Bool _showingPicker;

    UIImageView *_headerImageView;

    PLTableViewEditableCell *_titleCell;

    PLTableViewEditableCell *_descriptionCell;

    double _descriptionHeight;

    PLTableViewEditableCell *_optionCells[2];

    NSMutableArray *_tagCells;

    VUCategoryCell *_categoryCell;

    NSArray *_accessCells;

    unsigned long long _accessRow;

    UITableViewCell *_accountCell;

    VUFooterContainerView *_footerContainer;

    UIAlertView *_authenticationAlert;

    UIAlertView *_accountAlert;

    UIAlertView *_authenticationFailedAlert;

    struct {

        long long title;

        long long hd;

        long long tags;

        long long category;

        long long access;

        long long account;

    } _sectionIndices;

    _Bool _showHDSection;

    _Bool _enableHDSection;

    int _SDSize;

    int _HDSize;

    int _selectedOption;

    id <VUPublishViewControllerDelegate> _delegate;

}



@property(nonatomic) int HDSize; // @synthesize HDSize=_HDSize;

@property(nonatomic) int SDSize; // @synthesize SDSize=_SDSize;

- (void)_addNewTagCell;

- (void)_authenticatorFailed:(id)arg1;

- (void)_authenticatorStateChanged:(id)arg1;

- (void)_automaticKeyboardDidHide:(id)arg1;

- (void)_automaticKeyboardDidShow:(id)arg1;

- (void)_cancel;

- (void)_footerFrameDidChangeWithSplitKeyboard:(_Bool)arg1;

- (void)_hidePicker;

- (int)_indexOfBlankTagCellOtherThan:(id)arg1;

- (_Bool)_isAuthenticated;

- (void)_publish;

- (void)_showPicker;

- (void)_shrinkView;

- (void)_termsButtonPressed:(id)arg1;

- (void)_unshrinkView;

- (void)_updateAccountCell;

- (void)_updatePublishButton;

- (id)accessCells;

- (id)accountAlert;

- (id)accountString;

- (void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2;

- (void)authReturnKeyPressed:(id)arg1;

- (id)authenticator;

- (id)categories;

- (_Bool)checkParametersAndWarn;

- (void)dealloc;

@property(nonatomic) id <VUPublishViewControllerDelegate> delegate; // @synthesize delegate=_delegate;

- (void)editableCell:(id)arg1 textChanged:(id)arg2;

- (void)editableCellDidBeginEditing:(id)arg1;

- (void)editableCellReturnPressed:(id)arg1;

- (void)editableTagCellEndOfTagCharacterPressed:(id)arg1;

@property(nonatomic) _Bool enableHDSection; // @synthesize enableHDSection=_enableHDSection;

- (id)headerLogo;

- (id)init;

- (void)loadView;

- (long long)numberOfComponentsInPickerView:(id)arg1;

- (long long)numberOfSectionsInTableView:(id)arg1;

- (void)orderOutKeyboard;

- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;

- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;

- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;

- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;

- (void)resignResponder;

- (void)scrollViewWillBeginDragging:(id)arg1;

@property(readonly, nonatomic) int selectedOption; // @synthesize selectedOption=_selectedOption;

@property(nonatomic) _Bool showHDSection; // @synthesize showHDSection=_showHDSection;

- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;

- (void)showAlertWithTitle:(id)arg1 message:(id)arg2;

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;

- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;

- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;

- (id)termsOfUseString;

- (id)termsOfUseURL;

@property(readonly, nonatomic) VUCategory *videoCategory;

@property(readonly, nonatomic) NSString *videoDescription;

@property(readonly, nonatomic) NSArray *videoTags;

@property(readonly, nonatomic) NSString *videoTitle;

- (void)viewDidAppear:(_Bool)arg1;

- (void)viewDidUnload;

- (void)viewWillAppear:(_Bool)arg1;



@end


