/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIKeyboardEmojiPicker.h"


#import "UIKeyboardEmojiCategoryControl.h"



@class UIKeyboardEmojiCategoryController;



__attribute__((visibility("hidden")))

@interface UIKeyboardEmojiCategoryPicker : UIKeyboardEmojiPicker <UIKeyboardEmojiCategoryControl>

{

    UIKeyboardEmojiCategoryController *_categoryController;

}



- (id)categoryForCurrentRow;

- (void)dealloc;

- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;

- (void)scrollViewDidScroll:(id)arg1;

- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;

- (void)setCategory:(id)arg1;

- (id)symbolForRow:(long long)arg1;

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

- (id)titleForRow:(long long)arg1;



@end


