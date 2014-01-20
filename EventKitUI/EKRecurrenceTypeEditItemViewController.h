/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "EKEditItemViewController.h"


#import "UITableViewDataSource.h"

#import "UITableViewDelegate.h"



@class NSIndexPath, NSString, UITableView;



__attribute__((visibility("hidden")))

@interface EKRecurrenceTypeEditItemViewController : EKEditItemViewController <UITableViewDataSource, UITableViewDelegate>

{

    UITableView *_table;

    NSString *_customString;

    long long _repeatType;

    NSIndexPath *_checkedItem;

}



- (void).cxx_destruct;

- (void)_checkItemAtIndexPath:(id)arg1;

- (id)initWithFrame:(struct CGRect)arg1 styleProvider:(id)arg2;

- (void)loadView;

- (long long)numberOfSectionsInTableView:(id)arg1;

@property(nonatomic) long long repeatType;

- (void)setCustomString:(id)arg1;

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

- (void)viewDidLoad;



@end


