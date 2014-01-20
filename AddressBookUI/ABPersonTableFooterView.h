/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



#import "ABPersonTableActionDelegate.h"



@class ABPersonTableAction, NSString, UIButton;



@interface ABPersonTableFooterView : UIView <ABPersonTableActionDelegate>

{

    _Bool _editing;

    ABPersonTableAction *_deleteAction;

    UIView *_deleteView;

    UIView *_accessoryView;

    UIButton *_attributionButton;

    id <ABStyleProvider> _styleProvider;

}



@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;

@property(readonly, nonatomic) NSString *attribution;

- (struct CGRect)attributionFrame;

- (void)dealloc;

- (struct CGRect)deleteViewFrame;

- (id)initWithFrame:(struct CGRect)arg1;

@property(readonly, nonatomic, getter=isAttributionEnabled) _Bool attributionEnabled;

@property(nonatomic, getter=isEditing) _Bool tableEditing; // @synthesize tableEditing=_editing;

- (void)layoutSubviews;

- (void)removeDeleteAction;

- (void)setAttribution:(id)arg1 enabled:(_Bool)arg2 target:(id)arg3 action:(SEL)arg4;

- (void)setDeleteActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 animated:(_Bool)arg4;

- (void)setEditing:(_Bool)arg1;

- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;

@property(retain, nonatomic) id <ABStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;



@end


