/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "GKCollectionViewController.h"


@class GKCollectionViewDataSource, NSArray;



@interface GKBasicCollectionViewController : GKCollectionViewController

{

    id _target;

    NSArray *_metricsForSections;

    GKCollectionViewDataSource *_initialDataSource;

}



- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;

- (void)configureDataSource;

- (void)dealloc;

- (id)initWithDataSource:(id)arg1 title:(id)arg2;

@property(retain, nonatomic) GKCollectionViewDataSource *initialDataSource; // @synthesize initialDataSource=_initialDataSource;

@property(retain, nonatomic) NSArray *metricsForSections; // @synthesize metricsForSections=_metricsForSections;

- (void)setDataSource:(id)arg1;

@property(retain, nonatomic) id target; // @synthesize target=_target;



@end


