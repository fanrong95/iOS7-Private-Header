/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "EKEventDetailCell.h"


@class NSString, UILabel;



__attribute__((visibility("hidden")))

@interface EKEventDetailOrganizerCell : EKEventDetailCell

{

    NSString *_organizerName;

    UILabel *_organizerView;

    UILabel *_titleView;

}



- (void).cxx_destruct;

- (id)_organizerView;

- (id)_titleView;

- (_Bool)hasCustomLayout;

- (id)initWithEvent:(id)arg1 editable:(_Bool)arg2;

- (void)layoutForWidth:(double)arg1 position:(int)arg2;

- (_Bool)shouldDisplayForEvent;

- (_Bool)update;



@end


