/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UITableViewCell.h"



@class UILabel;



@interface TPAudioRouteCell : UITableViewCell

{

    _Bool _isActiveRoute;

    UILabel *_audioRouteNameLabel;

}



@property(nonatomic) UILabel *audioRouteNameLabel; // @synthesize audioRouteNameLabel=_audioRouteNameLabel;

- (void)dealloc;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@property(nonatomic) _Bool isActiveRoute; // @synthesize isActiveRoute=_isActiveRoute;

- (void)layoutSubviews;

- (void)setIsMuteButtonWithImage:(id)arg1;



@end


