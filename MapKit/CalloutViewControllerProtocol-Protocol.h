/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString, UIView;



@protocol CalloutViewControllerProtocol <NSObject>

- (void)beginMapsTransitionMovingSideways;

@property(copy, nonatomic) NSString *calloutSubtitle;

@property(copy, nonatomic) NSString *calloutTitle;

- (_Bool)canDisplayCompleteTitleWhenExpanded;

@property(retain, nonatomic) UIView *detailView;

@property(retain, nonatomic) UIView *leftView;

@property(retain, nonatomic) UIView *rightView;

- (void)setCalloutSubtitle:(id)arg1 animated:(_Bool)arg2;

- (void)setDetailView:(id)arg1 animated:(_Bool)arg2;

- (void)setLeftView:(id)arg1 animated:(_Bool)arg2;

- (void)setRightView:(id)arg1 animated:(_Bool)arg2;

@end


