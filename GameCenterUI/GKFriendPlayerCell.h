/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "GKBasePlayerCell.h"


@class UILabel;



@interface GKFriendPlayerCell : GKBasePlayerCell

{

    UILabel *_statusLabel;

    UILabel *_whenLabel;

}



+ (Class)cellClassForPlayer:(id)arg1;

+ (void)registerCellClassesWithCollectionView:(id)arg1;

- (void)dealloc;

- (void)didUpdateModel;

- (id)initWithFrame:(struct CGRect)arg1;

- (void)prepareForReuse;

@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;

@property(retain, nonatomic) UILabel *whenLabel; // @synthesize whenLabel=_whenLabel;



@end


