/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "GKCollectionViewController.h"


@class GKGame, GKSimpleComposeController, NSArray;



@interface GKPlayerPickerViewController : GKCollectionViewController

{

    _Bool _supportsNearby;

    long long _maxSelectable;

    GKGame *_game;

    id <GKNearbyBrowserDelegate> _nearbyDelegate;

    id _handler;

    GKSimpleComposeController *_composeController;

    NSArray *_preselectedPlayerIDs;

}



+ (id)challengesPickerWithChallenge:(id)arg1 selectedPlayerIDs:(id)arg2;

+ (id)multiplayerPickerForGame:(id)arg1 withSelectedPlayerIDs:(id)arg2 hiddenPlayers:(id)arg3;

- (_Bool)_gkWantsCustomRightBarButtonItemInViewService;

- (void)cancel;

- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;

- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;

@property(retain, nonatomic) GKSimpleComposeController *composeController; // @synthesize composeController=_composeController;

- (void)configureViewFactories;

- (void)dealloc;

- (void)didEnterLoadedState;

- (void)done;

@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;

@property(copy, nonatomic) id handler; // @synthesize handler=_handler;

- (id)initWithGame:(id)arg1 selectedPlayerIDs:(id)arg2;

@property(nonatomic) long long maxSelectable; // @synthesize maxSelectable=_maxSelectable;

@property(nonatomic) id <GKNearbyBrowserDelegate> nearbyDelegate; // @synthesize nearbyDelegate=_nearbyDelegate;

@property(retain, nonatomic) NSArray *preselectedPlayerIDs; // @synthesize preselectedPlayerIDs=_preselectedPlayerIDs;

@property(nonatomic) _Bool supportsNearby; // @synthesize supportsNearby=_supportsNearby;

- (id)splitingDataSource;

- (void)updateMetrics;

- (void)viewDidLoad;

- (void)viewWillAppear:(_Bool)arg1;

- (void)viewWillDisappear:(_Bool)arg1;



@end


