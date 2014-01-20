/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "SPDaemonQueryDelegate.h"



@class NSMutableDictionary, NSObject<OS_dispatch_group>, SPDaemonQueryToken, SPSearchResultSection;



@interface CKSpotlightQuery : NSObject <SPDaemonQueryDelegate>

{

    SPDaemonQueryToken *_queryToken;

    unsigned long long _resultIndex;

    SPSearchResultSection *_searchResults;

    NSMutableDictionary *_chatGUIDToLatestSearchResult;

    NSObject<OS_dispatch_group> *_searchResultLoadingGroup;

    id _completion;

    _Bool _processing;

    _Bool _cancelled;

}



- (void)_callCompletionIfNecessary;

- (void)_cleanup;

- (void)_processSearchResults;

- (void)cancel;

@property(copy, nonatomic) id completion; // @synthesize completion=_completion;

- (void)dealloc;

- (id)initWithSearchText:(id)arg1 completionBlock:(id)arg2;

- (void)searchDaemonQuery:(id)arg1 addedResults:(id)arg2;

- (void)searchDaemonQuery:(id)arg1 encounteredError:(id)arg2;

- (void)searchDaemonQueryCompleted:(id)arg1;



@end


