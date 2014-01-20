/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString;



__attribute__((visibility("hidden")))

@interface RTFNSFont : NSObject

{

    NSString *_fontName;

    double _fontSize;

    double _pointSize;

}



+ (id)fontWithName:(id)arg1 size:(double)arg2;

+ (id)systemFontOfSize:(double)arg1;

+ (id)userFixedPitchFontOfSize:(double)arg1;

+ (id)userFontOfSize:(double)arg1;

@property(retain) NSString *fontName; // @synthesize fontName=_fontName;

@property double fontSize; // @synthesize fontSize=_fontSize;

- (id)initWithName:(id)arg1 size:(double)arg2;

- (unsigned long long)mostCompatibleStringEncoding;

@property double pointSize; // @synthesize pointSize=_pointSize;



@end


