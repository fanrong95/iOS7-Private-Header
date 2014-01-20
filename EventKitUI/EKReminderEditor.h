/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "EKCalendarItemEditor.h"


@class EKReminder;



@interface EKReminderEditor : EKCalendarItemEditor

{

    id <EKStyleProvider> _styleProvider;

    id <EKReminderEditorDelegate> _reminderEditorDelegate;

}



- (void).cxx_destruct;

- (_Bool)_canDetachSingleOccurrence;

- (void)_copyEventForPossibleRevert;

- (id)_editItems;

- (id)_nameForDeleteButton;

- (void)_revertEvent;

- (id)_viewForSheet;

- (_Bool)allowsDeletingFutureOccurrences;

- (void)customizeActionSheet:(id)arg1;

- (id)defaultAlertTitle;

- (id)defaultTitleForCalendarItem;

- (void)editItem:(id)arg1 didCommitFromDetailViewController:(_Bool)arg2;

- (void)editItem:(id)arg1 didEndDatePickingAnimated:(_Bool)arg2;

- (void)editItem:(id)arg1 willBeginDatePickingWithDate:(id)arg2 action:(SEL)arg3 animated:(_Bool)arg4 forSubitem:(unsigned long long)arg5 inSubsection:(unsigned long long)arg6;

- (void)editItemTextChanged:(id)arg1;

- (unsigned long long)entityType;

- (void)loadView;

- (double)marginForTableView:(id)arg1;

- (id)notificationNamesForLocaleChange;

- (id)preferredTitle;

- (void)prepareEditItems;

@property(retain, nonatomic) EKReminder *reminder;

@property(nonatomic) __weak id <EKReminderEditorDelegate> reminderEditorDelegate; // @synthesize reminderEditorDelegate=_reminderEditorDelegate;

- (_Bool)saveCalendarItemWithSpan:(int)arg1 error:(id *)arg2;

@property(retain, nonatomic) id <EKStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;

- (void)setupDeleteButton;

- (_Bool)shouldDisplayEditItem:(id)arg1 withVisibility:(int)arg2;

- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;



@end


