/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"


@class NSString, UILabel;



@interface _UIMonogramView : UIView

{

    NSString *_name;

    NSString *_monogram;

    UILabel *_label;

}



- (id)initWithFrame:(struct CGRect)arg1;

@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;

- (id)labelForMonogram:(id)arg1;

- (void)layoutSubviews;

@property(copy, nonatomic) NSString *monogram; // @synthesize monogram=_monogram;

- (id)monogramForName:(id)arg1;

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;

- (void)setFrame:(struct CGRect)arg1;



@end

