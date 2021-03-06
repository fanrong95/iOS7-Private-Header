/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SKUIRedeemStepViewController.h"


#import "SKUIItemStateCenterObserver.h"

#import "SKUIRedeemResultsViewDelegate.h"



@class NSOperationQueue, SKUIGiftItemView, SKUIItemStateCenter, SKUIRedeem, SKUIRedeemResultMessageView, SKUITextBoxView, SKUITextLayout, UIButton, UIImage, UIImageView;



@interface SKUIRedeemResultsViewController : SKUIRedeemStepViewController <SKUIItemStateCenterObserver, SKUIRedeemResultsViewDelegate>

{

    UIButton *_anotherButton;

    _Bool _extendedMessageIsExpanded;

    SKUITextLayout *_extendedMessageTextLayout;

    SKUITextBoxView *_extendedMessageView;

    UIImageView *_headerImageView;

    UIImage *_itemImage;

    SKUIItemStateCenter *_itemStateCenter;

    SKUIGiftItemView *_itemView;

    SKUIRedeemResultMessageView *_messageView;

    NSOperationQueue *_operationQueue;

    SKUIRedeem *_redeem;

    long long _redeemCategory;

}



- (void).cxx_destruct;

- (id)_anotherButtonSection;

- (void)_doneAction:(id)arg1;

- (id)_emptySection;

- (void)_extendedMessageAction:(id)arg1;

- (id)_extendedMessageViewSection;

- (id)_headerImageViewSection;

- (id)_item;

- (id)_itemView;

- (id)_itemViewSection;

- (id)_linksSection;

- (id)_messageViewSection;

- (void)_openAction:(id)arg1;

- (void)_redeemAnotherAction:(id)arg1;

- (void)_reloadResultViewMessage;

- (void)_reloadSections;

- (id)_resultImageViewSection;

- (void)_setHeaderImage:(id)arg1;

- (void)_setItemImage:(id)arg1;

- (void)dealloc;

- (id)initWithRedeem:(id)arg1;

- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;

- (void)loadView;

@property(readonly, nonatomic) SKUIRedeem *redeem; // @synthesize redeem=_redeem;

@property(nonatomic) long long redeemCategory; // @synthesize redeemCategory=_redeemCategory;

- (void)redeemResultsView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

- (void)viewWillAppear:(_Bool)arg1;



@end


