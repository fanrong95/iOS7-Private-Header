/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "_UIBackdropViewSettings.h"


__attribute__((visibility("hidden")))

@interface _UIBackdropViewSettingsCombiner : _UIBackdropViewSettings

{

    _UIBackdropViewSettings *_inputSettingsA;

    _UIBackdropViewSettings *_inputSettingsB;

    double _weighting;

    _UIBackdropViewSettings *_outputSettingsA;

    _UIBackdropViewSettings *_outputSettingsB;

}



- (void)computeOutputSettingsUsingModel:(id)arg1;

- (void)dealloc;

@property(retain, nonatomic) _UIBackdropViewSettings *inputSettingsA; // @synthesize inputSettingsA=_inputSettingsA;

@property(retain, nonatomic) _UIBackdropViewSettings *inputSettingsB; // @synthesize inputSettingsB=_inputSettingsB;

@property(retain, nonatomic) _UIBackdropViewSettings *outputSettingsA; // @synthesize outputSettingsA=_outputSettingsA;

@property(retain, nonatomic) _UIBackdropViewSettings *outputSettingsB; // @synthesize outputSettingsB=_outputSettingsB;

@property(nonatomic) double weighting; // @synthesize weighting=_weighting;



@end


