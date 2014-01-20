/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"


#import "NSCoding.h"

#import "UIScrollViewDelegate.h"



@class NSURLRequest, UIScrollView, UIWebViewInternal;



@interface UIWebView : UIView <NSCoding, UIScrollViewDelegate>

{

    UIWebViewInternal *_internal;

}



+ (void)_fixPathsForSandboxDirectoryChange;

+ (id)_relativePathFromAbsolutePath:(id)arg1 removingPathComponents:(unsigned long long)arg2;

+ (void)_updatePersistentStoragePaths;

+ (void)initialize;

- (void)_addShortcut:(id)arg1;

- (_Bool)_alwaysDispatchesScrollEvents;

- (_Bool)_appliesExclusiveTouchToSubviewTree;

- (unsigned long long)_audioSessionCategoryOverride;

- (void)_beginRotation;

- (id)_browserView;

- (void)_define:(id)arg1;

- (void)_didCompleteScrolling;

- (void)_didRotate:(id)arg1;

- (id)_documentView;

- (void)_finishRotation;

- (void)_frameOrBoundsChanged;

- (double)_gapBetweenPages;

- (id)_initWithFrame:(struct CGRect)arg1 enableReachability:(_Bool)arg2;

- (id)_initWithWebView:(id)arg1;

- (id)_makeAlertView;

- (id)_networkInterfaceName;

- (unsigned long long)_pageCount;

- (double)_pageLength;

- (_Bool)_paginationBehavesLikeColumns;

- (long long)_paginationMode;

- (id)_pdfViewHandler;

- (void)_populateArchivedSubviews:(id)arg1;

- (Class)_printFormatterClass;

- (void)_reportError:(id)arg1;

- (void)_rescaleDocument;

- (id)_scrollView;

- (void)_setAlwaysDispatchesScrollEvents:(_Bool)arg1;

- (void)_setAudioSessionCategoryOverride:(unsigned long long)arg1;

- (void)_setDrawInWebThread:(_Bool)arg1;

- (void)_setDrawsCheckeredPattern:(_Bool)arg1;

- (void)_setGapBetweenPages:(double)arg1;

- (void)_setNetworkInterfaceName:(id)arg1;

- (void)_setOverridesOrientationChangeEventHandling:(_Bool)arg1;

- (void)_setPageLength:(double)arg1;

- (void)_setPaginationBehavesLikeColumns:(_Bool)arg1;

- (void)_setPaginationMode:(long long)arg1;

- (void)_setRichTextReaderViewportSettings;

- (void)_setScalesPageToFitViewportSettings;

- (void)_setWebSelectionEnabled:(_Bool)arg1;

- (void)_updateBrowserViewExposedScrollViewRect;

- (void)_updateCheckeredPattern;

- (void)_updateOpaqueAndBackgroundColor;

- (void)_updateRequest;

- (void)_updateScrollerViewForInputView:(id)arg1;

- (void)_updateViewSettings;

- (void)_webViewCommonInitWithWebView:(id)arg1 scalesPageToFit:(_Bool)arg2 shouldEnableReachability:(_Bool)arg3;

- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;

@property(nonatomic) _Bool allowsInlineMediaPlayback;

@property(readonly, nonatomic, getter=canGoBack) _Bool canGoBack;

@property(readonly, nonatomic, getter=canGoForward) _Bool canGoForward;

- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;

- (void)configureWithSettings:(id)arg1;

- (void)copy:(id)arg1;

- (struct CGImage *)createSnapshotWithRect:(struct CGRect)arg1;

@property(nonatomic) unsigned long long dataDetectorTypes;

- (void)dealloc;

- (void)decodeRestorableStateWithCoder:(id)arg1;

@property(nonatomic) id <UIWebViewDelegate> delegate;

@property(nonatomic) _Bool detectsPhoneNumbers;

- (void)encodeRestorableStateWithCoder:(id)arg1;

- (void)encodeWithCoder:(id)arg1;

@property(nonatomic) double gapBetweenPages;

- (void)goBack;

- (void)goForward;

- (id)initWithCoder:(id)arg1;

- (id)initWithFrame:(struct CGRect)arg1;

- (_Bool)isElementAccessibilityExposedToInterfaceBuilder;

@property(readonly, nonatomic, getter=isLoading) _Bool loading;

@property(nonatomic) _Bool keyboardDisplayRequiresUserAction;

- (void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4;

- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;

- (void)loadRequest:(id)arg1;

@property(nonatomic) _Bool mediaPlaybackAllowsAirPlay;

@property(nonatomic) _Bool mediaPlaybackRequiresUserAction;

- (struct CGImage *)newSnapshotWithRect:(struct CGRect)arg1;

@property(readonly, nonatomic) unsigned long long pageCount;

@property(nonatomic) double pageLength;

@property(nonatomic) long long paginationBreakingMode;

@property(nonatomic) long long paginationMode;

- (void)reload;

@property(readonly, nonatomic) NSURLRequest *request;

- (void)restoreStateFromHistoryItem:(id)arg1 forWebView:(id)arg2;

- (void)saveStateToHistoryItem:(id)arg1 forWebView:(id)arg2;

@property(nonatomic) _Bool scalesPageToFit;

@property(readonly, nonatomic) UIScrollView *scrollView;

- (void)scrollViewDidEndDecelerating:(id)arg1;

- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;

- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;

- (void)scrollViewDidScroll:(id)arg1;

- (void)scrollViewDidScrollToTop:(id)arg1;

- (void)scrollViewDidZoom:(id)arg1;

- (void)scrollViewWasRemoved:(id)arg1;

- (void)scrollViewWillBeginDragging:(id)arg1;

- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;

- (void)select:(id)arg1;

- (void)selectAll:(id)arg1;

- (void)setBackgroundColor:(id)arg1;

- (void)setBounds:(struct CGRect)arg1;

- (void)setFrame:(struct CGRect)arg1;

- (void)setOpaque:(_Bool)arg1;

@property(nonatomic) _Bool suppressesIncrementalRendering;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

- (void)stopLoading;

- (id)stringByEvaluatingJavaScriptFromString:(id)arg1;

- (void)view:(id)arg1 didSetFrame:(struct CGRect)arg2 oldFrame:(struct CGRect)arg3;

- (id)viewForZoomingInScrollView:(id)arg1;

- (id)webView:(id)arg1 connectionPropertiesForResource:(id)arg2 dataSource:(id)arg3;

- (void)webView:(id)arg1 decidePolicyForGeolocationRequestFromOrigin:(id)arg2 frame:(id)arg3 listener:(id)arg4;

- (void)webView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;

- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;

- (void)webView:(id)arg1 decidePolicyForNewWindowAction:(id)arg2 request:(id)arg3 newFrameName:(id)arg4 decisionListener:(id)arg5;

- (void)webView:(id)arg1 didChangeLocationWithinPageForFrame:(id)arg2;

- (void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3;

- (void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2;

- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;

- (void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3;

- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;

- (void)webView:(id)arg1 didFirstLayoutInFrame:(id)arg2;

- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalLoadForFrame:(id)arg2;

- (void)webView:(id)arg1 didReceiveTitle:(id)arg2 forFrame:(id)arg3;

- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;

- (void)webView:(id)arg1 exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)arg2 totalSpaceNeeded:(unsigned long long)arg3;

- (void)webView:(id)arg1 frame:(id)arg2 exceededDatabaseQuotaForSecurityOrigin:(id)arg3 database:(id)arg4;

- (id)webView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;

- (void)webView:(id)arg1 printFrameView:(id)arg2;

- (_Bool)webView:(id)arg1 resource:(id)arg2 canAuthenticateAgainstProtectionSpace:(id)arg3 forDataSource:(id)arg4;

- (void)webView:(id)arg1 resource:(id)arg2 didCancelAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4;

- (void)webView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4;

- (void)webView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;

- (void)webView:(id)arg1 resource:(id)arg2 didReceiveAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4;

- (id)webView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;

- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;

- (_Bool)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;

- (id)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4;

- (void)webView:(id)arg1 unableToImplementPolicyWithError:(id)arg2 frame:(id)arg3;

- (void)webViewClose:(id)arg1;

- (void)webViewMainFrameDidCommitLoad:(id)arg1;

- (void)webViewMainFrameDidFailLoad:(id)arg1 withError:(id)arg2;

- (void)webViewMainFrameDidFinishLoad:(id)arg1;

- (void)webViewMainFrameDidFirstVisuallyNonEmptyLayoutInFrame:(id)arg1;

- (void)webViewSupportedOrientationsUpdated:(id)arg1;



@end


