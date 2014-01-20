/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "GKGame.h"



@interface GKGame (UI)

+ (id)defaultGameIconWithStyle:(long long)arg1;

+ (void)preloadIconsForGames:(id)arg1 style:(long long)arg2 handler:(id)arg3;

+ (struct CGSize)serverImageSizeForIconStyle:(long long)arg1;

- (id)URLStringForImageWithShineIfNeeded;

- (id)_imageURLForIconStyle:(long long)arg1;

- (id)cachedIconForStyle:(long long)arg1;

- (id)iconForStyle:(long long)arg1;

- (id)imageSourceForIconStyle:(long long)arg1;

- (id)imageSourceForiOSIconStyle:(long long)arg1;

- (void)loadIconForSize:(struct CGSize)arg1 completionHandler:(id)arg2;

- (id)loadIconForStyle:(long long)arg1 withCompletionHandler:(id)arg2;

- (id)macBrushForIconStyle:(long long)arg1;

- (void)uninstallGameWithCompletionHandler:(id)arg1;

@end


