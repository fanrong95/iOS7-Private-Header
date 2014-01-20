/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SLComposeServiceViewController.h"


#import "SLFacebookAlbumChooserViewControllerDelegate.h"

#import "SLFacebookAudienceViewControllerDelegate.h"

#import "SLFacebookVideoOptionsDelegate.h"

#import "SLPlaceDataSourceDelegate.h"

#import "SLSheetPlaceViewControllerDelegate.h"



@class ACAccount, ACAccountStore, ALAssetsLibrary, SLFacebookAlbumChooserViewController, SLFacebookAlbumManager, SLFacebookPlaceManager, SLFacebookPost, SLFacebookPostPrivacyManager, SLFacebookSession, SLFacebookVideoOptionsViewController, SLSheetAction, SLSheetPlaceViewController, SLVideoQualityOption, UIViewController<SLFacebookAudienceViewController>;



@interface SLFacebookComposeViewController : SLComposeServiceViewController <SLPlaceDataSourceDelegate, SLSheetPlaceViewControllerDelegate, SLFacebookAudienceViewControllerDelegate, SLFacebookAlbumChooserViewControllerDelegate, SLFacebookVideoOptionsDelegate>

{

    _Bool _wasPresented;

    _Bool _hasAccessToAccount;

    _Bool _hasCheckedAccess;

    _Bool _hasShowedLocationDeniedAlert;

    SLFacebookSession *_session;

    ACAccountStore *_accountStore;

    SLSheetPlaceViewController *_placeViewController;

    UIViewController<SLFacebookAudienceViewController> *_audienceViewController;

    SLFacebookAlbumChooserViewController *_albumChooserViewController;

    SLFacebookVideoOptionsViewController *_videoOptionsViewController;

    SLFacebookPost *_post;

    SLFacebookPostPrivacyManager *_postPrivacyManager;

    SLFacebookPlaceManager *_placeManager;

    SLFacebookAlbumManager *_albumManager;

    ALAssetsLibrary *_assetsLibrary;

    SLSheetAction *_privacySheetAction;

    SLSheetAction *_albumSheetAction;

    SLSheetAction *_placeSheetAction;

    SLSheetAction *_videoOptionsAction;

    SLVideoQualityOption *_selectedVideoQualityOption;

    struct {

        unsigned int showAlbumAction:1;

        unsigned int showPrivacyAction:1;

        unsigned int showPlaceAction:1;

        unsigned int showVideoDetailAction:1;

    } _actionFlags;

    id _completionHandler;

}



+ (id)serviceBundle;

- (void).cxx_destruct;

- (id)_albumSheetAction;

- (void)_handlePostPrivacyResultWithSuccess:(_Bool)arg1 error:(id)arg2;

- (_Bool)_isLocationAuthorizationDenied;

- (id)_placeSheetAction;

- (void)_presentAlbumViewController;

- (void)_presentAudienceViewController;

- (void)_presentFacebookDisabledAlert;

- (void)_presentNoAccountsAlert;

- (void)_presentPlaceViewController;

- (void)_presentVideoOptionsViewController;

- (id)_privacySheetAction;

- (void)_setPlace:(id)arg1;

- (void)_setVideoSizeOptionIdentifier:(id)arg1;

- (void)_updateAudienceButtonForPrivacySettingType:(int)arg1 name:(id)arg2;

- (id)_videoOptionIdentifer;

- (id)_videoOptionsAction;

- (id)_videoQualityOption;

@property(retain) ACAccountStore *accountStore; // @dynamic accountStore;

- (void)albumChooserViewController:(id)arg1 didSelectAlbum:(id)arg2;

- (id)albumManager;

- (void)audienceViewController:(id)arg1 didSelectPostPrivacySetting:(id)arg2;

- (void)callCompletionHandlerWithResult:(long long)arg1;

- (_Bool)canPost;

@property(copy, nonatomic) id completionHandler; // @synthesize completionHandler=_completionHandler;

- (void)createPreviewIfNeeded;

- (void)didReceiveMemoryWarning;

- (void)handleImagePostWithURL;

- (_Bool)hasAccountAccess;

- (id)init;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

- (void)loadView;

- (void)placeManager:(id)arg1 failedWithError:(id)arg2;

- (void)placeManager:(id)arg1 updatedPlaces:(id)arg2;

- (void)placeViewController:(id)arg1 didSelectPlace:(id)arg2;

@property(readonly) ACAccount *privilegedAccount;

- (void)send;

- (void)setupCommonUI;

- (id)sheetActions;

- (void)sheetPresentationAnimationDidFinish;

- (_Bool)validateText:(id)arg1;

- (void)videoOptionsViewController:(id)arg1 didSelectVideoQualityOption:(id)arg2;

- (void)viewDidAppear:(_Bool)arg1;

- (void)viewDidUnload;

- (void)viewWillAppear:(_Bool)arg1;

- (void)viewWillDisappear:(_Bool)arg1;



@end


