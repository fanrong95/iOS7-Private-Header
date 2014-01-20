/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray, XPCMachSendRight, _UIHostedWindowHostingHandle, _UIViewServiceInterface;



__attribute__((visibility("hidden")))

@interface _UIRemoteViewControllerConnectionInfo : NSObject

{

    _Bool _prefersStatusBarHidden;

    _UIViewServiceInterface *_interface;

    id _viewControllerOperatorProxy;

    id _serviceViewControllerProxy;

    id _serviceViewControllerControlMessageProxy;

    id _textEffectsOperatorProxy;

    NSArray *_serviceViewControllerSupportedInterfaceOrientations;

    XPCMachSendRight *_serviceAccessibilityServerPortWrapper;

    long long _preferredStatusBarStyle;

    _UIHostedWindowHostingHandle *_hostedWindowHostingHandle;

    _UIHostedWindowHostingHandle *_textEffectsWindowHostingHandle;

    _UIHostedWindowHostingHandle *_textEffectsWindowAboveStatusBarHostingHandle;

}



- (void)dealloc;

@property(retain) _UIHostedWindowHostingHandle *hostedWindowHostingHandle; // @synthesize hostedWindowHostingHandle=_hostedWindowHostingHandle;

@property(retain) _UIViewServiceInterface *interface; // @synthesize interface=_interface;

@property long long preferredStatusBarStyle; // @synthesize preferredStatusBarStyle=_preferredStatusBarStyle;

@property _Bool prefersStatusBarHidden; // @synthesize prefersStatusBarHidden=_prefersStatusBarHidden;

@property(retain) XPCMachSendRight *serviceAccessibilityServerPortWrapper; // @synthesize serviceAccessibilityServerPortWrapper=_serviceAccessibilityServerPortWrapper;

@property(retain) id serviceViewControllerControlMessageProxy; // @synthesize serviceViewControllerControlMessageProxy=_serviceViewControllerControlMessageProxy;

@property(retain) id serviceViewControllerProxy; // @synthesize serviceViewControllerProxy=_serviceViewControllerProxy;

@property(retain) NSArray *serviceViewControllerSupportedInterfaceOrientations; // @synthesize serviceViewControllerSupportedInterfaceOrientations=_serviceViewControllerSupportedInterfaceOrientations;

@property(retain) id textEffectsOperatorProxy; // @synthesize textEffectsOperatorProxy=_textEffectsOperatorProxy;

@property(retain) _UIHostedWindowHostingHandle *textEffectsWindowAboveStatusBarHostingHandle; // @synthesize textEffectsWindowAboveStatusBarHostingHandle=_textEffectsWindowAboveStatusBarHostingHandle;

@property(retain) _UIHostedWindowHostingHandle *textEffectsWindowHostingHandle; // @synthesize textEffectsWindowHostingHandle=_textEffectsWindowHostingHandle;

@property(retain) id viewControllerOperatorProxy; // @synthesize viewControllerOperatorProxy=_viewControllerOperatorProxy;



@end


