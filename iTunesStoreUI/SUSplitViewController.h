/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SUViewController.h"


@class NSString, NSURL, SUGradient, SUPlaceholderViewController, SUShadow, SUSplitView, SUStructuredPage, UIViewController;



@interface SUSplitViewController : SUViewController

{

    NSURL *_displayedURL;

    UIViewController *_firstViewController;

    NSString *_mainTitle;

    SUGradient *_placeholderGradient;

    SUPlaceholderViewController *_placeholderViewController;

    UIViewController *_secondViewController;

    SUShadow *_splitShadow;

    SUSplitView *_splitView;

    SUStructuredPage *_structuredPage;

    _Bool _usesSharedPlaceholder;

    _Bool _viewIsReady;

}



+ (_Bool)isValidSplitPositionValue:(id)arg1;

+ (_Bool)isValidSplitTypeString:(id)arg1;

- (void)_loadingDidChangeNotification:(id)arg1;

- (void)_navigationItemDidChangeNotification:(id)arg1;

- (id)_newGradientWithValue:(id)arg1;

- (id)_newViewControllerFromDictionary:(id)arg1;

- (void)_reloadLoadingState;

- (void)_reloadTitle;

- (void)_reloadView;

- (void)_reloadViewController:(id)arg1 fromDictionary:(id)arg2;

- (void)_reloadWithStorePageDictionary:(id)arg1;

- (void)_setPlaceholderVisible:(_Bool)arg1;

- (void)_setStructuredPage:(id)arg1;

- (void)_setViewController:(id *)arg1 toValue:(id)arg2;

- (id)_splitView;

- (void)addChildViewController:(id)arg1;

- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;

- (id)copyArchivableContext;

- (id)copyChildViewControllersForReason:(long long)arg1;

- (id)copyScriptViewController;

- (void)dealloc;

@property(retain, nonatomic) NSURL *displayedURL; // @synthesize displayedURL=_displayedURL;

@property(retain, nonatomic) UIViewController *firstViewController; // @synthesize firstViewController=_firstViewController;

- (id)init;

- (_Bool)isLoaded;

@property(nonatomic, getter=isVertical) _Bool vertical;

@property(nonatomic) long long layoutType;

- (void)loadView;

@property(retain, nonatomic) NSString *mainTitle; // @synthesize mainTitle=_mainTitle;

@property(nonatomic) double minimumPaneSize;

- (id)newRotationController;

- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;

- (void)removeChildViewController:(id)arg1;

- (void)restoreArchivableContext:(id)arg1;

@property(retain, nonatomic) UIViewController *secondViewController; // @synthesize secondViewController=_secondViewController;

- (void)setLoading:(_Bool)arg1;

@property(nonatomic) double splitPosition;

- (void)setSplitPositionAndLayoutTypeFromValue:(id)arg1;

@property(copy, nonatomic) SUShadow *splitShadow; // @synthesize splitShadow=_splitShadow;

- (void)setSplitTypeString:(id)arg1;

@property(nonatomic) _Bool usesSharedPlaceholder; // @synthesize usesSharedPlaceholder=_usesSharedPlaceholder;

@property(nonatomic) _Bool viewIsReady; // @synthesize viewIsReady=_viewIsReady;

- (_Bool)shouldExcludeFromNavigationHistory;

- (id)splitPositionString;

- (id)splitTypeString;

- (void)storePage:(id)arg1 finishedWithSuccess:(_Bool)arg2;

- (id)storePageProtocol;



@end


