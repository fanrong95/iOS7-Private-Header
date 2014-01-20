/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class NSArray, NSString;



__attribute__((visibility("hidden")))

@interface UIKBGradient : NSObject <NSCopying>

{

    NSString *_gradientName;

    NSString *_flatColorName;

    NSString *_startColorName;

    NSString *_endColorName;

    NSArray *_colors;

    double _middleLocation;

    _Bool _horizontal;

}



+ (id)gradientWith3Colors:(id)arg1 middleLocation:(double)arg2;

+ (id)gradientWithFlatColor:(id)arg1;

+ (id)gradientWithName:(id)arg1;

+ (id)gradientWithStartColor:(id)arg1 endColor:(id)arg2;

- (struct CGGradient *)CGGradient;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

@property(nonatomic) _Bool horizontal; // @synthesize horizontal=_horizontal;

- (id)initWith3Colors:(id)arg1 middleLocation:(double)arg2;

- (id)initWithFlatColor:(id)arg1;

- (id)initWithName:(id)arg1;

- (id)initWithStartColor:(id)arg1 endColor:(id)arg2;



@end


