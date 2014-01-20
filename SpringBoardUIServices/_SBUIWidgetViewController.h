/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIViewController.h"



#import "_SBUIWidgetHost.h"

#import "_SBUIWidgetViewController_Remote_IPC.h"



@class NSString;



@interface _SBUIWidgetViewController : UIViewController <_SBUIWidgetHost, _SBUIWidgetViewController_Remote_IPC>

{

    long long _widgetIdiom;

    NSString *_widgetidentifier;

    id <_SBUIWidgetHost> _widgetHost;

    NSString *_widgetIdentifier;

}



+ (id)_exportedInterface;

+ (id)_remoteViewControllerInterface;

- (void)__hostDidDismiss;

- (void)__hostDidPresent;

- (void)__hostWillDismiss;

- (void)__hostWillPresent;

- (void)__requestPreferredViewSizeWithReplyHandler:(id)arg1;

- (void)__setWidgetIdentifier:(id)arg1;

- (void)__setWidgetIdiom:(long long)arg1;

- (void)dealloc;

- (void)hostDidDismiss;

- (void)hostDidPresent;

- (void)hostWillDismiss;

- (void)hostWillPresent;

- (void)invalidatePreferredViewSize;

@property(readonly, nonatomic) struct CGSize preferredViewSize;

- (void)requestLaunchOfURL:(id)arg1;

- (void)requestPresentationOfViewController:(id)arg1 presentationStyle:(long long)arg2 context:(id)arg3 completion:(id)arg4;

@property(nonatomic) id <_SBUIWidgetHost> widgetHost; // @synthesize widgetHost=_widgetHost;

@property(copy, nonatomic) NSString *widgetIdentifier; // @synthesize widgetIdentifier=_widgetIdentifier;

@property(nonatomic) long long widgetIdiom; // @synthesize widgetIdiom=_widgetIdiom;



@end


