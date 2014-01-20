/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class NSNumberFormatter, UIActivityIndicatorView, UILabel;



@interface PLSyncProgressView : UIView

{

    UIActivityIndicatorView *_spinner;

    UILabel *_infoLabel;

    NSNumberFormatter *_countFormatter;

    int _style;

    int _progressType;

    unsigned long long _currentCount;

    unsigned long long _totalCount;

}



- (id)_progressDescription;

@property(readonly, nonatomic) unsigned long long currentCount; // @synthesize currentCount=_currentCount;

- (void)dealloc;

- (id)initWithStyle:(int)arg1;

- (void)layoutSubviews;

@property(readonly, nonatomic) int progressType; // @synthesize progressType=_progressType;

- (void)setCurrentCount:(unsigned long long)arg1 totalCount:(unsigned long long)arg2 progressType:(int)arg3;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@property(readonly, nonatomic) int style; // @synthesize style=_style;

@property(readonly, nonatomic) unsigned long long totalCount; // @synthesize totalCount=_totalCount;



@end


