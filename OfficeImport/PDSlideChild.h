/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PDSlideBase.h"


@class OADColorMap, OADThemeOverrides;



__attribute__((visibility("hidden")))

@interface PDSlideChild : PDSlideBase

{

    _Bool mShowMasterPlaceholderAnimations;

    _Bool mShowMasterShapes;

    OADThemeOverrides *mThemeOverrides;

    OADColorMap *mColorMapOverride;

}



- (id)colorMap;

- (id)colorMapOverride;

- (id)colorScheme;

- (void)dealloc;

- (void)doneWithContent;

- (id)drawingTheme;

- (id)fontScheme;

- (id)init;

- (void)setColorMapOverride:(id)arg1;

- (void)setShowMasterPlaceholderAnimations:(_Bool)arg1;

- (void)setShowMasterShapes:(_Bool)arg1;

- (_Bool)showMasterPlaceholderAnimations;

- (_Bool)showMasterShapes;

- (id)styleMatrix;

- (id)themeOverrides;



@end


