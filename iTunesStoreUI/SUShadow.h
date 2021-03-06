/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCoding.h"

#import "NSCopying.h"



@class UIColor;



@interface SUShadow : NSObject <NSCoding, NSCopying>

{

    UIColor *_color;

    struct CGSize _offset;

    double _opacity;

    double _radius;

}



- (void)applyToLayer:(id)arg1;

@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (void)encodeWithCoder:(id)arg1;

- (id)initWithCoder:(id)arg1;

@property(nonatomic) struct CGSize offset; // @synthesize offset=_offset;

@property(nonatomic) double opacity; // @synthesize opacity=_opacity;

@property(nonatomic) double radius; // @synthesize radius=_radius;



@end


