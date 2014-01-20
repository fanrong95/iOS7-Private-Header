/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIViewController.h"



#import "UITableViewDataSource.h"

#import "UITableViewDelegate.h"



@class MPAVItem, MPAlternateTrack, UITableView;



@interface MPAudioAndSubtitlesController : UIViewController <UITableViewDataSource, UITableViewDelegate>

{

    MPAVItem *_avItem;

    id <MPAudioAndSubtitlesControllerDelegate> _delegate;

    UITableView *_tableView;

    _Bool _hasAudio;

    _Bool _hasSubtitles;

    MPAlternateTrack *_originalAudioTrack;

    MPAlternateTrack *_originalSubtitleTrack;

    MPAlternateTrack *_newAudioTrack;

    MPAlternateTrack *_newSubtitleTrack;

}



- (void).cxx_destruct;

- (void)_doneButtonTapped:(id)arg1;

- (id)_trackAtIndexPath:(id)arg1;

- (void)dealloc;

@property(nonatomic) __weak id <MPAudioAndSubtitlesControllerDelegate> delegate; // @synthesize delegate=_delegate;

- (id)initWithAVItem:(id)arg1;

- (void)loadView;

- (long long)numberOfSectionsInTableView:(id)arg1;

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;

- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;



@end

