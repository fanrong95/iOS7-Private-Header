/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface WXOfficeArt : NSObject

{

}



+ (void)initialize;

+ (void)readClientData:(struct _xmlNode *)arg1 state:(id)arg2 to:(id)arg3;

+ (void)readFrom:(struct _xmlNode *)arg1 parentRElement:(struct _xmlNode *)arg2 parentParagraph:(id)arg3 state:(id)arg4 to:(id)arg5;

+ (void)readOAX:(struct _xmlNode *)arg1 parentRElement:(struct _xmlNode *)arg2 parentParagraph:(id)arg3 state:(id)arg4 to:(id)arg5;

+ (void)readPosition:(struct _xmlNode *)arg1 state:(id)arg2 to:(id)arg3 isHorizontal:(_Bool)arg4;

+ (void)readVml:(struct _xmlNode *)arg1 parentRElement:(struct _xmlNode *)arg2 parentParagraph:(id)arg3 state:(id)arg4 to:(id)arg5;

+ (void)readWrap:(struct _xmlNode *)arg1 state:(id)arg2 to:(id)arg3;

+ (void)readWrapDistance:(struct _xmlNode *)arg1 parentElement:(struct _xmlNode *)arg2 state:(id)arg3 to:(id)arg4;



@end


