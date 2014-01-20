/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"


@class UILabel;



__attribute__((visibility("hidden")))

@interface UIDatePickerContentView : UIView

{

    struct {

        unsigned int isAmPm:1;

    } _datePickerContentViewFlags;

    _Bool _isModern;

    UILabel *_titleLabel;

    double _titleLabelMaxX;

    long long _titleAlignment;

}



- (_Bool)_canBeReusedInPickerView;

- (void)dealloc;

- (id)initWithFrame:(struct CGRect)arg1;

@property(nonatomic) _Bool isAmPm;

@property(nonatomic) _Bool isModern; // @synthesize isModern=_isModern;

- (void)layoutSubviews;

@property(nonatomic) long long titleAlignment; // @synthesize titleAlignment=_titleAlignment;

@property(nonatomic) double titleLabelMaxX; // @synthesize titleLabelMaxX=_titleLabelMaxX;

@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;



@end


