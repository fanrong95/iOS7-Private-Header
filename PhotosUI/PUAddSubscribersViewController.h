/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIViewController.h"



#import "UIAlertViewDelegate.h"



@class PLCloudSharedAlbum, PUPhotoStreamRecipientViewController, UIBarButtonItem;



@interface PUAddSubscribersViewController : UIViewController <UIAlertViewDelegate>

{

    PUPhotoStreamRecipientViewController *_composeRecipientController;

    UIBarButtonItem *_addButton;

    PLCloudSharedAlbum *_album;

}



- (void).cxx_destruct;

- (void)_addButtonHandler;

- (void)_cancelButtonHandler;

- (void)_dismiss;

- (void)_keyboardWillShow:(id)arg1;

- (void)_saveAndDismiss;

- (_Bool)_validateRecipientsToAdd:(id)arg1;

@property(readonly, nonatomic) PLCloudSharedAlbum *album; // @synthesize album=_album;

- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;

- (id)backingNavigationControllerForComposeRecipientViewController:(id)arg1;

- (id)contentScrollView;

- (void)dealloc;

- (id)initWithSharedStream:(id)arg1;

- (void)loadView;

- (void)recipientViewController:(id)arg1 didEnterText:(id)arg2;

- (void)recipientViewControllerDidAddRecipient:(id)arg1;

- (void)recipientViewControllerDidRemoveRecipient:(id)arg1;

- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;

- (void)viewDidLoad;

- (void)viewWillAppear:(_Bool)arg1;

- (void)viewWillDisappear:(_Bool)arg1;



@end


