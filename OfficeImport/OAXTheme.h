/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface OAXTheme : NSObject

{

}



+ (struct _xmlNode *)childNamed:(const char *)arg1 inParent:(struct _xmlNode *)arg2 fallbackParent:(struct _xmlNode *)arg3;

+ (void)readDefaultProperties:(struct _xmlNode *)arg1 fallback:(struct _xmlNode *)arg2 defaultProperties:(id)arg3 drawingState:(id)arg4;

+ (void)readFromPackagePart:(id)arg1 toTheme:(id)arg2 state:(id)arg3;

+ (void)readObjectDefaults:(struct _xmlNode *)arg1 theme:(id)arg2 drawingState:(id)arg3;

+ (void)readObjectDefaultsFromParent:(struct _xmlNode *)arg1 defaultsName:(const char *)arg2 toObjectDefaults:(id)arg3 drawingState:(id)arg4;



@end


