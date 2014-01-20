/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class VKStylesheet;



@protocol VKStylesheetObserver <NSObject>

+ (_Bool)reloadOnStylesheetChange;

@property(readonly, nonatomic) VKStylesheet *stylesheet;



@optional

- (void)prepareForStylesheetTransitionToMapDisplayStyle:(long long)arg1 withReadinessBlock:(id)arg2;

- (void)stylesheetDidChange;

- (void)stylesheetDoneChanging;

- (void)stylesheetWillChange;

@end


