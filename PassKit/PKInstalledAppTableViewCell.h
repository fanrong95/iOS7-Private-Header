/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UITableViewCell.h"



@class LSApplicationProxy;



@interface PKInstalledAppTableViewCell : UITableViewCell

{

    LSApplicationProxy *_app;

    id <PKInstalledAppTableViewCellDelegate> _delegate;

}



@property(retain, nonatomic) LSApplicationProxy *app; // @synthesize app=_app;

@property(nonatomic) id <PKInstalledAppTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;

- (id)initWithReuseIdentifier:(id)arg1;

- (void)layoutSubviews;

- (void)openTapped;



@end


