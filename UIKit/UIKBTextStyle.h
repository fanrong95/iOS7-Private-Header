/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class NSString;



__attribute__((visibility("hidden")))

@interface UIKBTextStyle : NSObject <NSCopying>

{

    NSString *_fontName;

    double _fontSize;

    double _minFontSize;

    double _kerning;

    double _textOpacity;

    NSString *_textColor;

    NSString *_etchColor;

    double _pathWeight;

    long long _selector;

    struct CGPoint _textOffset;

    struct CGPoint _etchOffset;

}



+ (id)styleWithFontName:(id)arg1 withFontSize:(double)arg2;

+ (id)styleWithTextColor:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

@property(retain, nonatomic) NSString *etchColor; // @synthesize etchColor=_etchColor;

@property(nonatomic) struct CGPoint etchOffset; // @synthesize etchOffset=_etchOffset;

@property(retain, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;

@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;

- (id)init;

@property(nonatomic) double kerning; // @synthesize kerning=_kerning;

@property(nonatomic) double minFontSize; // @synthesize minFontSize=_minFontSize;

- (void)overlayWithStyle:(id)arg1;

@property(nonatomic) double pathWeight; // @synthesize pathWeight=_pathWeight;

@property(nonatomic) long long selector; // @synthesize selector=_selector;

@property(retain, nonatomic) NSString *textColor; // @synthesize textColor=_textColor;

@property(nonatomic) struct CGPoint textOffset; // @synthesize textOffset=_textOffset;

@property(nonatomic) double textOpacity; // @synthesize textOpacity=_textOpacity;



@end


