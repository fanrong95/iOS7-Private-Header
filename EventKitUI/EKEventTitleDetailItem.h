/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "EKEventDetailItem.h"


#import "EKEventDetailTitleCellDelegate.h"



@class NSObject<EKEventTitleDetailItemDelegate>, UIColor, UITableViewCell;



__attribute__((visibility("hidden")))

@interface EKEventTitleDetailItem : EKEventDetailItem <EKEventDetailTitleCellDelegate>

{

    UITableViewCell *_cell;

    UIColor *_color;

    _Bool _showDot;

    NSObject<EKEventTitleDetailItemDelegate> *_editDelegate;

}



- (void).cxx_destruct;

- (id)cellForSubitemAtIndex:(unsigned long long)arg1;

- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;

- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;

- (void)editButtonPressed;

@property(nonatomic) __weak NSObject<EKEventTitleDetailItemDelegate> *editDelegate; // @synthesize editDelegate=_editDelegate;

- (void)reset;

- (_Bool)shouldShowEditButtonInline;



@end


