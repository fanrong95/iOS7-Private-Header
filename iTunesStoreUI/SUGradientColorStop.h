/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCoding.h"



@interface SUGradientColorStop : NSObject <NSCoding>

{

    double _r;

    double _g;

    double _b;

    double _a;

    double _offset;

    struct CGColor *_rawColor;

}



- (long long)compare:(id)arg1;

- (struct CGColor *)copyCGColor;

- (void)dealloc;

- (id)description;

- (void)encodeWithCoder:(id)arg1;

- (id)init;

- (id)initWithCoder:(id)arg1;

- (id)initWithColor:(struct CGColor *)arg1 offset:(double)arg2;

@property(readonly, nonatomic) double offset;



@end


