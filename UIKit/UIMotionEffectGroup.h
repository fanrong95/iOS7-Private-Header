/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIMotionEffect.h"


@class NSArray;



@interface UIMotionEffectGroup : UIMotionEffect

{

    NSArray *_motionEffects;

}



- (id)_keyPathsAndRelativeValuesForPose:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)debugDescription;

- (id)description;

- (void)encodeWithCoder:(id)arg1;

- (id)initWithCoder:(id)arg1;

- (id)keyPathsAndRelativeValuesForViewerOffset:(struct UIOffset)arg1;

@property(copy, nonatomic) NSArray *motionEffects; // @synthesize motionEffects=_motionEffects;



@end


