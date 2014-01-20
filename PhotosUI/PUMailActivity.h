/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIMailActivity.h"



#import "MFMailComposeViewControllerDelegate.h"

#import "PUActivity.h"



@class MFMailComposeViewController, NSString, PLManagedAsset, PLUIEditVideoViewController, PLVideoRemaker, PUActivityItemSourceController, UIViewController;



@interface PUMailActivity : UIMailActivity <MFMailComposeViewControllerDelegate, PUActivity>

{

    UIViewController *_referenceViewController;

    PLVideoRemaker *_remaker;

    _Bool _remakingWasCancelled;

    PLManagedAsset *_currentVideo;

    NSString *_trimmedFilePath;

    MFMailComposeViewController *_mailComposeController;

    PLUIEditVideoViewController *_editVideoViewController;

    id _strongSelf;

    PUActivityItemSourceController *_itemSourceController;

}



- (void).cxx_destruct;

- (_Bool)_canPerformEmailActivity;

- (void)_cancelRemaking:(id)arg1;

- (void)_discardTrimmedFile;

- (_Bool)_presentActivityOnViewController:(id)arg1 animated:(_Bool)arg2 completion:(id)arg3;

- (void)_pu_cleanup;

- (void)_remakerDidFinish:(id)arg1;

- (void)_sendViaEmail;

- (void)_showRemakerProgressView:(_Bool)arg1;

- (void)_showTrimViewControllerForVideo:(id)arg1 maximumTrimDuration:(double)arg2 trimButtonTitle:(id)arg3;

- (_Bool)_showTrimViewControllerIfNeededForVideo:(id)arg1 usingMode:(int)arg2;

- (void)_transcodeVideo:(id)arg1 usingMode:(int)arg2;

- (void)activityDidFinish:(_Bool)arg1;

- (id)activityViewController;

- (_Bool)canPerformWithActivityItems:(id)arg1;

- (void)composeMailForPhotos;

- (void)composeMailForVideo:(id)arg1 trimmedFilePath:(id)arg2;

- (void)dealloc;

- (void)editVideoViewController:(id)arg1 didTrimVideoWithOptions:(id)arg2;

- (void)editVideoViewControllerDidCancel:(id)arg1;

@property(nonatomic) __weak PUActivityItemSourceController *itemSourceController; // @synthesize itemSourceController=_itemSourceController;

- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;

- (id)mailComposeViewController;

- (void)prepareWithActivityItems:(id)arg1;

- (void)videoRemakerDidBeginRemaking:(id)arg1;

- (void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2;



@end


