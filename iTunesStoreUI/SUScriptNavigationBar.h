/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SUScriptObject.h"


@class NSArray, NSString, SUScriptButton, SUScriptNavigationItem;



@interface SUScriptNavigationBar : SUScriptObject

{

}



+ (void)initialize;

+ (id)webScriptNameForKeyName:(id)arg1;

+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;

- (id)_copyTopNavigationItem;

- (id)_nativeNavigationBar;

- (id)_topNavigationItem;

- (id)attributeKeys;

@property(readonly) SUScriptNavigationItem *backNavigationItem;

@property long long barStyle;

@property(readonly) long long barStyleBlack;

@property(readonly) long long barStyleDefault;

- (id)buttonWithTitle:(id)arg1 style:(id)arg2 target:(id)arg3 action:(id)arg4;

- (id)init;

- (id)initWithNativeNavigationBar:(id)arg1;

@property(retain) SUScriptButton *leftButton;

@property(retain) id <SUScriptNavigationItem> leftItem;

@property(readonly) NSArray *navigationItems;

@property(retain) NSString *prompt;

@property(retain) SUScriptButton *rightButton;

@property(retain) id <SUScriptNavigationItem> rightItem;

- (id)scriptAttributeKeys;

- (void)setBackNavigationItem:(id)arg1;

- (void)setLeftButton:(id)arg1 animated:(_Bool)arg2;

- (void)setLeftItem:(id)arg1 animated:(_Bool)arg2;

- (void)setNavigationItems:(id)arg1;

- (void)setRightButton:(id)arg1 animated:(_Bool)arg2;

- (void)setRightItem:(id)arg1 animated:(_Bool)arg2;

- (void)setTopNavigationItem:(id)arg1;

@property(copy) id translucent;

- (void)tearDownUserInterface;

@property(readonly) SUScriptNavigationItem *topNavigationItem;



@end


