/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface GKNotificationBanner : NSObject

{

}



+ (void)showBannerWithTitle:(id)arg1 image:(id)arg2 message:(id)arg3 completionHandler:(id)arg4;

+ (void)showBannerWithTitle:(id)arg1 image:(id)arg2 message:(id)arg3 touchHandler:(id)arg4;

+ (void)showBannerWithTitle:(id)arg1 message:(id)arg2 completionHandler:(id)arg3;

+ (void)showBannerWithTitle:(id)arg1 message:(id)arg2 duration:(double)arg3 completionHandler:(id)arg4;

+ (void)showBannerWithTitle:(id)arg1 player:(id)arg2 message:(id)arg3 completionHandler:(id)arg4;

+ (void)showBannerWithTitle:(id)arg1 player:(id)arg2 message:(id)arg3 touchHandler:(id)arg4;



@end


