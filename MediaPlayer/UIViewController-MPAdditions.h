/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIViewController.h"



@interface UIViewController (MPAdditions)

+ (void)_beginAppearanceTransitionFromViewController:(id)arg1 toViewController:(id)arg2 animated:(_Bool)arg3;

+ (void)_endAppearanceTransitionFromViewController:(id)arg1 toViewController:(id)arg2;

- (void)_addChildViewAndViewController:(id)arg1;

- (void)_addChildViewAndViewController:(id)arg1 asSubviewOfView:(id)arg2;

- (void)_addChildViewAndViewController:(id)arg1 asSubviewOfView:(id)arg2 addSubviewBlock:(id)arg3;

- (_Bool)_hasAncestorViewController:(id)arg1;

- (void)_removeFromParentViewAndViewController;

@end


