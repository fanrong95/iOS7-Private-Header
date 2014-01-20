/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class GKButton, GKLabel, GKOpenGraphNode, GKStoreItemInternal, NSArray, UIActivityIndicatorView, UIImageView;



@interface GKFacebookLikeButton : UIView

{

    GKStoreItemInternal *_storeItem;

    GKButton *_button;

    GKLabel *_labelView;

    UIImageView *_logoView;

    UIActivityIndicatorView *_spinner;

    UIView *_containerView;

    GKOpenGraphNode *_openGraphNode;

    NSArray *_replaceableConstraints;

    UIView *_containerSpacerLeft;

    UIView *_containerSpacerRight;

}



- (void)applyConstraints;

@property(retain, nonatomic) GKButton *button; // @synthesize button=_button;

- (void)buttonPressed:(id)arg1;

- (void)configureButtonWithTitle:(id)arg1 state:(unsigned long long)arg2 imageName:(id)arg3;

@property(retain, nonatomic) UIView *containerSpacerLeft; // @synthesize containerSpacerLeft=_containerSpacerLeft;

@property(retain, nonatomic) UIView *containerSpacerRight; // @synthesize containerSpacerRight=_containerSpacerRight;

@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;

- (void)createButton;

- (void)createLabelView;

- (void)createLogoView;

- (void)createSpinner;

- (void)dealloc;

- (id)initWithFrame:(struct CGRect)arg1;

- (_Bool)isEnabled;

@property(retain, nonatomic) GKLabel *labelView; // @synthesize labelView=_labelView;

@property(retain, nonatomic) UIImageView *logoView; // @synthesize logoView=_logoView;

- (void)observeEnterForegroundNotification:(id)arg1;

@property(retain, nonatomic) GKOpenGraphNode *openGraphNode; // @synthesize openGraphNode=_openGraphNode;

@property(retain, nonatomic) NSArray *replaceableConstraints; // @synthesize replaceableConstraints=_replaceableConstraints;

@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;

@property(retain, nonatomic) GKStoreItemInternal *storeItem; // @synthesize storeItem=_storeItem;

- (void)updateContent;

- (id)viewForBaselineLayout;



@end


