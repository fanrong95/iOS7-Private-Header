/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIViewController.h"



@class SKUIClientContext, SKUIFacebookLikeStatus, SKUIReviewsFacebookView;



@interface SKUIReviewsFacebookViewController : UIViewController

{

    SKUIClientContext *_clientContext;

    id <SKUIReviewsFacebookViewControllerDelegate> _delegate;

    SKUIFacebookLikeStatus *_facebookLikeStatus;

    SKUIReviewsFacebookView *_facebookView;

}



- (void).cxx_destruct;

- (void)_changeStatusToUserLiked:(_Bool)arg1;

- (void)_reloadFacebookView;

- (void)_toggleLike:(id)arg1;

@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;

- (void)dealloc;

@property(nonatomic) __weak id <SKUIReviewsFacebookViewControllerDelegate> delegate; // @synthesize delegate=_delegate;

@property(copy, nonatomic) SKUIFacebookLikeStatus *facebookLikeStatus; // @synthesize facebookLikeStatus=_facebookLikeStatus;

- (void)loadView;



@end


