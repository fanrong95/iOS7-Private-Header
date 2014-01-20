/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UICollectionReusableView.h"



#import "UISearchBarDelegate.h"



@class GKSearchBar, NSArray, NSNumber;



@interface GKSearchBarView : UICollectionReusableView <UISearchBarDelegate>

{

    GKSearchBar *_searchBar;

    id <UISearchBarDelegate> _delegate;

    NSNumber *_usePadConstraints;

    NSArray *_searchBarConstraints;

}



+ (double)defaultHeight;

+ (void)initialize;

+ (_Bool)requiresConstraintBasedLayout;

- (void)applyLayoutAttributes:(id)arg1;

- (void)dealloc;

@property(nonatomic) id <UISearchBarDelegate> delegate; // @synthesize delegate=_delegate;

- (void)establishSearchBarConstraints;

- (id)initWithFrame:(struct CGRect)arg1;

- (void)prepareForReuse;

@property(retain, nonatomic) GKSearchBar *searchBar; // @synthesize searchBar=_searchBar;

@property(retain, nonatomic) NSArray *searchBarConstraints; // @synthesize searchBarConstraints=_searchBarConstraints;

@property(nonatomic) NSNumber *usePadConstraints; // @synthesize usePadConstraints=_usePadConstraints;

- (void)updateConstraints;



@end


