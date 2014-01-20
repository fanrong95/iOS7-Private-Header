/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "ABContentController.h"


#import "ABMembersDataSourceDelegate.h"

#import "ABSearchOperationDelegate.h"

#import "UISearchBarDelegate.h"

#import "UISearchDisplayDelegate.h"

#import "UITextFieldDelegate.h"



@class ABMembersDataSource, ABMembersFilteredDataSource, NSIndexPath, NSOperationQueue, NSString, UISearchBar, UISearchDisplayController, UITableView, UIViewController, _UINavigationControllerPalette;



@interface ABMembersController : ABContentController <ABMembersDataSourceDelegate, UITextFieldDelegate, UISearchDisplayDelegate, ABSearchOperationDelegate, UISearchBarDelegate>

{

    ABMembersDataSource *_membersDataSource;

    ABMembersFilteredDataSource *_searchDataSource;

    id <ABStyleProvider> _styleProvider;

    unsigned long long _cellsCreated;

    unsigned long long _memberCount;

    UITableView *_tableView;

    UISearchBar *_searchBar;

    UISearchDisplayController *_searchController;

    UIViewController *_parentViewController;

    unsigned long long _searchSequenceNumber;

    NSOperationQueue *_operationQueue;

    id <ABMembersControllerDelegate> _membersControllerDelegate;

    _Bool _showingCardFromSearch;

    _Bool _shouldDeactivateSearch;

    NSIndexPath *_selectedIndexPath;

    _Bool _searchEnabled;

    _Bool _needToClearOldResults;

    id <ABMembersControllerSearchCompletionDelegate> _searchCompletionDelegate;

    _UINavigationControllerPalette *_searchPalette;

}



+ (id)newNameSearchOperationWithString:(id)arg1 contactsFilter:(id)arg2 addressBook:(void *)arg3 delegate:(id)arg4 inOutSequenceNumber:(unsigned long long *)arg5;

- (id)__searchBar;

- (id)__searchController;

- (void)_applyStylesToTableView:(id)arg1;

- (void)_cancelGALSearch;

- (void)_deselectAllRowsWithAnimation;

- (id)_localizedStringForError:(int)arg1;

- (void)_reloadFontSizes;

- (void)_reselectLastSelectedCellIfNeeded;

- (void)_searchForWords:(id)arg1;

- (void *)_selectedPerson;

- (void)_setSelectedIndexPath:(id)arg1;

- (_Bool)_shouldDeactivateOnCancelButtonClicked;

- (void)_updateCountString;

- (void)_updateEmptyTableViewAnimated:(_Bool)arg1;

- (void)_updateNoContactsViewAnimated:(_Bool)arg1;

- (void)_updateRowsHeights;

- (_Bool)abDataSource:(id)arg1 selectedPerson:(void *)arg2 atIndexPath:(id)arg3 withMemberCell:(id)arg4 animate:(_Bool)arg5;

- (_Bool)abDataSource:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2;

- (_Bool)abDataSourceAllowsShowingPersonsCards:(id)arg1;

- (void)cancelSearching:(id)arg1;

- (void)cancelSearchingAnimated:(_Bool)arg1;

- (unsigned long long)cellsCreated;

- (id)contactsFilter;

- (id)contentView;

@property(readonly, nonatomic) NSString *currentSearchText;

- (id)currentTableView;

- (void)dealloc;

- (void)deselectAllRowsWithAnimation:(_Bool)arg1;

- (void)displayedMembersListChanged;

- (long long)globalIndexOfMember:(void *)arg1;

- (id)initWithAddressBook:(void *)arg1;

@property(nonatomic, getter=isSearchEnabled) _Bool searchEnabled; // @synthesize searchEnabled=_searchEnabled;

- (_Bool)isSearching;

@property(readonly, nonatomic) _Bool isServerSearchGroup;

- (void)makeMainTableViewVisible;

@property(nonatomic) id <ABMembersControllerDelegate> membersControllerDelegate; // @synthesize membersControllerDelegate=_membersControllerDelegate;

- (id)membersDataSource;

- (id)operationQueue;

- (void)reload;

- (void)resetStateForDisplayedFilterChange;

- (void)searchBarCancelButtonClicked:(id)arg1;

@property(nonatomic) id <ABMembersControllerSearchCompletionDelegate> searchCompletionDelegate; // @synthesize searchCompletionDelegate=_searchCompletionDelegate;

- (void)searchCurrentContactsGroupForWords:(id)arg1 animated:(_Bool)arg2;

- (id)searchDataSource;

- (_Bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;

- (void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2;

- (void)searchDisplayControllerDidEndSearch:(id)arg1;

- (void)searchDisplayControllerWillBeginSearch:(id)arg1;

- (void)searchDisplayControllerWillEndSearch:(id)arg1;

- (void)searchOperation:(id)arg1 didFindMatches:(id)arg2 moreComing:(_Bool)arg3;

@property(retain, nonatomic) _UINavigationControllerPalette *searchPalette; // @synthesize searchPalette=_searchPalette;

- (_Bool)selectAndScrollMemberVisible:(void *)arg1;

- (id)selectedCell;

- (void)setAddressBook:(void *)arg1;

- (void)setBannerTitle:(id)arg1 value:(id)arg2;

- (void)setCellsCreated:(unsigned long long)arg1;

- (void)setParentViewController:(id)arg1;

@property(retain, nonatomic) id <ABStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;

- (_Bool)shouldShowGroups;

- (_Bool)shouldShowIndex;

- (_Bool)showCardForPerson:(void *)arg1 withMemberCell:(id)arg2 animate:(_Bool)arg3;

- (void)stopScrolling;

- (id)tableView;

- (id)tableViewPathToMember:(void *)arg1;

- (void)viewDidAppear:(_Bool)arg1;

- (void)viewWillAppear:(_Bool)arg1;

- (void)viewWillDisappear:(_Bool)arg1;

- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;



@end


