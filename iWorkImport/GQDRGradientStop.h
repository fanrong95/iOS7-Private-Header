/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class GQDColor;



__attribute__((visibility("hidden")))

@interface GQDRGradientStop : NSObject

{

    float mFraction;

    GQDColor *mColor;

}



+ (const struct StateSpec *)stateForReading;

- (id)color;

- (void)dealloc;

- (float)fraction;

- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;



@end

