/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface CPXmlEnumMap : NSObject

{

    struct __CFDictionary *mNameToValueMap;

}



- (void)dealloc;

- (id)initWithDescriptions:(const struct CPXmlEnumDescription *)arg1;

- (long long)readFromNode:(struct _xmlNode *)arg1 ns:(const char *)arg2 name:(const char *)arg3;

- (long long)readFromNode:(struct _xmlNode *)arg1 ns:(const char *)arg2 name:(const char *)arg3 def:(long long)arg4;

- (_Bool)readFromNode:(struct _xmlNode *)arg1 ns:(const char *)arg2 name:(const char *)arg3 value:(long long *)arg4;



@end


