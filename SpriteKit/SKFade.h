/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SKAction.h"


__attribute__((visibility("hidden")))

@interface SKFade : SKAction

{

    struct SKCFade *_mycaction;

}



+ (id)fadeAlphaBy:(double)arg1 duration:(double)arg2;

+ (id)fadeAlphaTo:(double)arg1 duration:(double)arg2;

+ (id)fadeInWithDuration:(double)arg1;

+ (id)fadeOutWithDuration:(double)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)encodeWithCoder:(id)arg1;

- (id)init;

- (id)initWithCoder:(id)arg1;

- (id)reversedAction;



@end


