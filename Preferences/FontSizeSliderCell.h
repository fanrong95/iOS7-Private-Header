/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PSSliderTableCell.h"


@class UILabel;



@interface FontSizeSliderCell : PSSliderTableCell

{

    UILabel *_smallSizeLabel;

    UILabel *_largeSizeLabel;

    UILabel *_veryLargeSizeLabel;

}



- (void)dealloc;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

- (void)layoutSubviews;

- (id)newControl;



@end


