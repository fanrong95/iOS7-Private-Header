/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"


@class UIColor;



__attribute__((visibility("hidden")))

@interface UITableViewCellSelectedBackground : UIView

{

    long long _selectionStyle;

    UIColor *_multiselectBackgroundColor;

    UIColor *_selectionTintColor;

    _Bool _multiselect;

}



- (void)dealloc;

- (void)drawRect:(struct CGRect)arg1;

@property(nonatomic, getter=isMultiselect) _Bool multiselect;

@property(retain, nonatomic) UIColor *multiselectBackgroundColor; // @synthesize multiselectBackgroundColor=_multiselectBackgroundColor;

@property(nonatomic) long long selectionStyle; // @synthesize selectionStyle=_selectionStyle;

@property(retain, nonatomic) UIColor *selectionTintColor; // @synthesize selectionTintColor=_selectionTintColor;



@end


