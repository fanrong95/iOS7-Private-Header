/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "SKUISearchFieldDelegate.h"



@class SKUIClientContext, SKUISearchFieldController, UIViewController;



@interface SKUIIPadSearchController : NSObject <SKUISearchFieldDelegate>

{

    SKUIClientContext *_clientContext;

    UIViewController *_parentViewController;

    SKUISearchFieldController *_searchFieldController;

}



- (void).cxx_destruct;

- (id)_existingSharedResultsViewController;

- (id)_searchFieldController;

- (void)_searchFieldController:(id)arg1 requestSearchWithURL:(id)arg2 orSearchTerm:(id)arg3;

- (id)_sharedResultsViewController;

- (void)_termDidChangeNotification:(id)arg1;

@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;

- (void)dealloc;

- (id)initWithParentViewController:(id)arg1;

- (id)newSearchFieldBarItem;

@property(readonly, nonatomic) UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;

@property(readonly, nonatomic) SKUISearchFieldController *searchFieldController;

- (void)searchFieldController:(id)arg1 requestSearchWithSearchTerm:(id)arg2;

- (void)searchFieldController:(id)arg1 requestSearchWithURL:(id)arg2;

- (_Bool)searchFieldControllerShouldBeginEditing:(id)arg1;

- (void)setNumberOfSearchResults:(long long)arg1;

- (void)setSearchFieldPlaceholderText:(id)arg1;

- (void)setSearchFieldText:(id)arg1;



@end


