/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SUTableDataSource.h"


@class NSArray, NSMutableArray;



@interface SUAggregateDataSource : SUTableDataSource

{

    NSMutableArray *_headerViews;

    NSMutableArray *_sources;

    long long _tableViewStyle;

}



- (long long)_localIndexForSectionIndex:(long long)arg1;

- (void)addDataSource:(id)arg1 withHeaderView:(id)arg2;

- (_Bool)canDeleteIndexPath:(id)arg1;

- (_Bool)canDoubleTapIndexPath:(id)arg1;

- (_Bool)canSelectIndexPath:(id)arg1;

- (id)cellForIndexPath:(id)arg1;

- (double)cellHeightForIndexPath:(id)arg1;

- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;

- (id)dataSourceForIndexPath:(id)arg1;

- (void)dealloc;

- (_Bool)deleteIndexPath:(id)arg1;

- (id)headerViewForSection:(long long)arg1;

- (id)indexPathForRowIndex:(unsigned long long)arg1 inSectionIndex:(unsigned long long)arg2;

- (long long)numberOfColumnsInSection:(long long)arg1;

- (long long)numberOfRowsInSection:(long long)arg1;

- (long long)numberOfSections;

- (void)reloadCellContexts;

- (void)reloadData;

- (void)setCellReuseSource:(id)arg1;

@property(nonatomic) long long tableViewStyle; // @synthesize tableViewStyle=_tableViewStyle;

@property(readonly, nonatomic) NSArray *sources; // @synthesize sources=_sources;



@end


