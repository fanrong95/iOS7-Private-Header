/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SUScriptViewController.h"


@class NSNumber, NSString, SUScriptFunction, WebScriptObject;



@interface SUScriptMenuViewController : SUScriptViewController

{

    SUScriptFunction *_action;

}



+ (void)initialize;

+ (id)webScriptNameForKeyName:(id)arg1;

+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;

- (id)_viewController;

@property(retain) WebScriptObject *action;

- (id)attributeKeys;

- (void)dealloc;

- (id)itemWithTitle:(id)arg1 userInfo:(id)arg2;

@property(retain) id items;

- (id)newNativeViewController;

- (id)scriptAttributeKeys;

@property(retain) NSNumber *selectedIndex;

@property(retain) NSString *title;



@end


