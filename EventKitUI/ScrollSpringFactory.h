/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SpringFactory.h"


@interface ScrollSpringFactory : SpringFactory

{

    double _initialVelocity;

}



+ (id)sharedFactory;

- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;

@property(nonatomic) double initialVelocity; // @synthesize initialVelocity=_initialVelocity;



@end


