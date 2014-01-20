/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class UILabel;



@interface EKCurrentTimeMarkerView : UIView

{

    _Bool _showsThumb;

    _Bool _showsLine;

    UILabel *_currentTimeLabel;

}



- (void).cxx_destruct;

- (struct CGRect)_lineFrame;

@property(readonly, nonatomic) struct CGRect currentTimeFrame;

@property(retain, nonatomic) UILabel *currentTimeLabel; // @synthesize currentTimeLabel=_currentTimeLabel;

- (void)drawRect:(struct CGRect)arg1;

- (id)initWithFrame:(struct CGRect)arg1;

@property(readonly, nonatomic) double markerMidHeight;

@property(readonly, nonatomic) double markerWidth;

@property(nonatomic) _Bool showsLine; // @synthesize showsLine=_showsLine;

@property(nonatomic) _Bool showsThumb; // @synthesize showsThumb=_showsThumb;

- (void)updateTime;



@end


