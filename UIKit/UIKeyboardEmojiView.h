/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIControl.h"


@class UIKBRenderConfig, UIKeyboardEmoji, UIKeyboardEmojiImageView, UIView, UIView<UIKeyboardEmojiPressIndicationDelegate>;



__attribute__((visibility("hidden")))

@interface UIKeyboardEmojiView : UIControl

{

    UIKeyboardEmoji *_emoji;

    UIView *_popup;

    UIKeyboardEmojiImageView *_imageView;

    UIKBRenderConfig *_renderConfig;

    UIView<UIKeyboardEmojiPressIndicationDelegate> *_delegate;

}



+ (id)emojiViewForEmoji:(id)arg1 withFrame:(struct CGRect)arg2;

+ (void)recycleEmojiView:(id)arg1;

- (id)createAndInstallKeyPopupView;

- (void)dealloc;

@property(retain) UIView<UIKeyboardEmojiPressIndicationDelegate> *delegate; // @synthesize delegate=_delegate;

@property(retain) UIKeyboardEmoji *emoji; // @synthesize emoji=_emoji;

@property(retain) UIKeyboardEmojiImageView *imageView; // @synthesize imageView=_imageView;

- (id)initWithFrame:(struct CGRect)arg1 emoji:(id)arg2;

@property(retain) UIView *popup; // @synthesize popup=_popup;

@property(retain, nonatomic) UIKBRenderConfig *renderConfig; // @synthesize renderConfig=_renderConfig;

- (void)setEmoji:(id)arg1 withFrame:(struct CGRect)arg2;

- (void)uninstallPopup;



@end


