/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "RUIElement.h"


#import "UIPickerViewDelegate.h"

#import "UITextFieldDelegate.h"



@class NSData, NSDate, NSDictionary, NSMutableArray, RemoteUITableViewCell, UISwitch, UIWebView, WebContainerView;



@interface RUITableViewRow : RUIElement <UIPickerViewDelegate, UITextFieldDelegate>

{

    RemoteUITableViewCell *_tableCell;

    id _delegate;

    NSMutableArray *_selectOptions;

    long long _selectedRow;

    NSDate *_date;

    NSDate *_dateMax;

    NSDate *_dateMin;

    UISwitch *_switchControl;

    _Bool _rowInvalid;

    NSDictionary *_deleteAction;

    NSData *_data;

    UIWebView *_webView;

    WebContainerView *_webContainerView;

    float _cachedHeight;

    _Bool _configured;

    double _height;

}



+ (id)_formatterForDateYMD;

+ (id)_formatterForMonthAndDay;

+ (id)_formatterForShortDate;

+ (id)_timeZoneAdjustedDateFromDate:(id)arg1;

+ (void)initialize;

+ (void)resetLocale;

- (void)_activate;

- (void)_datePickerChanged:(id)arg1;

- (void)accessoryImageLoaded;

- (void)clearCachedHeight;

@property(nonatomic) _Bool configured; // @synthesize configured=_configured;

@property(retain, nonatomic) NSData *data; // @synthesize data=_data;

@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;

@property(retain, nonatomic) NSDate *dateMax; // @synthesize dateMax=_dateMax;

@property(retain, nonatomic) NSDate *dateMin; // @synthesize dateMin=_dateMin;

- (void)dealloc;

@property(retain, nonatomic) NSDictionary *deleteAction; // @synthesize deleteAction=_deleteAction;

@property(nonatomic) double height; // @synthesize height=_height;

- (_Bool)loadAccessoryImage;

- (long long)numberOfComponentsInPickerView:(id)arg1;

- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;

- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;

- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;

- (void)populatePostbackDictionary:(id)arg1;

- (float)rowHeightWithMax:(float)arg1 peggedHeight:(float)arg2 tableView:(id)arg3 indexPath:(id)arg4;

@property(nonatomic) _Bool rowInvalid; // @synthesize rowInvalid=_rowInvalid;

- (id)selectOptions;

@property(readonly, nonatomic) long long selectedRow; // @synthesize selectedRow=_selectedRow;

- (void)setAttributes:(id)arg1;

- (void)setDelegate:(id)arg1;

- (void)setImage:(id)arg1;

- (id)sourceURL;

- (_Bool)supportsAutomaticSelection;

- (id)tableCell;

- (Class)tableCellClass;

- (long long)tableCellStyle;

- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;

- (_Bool)textFieldShouldReturn:(id)arg1;



@end


