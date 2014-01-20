/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class ABStyleProvider, ABUIPerson, UIImageView;



@interface ABContactListPhotoView : UIView

{

    UIImageView *_contactImageView;

    ABStyleProvider *_styleProvider;

    ABUIPerson *_person;

}



- (id)_framedPhoto;

- (void)dealloc;

- (id)initWithFrame:(struct CGRect)arg1;

- (id)initWithFrame:(struct CGRect)arg1 UIStyle:(int)arg2;

- (id)initWithFrame:(struct CGRect)arg1 styleProvider:(id)arg2;

- (struct CGSize)intrinsicContentSize;

@property(retain, nonatomic) ABUIPerson *person; // @synthesize person=_person;

@property(nonatomic) void *record;

- (void)setFrame:(struct CGRect)arg1;

@property(retain, nonatomic) ABStyleProvider *styleProvider; // @synthesize styleProvider=_styleProvider;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;



@end


