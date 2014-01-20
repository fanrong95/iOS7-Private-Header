/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIViewController.h"



@class NSOperationQueue, SKUIGift, SKUIGiftConfiguration, SSVLoadURLOperation;



@interface SKUIGiftStepViewController : UIViewController

{

    SKUIGift *_gift;

    SKUIGiftConfiguration *_giftConfiguration;

    SSVLoadURLOperation *_loadOperation;

    NSOperationQueue *_operationQueue;

}



- (void).cxx_destruct;

- (void)_finishImageLoadWithImage:(id)arg1 error:(id)arg2 block:(id)arg3;

- (void)finishGiftingWithResult:(_Bool)arg1;

@property(readonly, nonatomic) SKUIGift *gift; // @synthesize gift=_gift;

@property(readonly, nonatomic) SKUIGiftConfiguration *giftConfiguration; // @synthesize giftConfiguration=_giftConfiguration;

- (id)initWithGift:(id)arg1 configuration:(id)arg2;

- (void)loadItemArtworkWithArtworkContext:(id)arg1 completionBlock:(id)arg2;

@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;



@end

