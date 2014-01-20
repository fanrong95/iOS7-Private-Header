/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SKUIPageComponent.h"


@class SKUIEditorialComponent, SKUIItem;



@interface SKUILockupComponent : SKUIPageComponent

{

    SKUIEditorialComponent *_editorial;

    SKUIItem *_item;

    long long _itemIdentifier;

    struct SKUILockupStyle _lockupStyle;

}



- (void).cxx_destruct;

- (void)_setItem:(id)arg1;

- (void)_setLockupStyle:(struct SKUILockupStyle)arg1;

- (long long)componentType;

@property(readonly, nonatomic) SKUIEditorialComponent *editorial; // @synthesize editorial=_editorial;

- (id)initWithCustomPageContext:(id)arg1;

- (id)initWithItem:(id)arg1 style:(struct SKUILockupStyle)arg2;

- (id)initWithItemIdentifier:(long long)arg1 style:(struct SKUILockupStyle)arg2;

@property(readonly, nonatomic) SKUIItem *item; // @synthesize item=_item;

@property(readonly, nonatomic) long long itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;

@property(readonly, nonatomic) struct SKUILockupStyle lockupStyle; // @synthesize lockupStyle=_lockupStyle;



@end


