/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PSListController.h"


@class NSArray, UILabel;



@interface PSLargeTextController : PSListController

{

    UILabel *_bodyExampleLabel;

    UILabel *_headlineExampleLabel;

    long long _selectedCategoryIndex;

    NSArray *_contentSizeCategories;

    _Bool _usesExtendedRange;

    _Bool _showsExtendedRangeSwitch;

}



- (void)dealloc;

- (id)getDynamicTypeValueForSpecifier:(id)arg1;

- (void)loadView;

- (long long)numberOfSectionsInTableView:(id)arg1;

- (void)setDynamicTypeValue:(id)arg1 forSpecifier:(id)arg2;

@property(nonatomic) _Bool showsExtendedRangeSwitch; // @synthesize showsExtendedRangeSwitch=_showsExtendedRangeSwitch;

- (void)setUsesExtendedRange:(id)arg1 forSpecifier:(id)arg2;

- (void)sizeCategoryDidChange:(id)arg1;

- (id)specifiers;

- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;

- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

- (void)updateExampleFonts;

- (id)usesExtendedRangeForSpecifier:(id)arg1;

- (void)viewDidLayoutSubviews;



@end


