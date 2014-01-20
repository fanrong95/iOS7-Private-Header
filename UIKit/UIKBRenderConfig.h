/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface UIKBRenderConfig : NSObject

{

    _Bool _lightKeyboard;

    double _blurRadius;

    double _blurSaturation;

    double _keycapOpacity;

    double _keyborderOpacity;

}



+ (id)darkConfig;

+ (id)defaultConfig;

+ (id)passcodeConfig;

@property(readonly, nonatomic) long long backdropStyle;

@property(nonatomic) double blurRadius; // @synthesize blurRadius=_blurRadius;

@property(nonatomic) double blurSaturation; // @synthesize blurSaturation=_blurSaturation;

- (id)description;

- (_Bool)isEqual:(id)arg1;

@property(nonatomic) double keyborderOpacity; // @synthesize keyborderOpacity=_keyborderOpacity;

@property(nonatomic) double keycapOpacity; // @synthesize keycapOpacity=_keycapOpacity;

@property(nonatomic) _Bool lightKeyboard; // @synthesize lightKeyboard=_lightKeyboard;

@property(readonly, nonatomic) _Bool whiteText;



@end


