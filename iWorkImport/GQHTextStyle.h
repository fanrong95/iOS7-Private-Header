/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface GQHTextStyle : NSObject

{

}



+ (struct __CTFont *)createFontFromName:(struct __CFString *)arg1 size:(float)arg2;

+ (_Bool)getDefaultLineHeight:(struct __CFString *)arg1 fontSize:(float)arg2 defLineHeight:(int *)arg3;

+ (void)mapStyle:(id)arg1 style:(id)arg2 state:(id)arg3;

+ (void)mapStyle:(id)arg1 style:(id)arg2 state:(id)arg3 isSpan:(_Bool)arg4;

+ (const char *)name;

+ (struct __CFString *)platformCreateCssFontFamilyStringFromFontName:(struct __CFString *)arg1;

+ (_Bool)platformGetDefaultLineHeight:(struct __CFString *)arg1 fontSize:(float)arg2 defLineHeight:(int *)arg3;

+ (void)reduceFontSizeForSuperscriptedText:(id)arg1 style:(id)arg2 state:(id)arg3;



@end

