/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface CHXChart : NSObject

{

}



+ (int)chdDisplayBlanksAsEnumFromXmlElement:(struct _xmlNode *)arg1;

+ (void)readChartFromXmlNode:(struct _xmlNode *)arg1 chart:(id)arg2 state:(id)arg3;

+ (void)readDefaultTextPropertiesFromXmlNode:(struct _xmlNode *)arg1 chart:(id)arg2 state:(id)arg3;

+ (id)readFromXmlDocument:(struct _xmlDoc *)arg1 chartStyleId:(int)arg2 state:(id)arg3;

+ (id)readFromXmlDocument:(struct _xmlDoc *)arg1 state:(id)arg2;



@end


