/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "UISearchBarDelegate.h"

#import "UISearchDisplayDelegate.h"

#import "UITableViewDataSource.h"

#import "UITableViewDelegate.h"



@class ASSearchDisplayController, NSOperationQueue, NSString, SKUIClientContext, SKUICompletionList, SSVLoadURLOperation, UISearchBar, UIViewController;



@interface SKUISearchFieldController : NSObject <UISearchDisplayDelegate, UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate>

{

    NSString *_baseHintsURLString;

    SKUIClientContext *_clientContext;

    SKUICompletionList *_completionList;

    id <SKUISearchFieldDelegate> _delegate;

    SSVLoadURLOperation *_loadOperation;

    NSOperationQueue *_operationQueue;

    ASSearchDisplayController *_searchDisplayController;

    long long _numberOfSearchResults;

}



- (void).cxx_destruct;

- (void)_loadResultsForSearchTerm:(id)arg1;

- (void)_loadResultsForURL:(id)arg1;

- (void)_recordMetricsEvent:(id)arg1;

- (void)_reloadData;

- (void)_setResponse:(id)arg1 error:(id)arg2;

@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;

@property(readonly, nonatomic) UIViewController *contentsController;

- (void)dealloc;

@property(nonatomic) __weak id <SKUISearchFieldDelegate> delegate; // @synthesize delegate=_delegate;

- (id)initWithContentsController:(id)arg1;

@property(nonatomic) long long numberOfSearchResults; // @synthesize numberOfSearchResults=_numberOfSearchResults;

@property(readonly, nonatomic) UISearchBar *searchBar;

- (void)searchBar:(id)arg1 textDidChange:(id)arg2;

- (void)searchBarSearchButtonClicked:(id)arg1;

- (_Bool)searchBarShouldBeginEditing:(id)arg1;

- (_Bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;

- (void)setSearchTerm:(id)arg1;

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;



@end


