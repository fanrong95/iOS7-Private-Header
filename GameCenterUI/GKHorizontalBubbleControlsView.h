/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class NSArray;



@interface GKHorizontalBubbleControlsView : UIView

{

    NSArray *_bubbles;

    double _overlap;

    NSArray *_bubbleTokens;

}



@property(retain, nonatomic) NSArray *bubbleTokens; // @synthesize bubbleTokens=_bubbleTokens;

@property(retain, nonatomic) NSArray *bubbles; // @synthesize bubbles=_bubbles;

- (void)dealloc;

- (id)initWithFrame:(struct CGRect)arg1;

- (struct CGSize)intrinsicContentSize;

- (void)layoutSubviews;

@property(nonatomic) double overlap; // @synthesize overlap=_overlap;

- (void)setBounds:(struct CGRect)arg1;



@end


