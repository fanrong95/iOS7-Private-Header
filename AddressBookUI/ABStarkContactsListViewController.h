/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UITableViewController.h"



#import "ABContactViewControllerDelegate.h"

#import "ABMembersDataSourceDelegate.h"



@class ABMembersDataSource, ABModel;



@interface ABStarkContactsListViewController : UITableViewController <ABMembersDataSourceDelegate, ABContactViewControllerDelegate>

{

    ABMembersDataSource *_dataSource;

    ABModel *_model;

    id <ABStarkContactsListViewControllerDelegate> _peoplePickerDelegate;

}



- (_Bool)abDataSource:(id)arg1 selectedPerson:(void *)arg2 atIndexPath:(id)arg3 withMemberCell:(id)arg4 animate:(_Bool)arg5;

- (_Bool)abDataSource:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2;

- (_Bool)abDataSourceAllowsShowingPersonsCards:(id)arg1;

- (_Bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 property:(id)arg3 labeledValue:(id)arg4;

- (void)dealloc;

- (id)init;

- (id)initWithModel:(id)arg1;

- (id)initWithStyle:(long long)arg1;

@property(nonatomic) id <ABStarkContactsListViewControllerDelegate> peoplePickerDelegate; // @synthesize peoplePickerDelegate=_peoplePickerDelegate;

- (void)viewDidLoad;



@end


