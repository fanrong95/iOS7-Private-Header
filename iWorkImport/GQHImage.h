/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface GQHImage : NSObject

{

}



+ (int)handleFloatingImageBinary:(id)arg1 geometry:(id)arg2 style:(id)arg3 cropGeometry:(id)arg4 maskingShapePath:(id)arg5 alphaMaskBezier:(struct CGPath *)arg6 state:(id)arg7;

+ (int)handleFloatingMedia:(id)arg1 state:(id)arg2;

+ (int)handleFloatingWebView:(id)arg1 state:(id)arg2;

+ (int)handleInlineImageBinary:(id)arg1 geometry:(id)arg2 cropGeometry:(id)arg3 maskingShapePath:(id)arg4 alphaMaskBezier:(struct CGPath *)arg5 style:(id)arg6 state:(id)arg7;

+ (int)handleInlineMedia:(id)arg1 state:(id)arg2;

+ (int)handleInlineWebView:(id)arg1 state:(id)arg2;

+ (void)handleSimpleImageBinary:(id)arg1 geometry:(id)arg2 style:(id)arg3 state:(id)arg4;

+ (void)mapCropGeometry:(id)arg1 bounds:(id)arg2 style:(id)arg3;

+ (void)mapMaskedImage:(id)arg1 geometry:(id)arg2 cropGeometry:(id)arg3 maskingShapePath:(id)arg4 alphaMaskBezier:(struct CGPath *)arg5 graphicStyle:(id)arg6 isFloating:(_Bool)arg7 state:(id)arg8;



@end


