/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface PBColorScheme : NSObject

{

}



+ (void)addColorWithIndex:(int)arg1 fromScheme:(struct PptColorSchemeAtom *)arg2 atIndex:(int)arg3 inScheme:(id)arg4;

+ (void)addColorWithIndex:(int)arg1 fromScheme:(struct PptColorSchemeAtom *)arg2 colorTransform:(void *)arg3 atIndex:(int)arg4 inScheme:(id)arg5;

+ (void)readFromColorScheme:(struct PptColorSchemeAtom *)arg1 toColorScheme:(id)arg2 colorMap:(id)arg3 state:(id)arg4;

+ (void)writeFromSlideBase:(id)arg1 toSlideContainer:(id)arg2 state:(id)arg3;



@end


