/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "_UILegibilityView.h"


@class NSString, UIFont;



@interface _UILegibilityLabel : _UILegibilityView

{

    _Bool _usesSecondaryColor;

    NSString *_string;

    UIFont *_font;

}



@property(readonly, nonatomic) double baselineOffset;

- (void)dealloc;

@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;

- (id)initWithSettings:(id)arg1 strength:(double)arg2 string:(id)arg3 font:(id)arg4;

- (id)initWithSettings:(id)arg1 strength:(double)arg2 string:(id)arg3 font:(id)arg4 options:(long long)arg5;

@property(copy, nonatomic) NSString *string; // @synthesize string=_string;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

- (void)updateImage;

@property(readonly, nonatomic) _Bool usesSecondaryColor; // @synthesize usesSecondaryColor=_usesSecondaryColor;



@end


