/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class UIFont;



@interface UITextRenderingAttributes : NSObject <NSCopying>

{

    UIFont *_font;

    double _minimumFontSize;

    double _actualFontSize;

    double _lineSpacing;

    long long _lineBreakMode;

    long long _baselineAdjustment;

    double _trackingAdjustment;

    double _minimumTrackingAdjustment;

    double _actualTrackingAdjustment;

    long long _alignment;

    _Bool _includeEmoji;

    struct CGRect _truncationRect;

    _Bool _drawUnderline;

}



- (id)copyWithZone:(struct _NSZone *)arg1;

- (id)init;



@end


