/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIViewController.h"



#import "CKConversationSearcherDelegate.h"

#import "UIActionSheetDelegate.h"

#import "UITableViewDataSource.h"

#import "UITableViewDelegate.h"



@class CKConversationList, CKConversationSearcher, CKMessagesController, NSIndexPath, UITableView, UIToolbar;



@interface CKConversationListController : UIViewController <UITableViewDataSource, UITableViewDelegate, CKConversationSearcherDelegate, UIActionSheetDelegate>

{

    UITableView *_table;

    NSIndexPath *_previouslySelectedIndexPath;

    UIToolbar *_buttonBar;

    unsigned long long _willBeMarkedReadCount;

    int _disableUpdatesCount;

    unsigned int _dirty:1;

    unsigned int _isVisible:1;

    unsigned int _willRotate:1;

    CKMessagesController *_messagesController;

    CKConversationList *_conversationList;

    CKConversationSearcher *_searcher;

    _Bool _isInitialLoad;

}



- (void)_chatParticipantsChangedNotification:(id)arg1;

- (void)_chatUnreadCountDidChange:(id)arg1;

- (void)_contentSizeCategoryDidChange:(id)arg1;

- (void)_conversationDidChange:(id)arg1;

- (void)_conversationListDidChange:(id)arg1;

- (void)_conversationListDidFinishLoadingConversations:(id)arg1;

- (void)_conversationMessageWasSent:(id)arg1;

- (void)_conversationReadItemsDidChange:(id)arg1;

- (void)_conversationWasMarkedAsRead:(id)arg1;

- (void)_getRotationContentSettings:(CDStruct_ebaa735e *)arg1;

- (void)_groupsChanged:(id)arg1;

- (unsigned long long)_indexOfConverationClosestToDeletedIndex:(unsigned long long)arg1;

- (unsigned long long)_indexOfDefaultConversation;

- (void)_keyboardWillShowOrHide:(id)arg1;

- (void)_selectConversationAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2;

- (void)accessibilityLargeTextDidChange;

- (void)applicationWillSuspend;

- (void)composeButtonClicked:(id)arg1;

@property(nonatomic) CKConversationList *conversationList; // @synthesize conversationList=_conversationList;

- (void)conversationWillBeMarkedRead:(id)arg1;

- (void)dealloc;

- (void)deleteButtonPressedForIndexPath:(id)arg1;

- (void)didRotateFromInterfaceOrientation:(long long)arg1;

- (void)disableConversationListUpdates;

- (void)enableConversationListUpdates;

- (void)enableConversationListUpdatesQuietly;

- (double)heightForHeaderInTableView:(id)arg1;

- (void)hideSearchUI;

- (id)init;

- (id)inputAccessoryView;

- (void)loadView;

@property(nonatomic) CKMessagesController *messagesController; // @synthesize messagesController=_messagesController;

- (void)noteConversationListChanged;

- (void)noteUnreadCountsChanged;

- (long long)numberOfSectionsInTableView:(id)arg1;

- (void)parentControllerDidResume:(_Bool)arg1 animating:(_Bool)arg2;

- (void)prepareForResume;

- (void)prepareForSuspend;

@property(retain, nonatomic) NSIndexPath *previouslySelectedIndexPath; // @synthesize previouslySelectedIndexPath=_previouslySelectedIndexPath;

- (void)reloadStaleConversations;

- (void)scrollToTop;

- (id)searcher:(id)arg1 conversationForChatGUID:(id)arg2;

- (void)searcher:(id)arg1 didShowSearchResultsTableView:(id)arg2;

- (void)searcher:(id)arg1 userDidSelectChatGUID:(id)arg2 messageGUID:(id)arg3;

- (void)searcher:(id)arg1 willHideSearchResultsTableView:(id)arg2;

- (id)searcherContentsController:(id)arg1;

- (void)searcherWillEndSearch:(id)arg1;

- (void)selectConversationClosestToDeletedIndex:(unsigned long long)arg1;

- (void)selectDefaultConversationAnimated:(_Bool)arg1;

- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;

- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;

- (void)significantTimeChange;

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;

- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;

- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;

- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;

- (void)updateConversationList;

- (void)updateConversationSelection;

- (void)updateNavigationItems;

- (void)updateTitle;

- (void)viewDidAppear:(_Bool)arg1;

- (void)viewDidUnload;

- (id)viewForHeaderInTableView:(id)arg1;

- (void)viewWillAppear:(_Bool)arg1;

- (void)viewWillDisappear:(_Bool)arg1;

- (void)viewWillLayoutSubviews;

- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;



@end


