/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "_UISettings.h"



@interface SBFAnimationCurveSettings : _UISettings

{

    unsigned long long _curve;

    struct CGPoint _controlPoint1;

    struct CGPoint _controlPoint2;

}



+ (id)_rowsRelativeToKeyPath:(id)arg1;

+ (id)settingsControllerModule;

@property(nonatomic) struct CGPoint controlPoint1; // @synthesize controlPoint1=_controlPoint1;

@property(nonatomic) struct CGPoint controlPoint2; // @synthesize controlPoint2=_controlPoint2;

@property(nonatomic) unsigned long long curve; // @synthesize curve=_curve;

- (void)setDefaultValues;



@end


