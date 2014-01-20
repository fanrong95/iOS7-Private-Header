/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "GKHeaderWithUnderlineView.h"


@class UISegmentedControl;



@interface GKSegmentedSelectorView : GKHeaderWithUnderlineView

{

    UISegmentedControl *_segmentedControl;

    id _target;

}



- (void)dealloc;

- (_Bool)drawsUnderline;

- (id)initWithFrame:(struct CGRect)arg1;

- (void)pinningStateChangedTo:(_Bool)arg1;

- (void)prepareForReuse;

@property(retain, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;

@property(nonatomic) id target; // @synthesize target=_target;



@end


