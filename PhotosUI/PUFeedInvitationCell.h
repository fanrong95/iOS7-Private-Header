/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PUFeedCell.h"


@class NSString, UIButton, UILabel, UIView;



@interface PUFeedInvitationCell : PUFeedCell

{

    NSString *_title;

    NSString *_subtitle;

    UILabel *__titleLabel;

    UILabel *__subtitleLabel;

    UIButton *__acceptButon;

    UIButton *__declineButton;

    UIView *__bottomSeparatorView;

}



- (void).cxx_destruct;

@property(retain, nonatomic, setter=_setAcceptButton:) UIButton *_acceptButon; // @synthesize _acceptButon=__acceptButon;

@property(retain, nonatomic, setter=_setBottomSeparatorView:) UIView *_bottomSeparatorView; // @synthesize _bottomSeparatorView=__bottomSeparatorView;

@property(retain, nonatomic, setter=_setDeclineButton:) UIButton *_declineButton; // @synthesize _declineButton=__declineButton;

- (id)_delegate;

- (void)_replyButtonAction:(id)arg1;

@property(retain, nonatomic, setter=_setSubtitleLabel:) UILabel *_subtitleLabel; // @synthesize _subtitleLabel=__subtitleLabel;

@property(retain, nonatomic, setter=_setTitleLabel:) UILabel *_titleLabel; // @synthesize _titleLabel=__titleLabel;

- (id)initWithFrame:(struct CGRect)arg1;

- (void)layoutSubviews;

@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;

@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;



@end


