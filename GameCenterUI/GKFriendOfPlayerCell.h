/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "GKBasePlayerCell.h"


@class UILabel;



@interface GKFriendOfPlayerCell : GKBasePlayerCell

{

    UILabel *_commonalitiesLabel;

}



@property(retain, nonatomic) UILabel *commonalitiesLabel; // @synthesize commonalitiesLabel=_commonalitiesLabel;

- (void)dealloc;

- (void)didUpdateModel;

- (id)initWithFrame:(struct CGRect)arg1;

- (void)prepareForReuse;

- (void)updateLineLayoutConstraints;



@end


