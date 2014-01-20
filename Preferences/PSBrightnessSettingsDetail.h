/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "PSSettingsDetail.h"



@interface PSBrightnessSettingsDetail : NSObject <PSSettingsDetail>

{

}



+ (_Bool)autoBrightnessEnabled;

+ (void)beginBrightnessAdjustmentTransaction;

+ (void)beginObservingExternalBrightnessChanges:(id)arg1 changedAction:(void)arg2;

+ (double)currentValue;

+ (_Bool)deviceSupportsAutoBrightness;

+ (void)endBrightnessAdjustmentTransaction;

+ (void)endObservingExternalBrightnessChanges;

+ (id)iconImage;

+ (void)incrementBrightnessValue:(double)arg1;

+ (double)incrementedBrightnessValue:(double)arg1;

+ (id)preferencesURL;

+ (void)setAutoBrightnessEnabled:(_Bool)arg1;

+ (void)setValue:(double)arg1;



@end


