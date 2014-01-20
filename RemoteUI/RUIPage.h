/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIViewController.h"



#import "UIWebViewDelegate.h"



@class NSArray, NSDictionary, NSMutableArray, NSString, RUIObjectModel, RUIPasscodeView, RUISpinnerView, RUITableView, RUIWebView, UIBarButtonItem, UILabel, UIToolbar, UIView;



@interface RUIPage : UIViewController <UIWebViewDelegate>

{

    NSString *_pageID;

    UIView *_containerView;

    RUITableView *_tableViewOM;

    RUIWebView *_webViewOM;

    RUIPasscodeView *_passcodeViewOM;

    RUISpinnerView *_spinnerViewOM;

    NSString *_validationFunction;

    _Bool _loading;

    NSString *_navTitle;

    NSString *_loadingTitle;

    NSDictionary *_rightNavigationBarButton;

    NSDictionary *_leftNavigationBarButton;

    _Bool _hidesBackButton;

    UIToolbar *_toolbar;

    NSDictionary *_rightToolbarButton;

    NSDictionary *_leftToolbarButton;

    UIBarButtonItem *_leftToolbarItem;

    UIBarButtonItem *_rightToolbarItem;

    UIBarButtonItem *_middleFlexSpace;

    UIBarButtonItem *_leftFlexSpace;

    RUIObjectModel *_objectModel;

    RUIPage *_parentPage;

    NSMutableArray *_childPages;

    _Bool _showsTitlesAsHeaderViews;

    long long _loadingIndicatorStyle;

    NSDictionary *_middleToolbarButton;

    UIBarButtonItem *_middleToolbarItem;

    double _customMargin;

    struct UIEdgeInsets _titleLabelPadding;

}



- (void)_addChildPage:(id)arg1;

- (id)_barButtonItemForDict:(id)arg1 action:(SEL)arg2;

- (void)_barButtonPressed:(id)arg1 isRight:(_Bool)arg2 isNavbar:(_Bool)arg3;

- (double)_getKeyboardIntersectionHeight;

- (void)_keyboardWillHide:(id)arg1;

- (void)_keyboardWillShow:(id)arg1;

- (void)_leftNavigationBarButtonPressed:(id)arg1;

- (void)_leftToolbarButtonPressed:(id)arg1;

- (void)_middleToolbarButtonPressed:(id)arg1;

- (void)_reloadTitleLabel;

- (void)_rightNavigationBarButtonPressed:(id)arg1;

- (void)_rightToolbarButtonPressed:(id)arg1;

- (void)_setContentInset:(double)arg1;

- (void)_setParentPage:(id)arg1;

- (void)_updateLoadingUI;

- (void)_updateParentPage;

- (void)_updateToolbar;

- (void)_updateWithCompletedChild:(id)arg1;

@property(readonly, nonatomic) NSArray *accessoryViews;

@property(readonly, nonatomic) NSArray *buttons;

@property(readonly, nonatomic) NSArray *childPages; // @synthesize childPages=_childPages;

@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;

- (id)contentScrollView;

@property(nonatomic) double customMargin; // @synthesize customMargin=_customMargin;

- (void)dealloc;

- (id)description;

- (id)flexibleSpace;

- (_Bool)hasPasscodeView;

- (_Bool)hasSpinnerView;

- (_Bool)hasTableView;

- (_Bool)hasWebView;

@property(nonatomic) _Bool hidesBackButton; // @synthesize hidesBackButton=_hidesBackButton;

- (id)init;

@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;

@property(retain, nonatomic) NSDictionary *leftNavigationBarButton; // @synthesize leftNavigationBarButton=_leftNavigationBarButton;

@property(retain, nonatomic) NSDictionary *leftToolbarButton; // @synthesize leftToolbarButton=_leftToolbarButton;

@property(retain, nonatomic) UIBarButtonItem *leftToolbarItem; // @synthesize leftToolbarItem=_leftToolbarItem;

@property(nonatomic) long long loadingIndicatorStyle; // @synthesize loadingIndicatorStyle=_loadingIndicatorStyle;

@property(copy, nonatomic) NSString *loadingTitle; // @synthesize loadingTitle=_loadingTitle;

@property(retain, nonatomic) NSDictionary *middleToolbarButton; // @synthesize middleToolbarButton=_middleToolbarButton;

@property(retain, nonatomic) UIBarButtonItem *middleToolbarItem; // @synthesize middleToolbarItem=_middleToolbarItem;

@property(copy, nonatomic) NSString *navTitle; // @synthesize navTitle=_navTitle;

@property(nonatomic) RUIObjectModel *objectModel; // @synthesize objectModel=_objectModel;

@property(copy, nonatomic) NSString *pageID; // @synthesize pageID=_pageID;

@property(readonly, nonatomic) RUIPage *parentPage; // @synthesize parentPage=_parentPage;

@property(readonly, nonatomic) RUIPasscodeView *passcodeViewOM;

- (void)populatePostbackDictionary:(id)arg1;

@property(retain, nonatomic) NSDictionary *rightNavigationBarButton; // @synthesize rightNavigationBarButton=_rightNavigationBarButton;

@property(retain, nonatomic) NSDictionary *rightToolbarButton; // @synthesize rightToolbarButton=_rightToolbarButton;

@property(retain, nonatomic) UIBarButtonItem *rightToolbarItem; // @synthesize rightToolbarItem=_rightToolbarItem;

- (void)setButton:(id)arg1 enabled:(_Bool)arg2;

- (void)setHasToolbar;

@property(nonatomic) _Bool showsTitlesAsHeaderViews; // @synthesize showsTitlesAsHeaderViews=_showsTitlesAsHeaderViews;

@property(nonatomic) struct UIEdgeInsets titleLabelPadding; // @synthesize titleLabelPadding=_titleLabelPadding;

@property(retain, nonatomic) NSString *validationFunction; // @synthesize validationFunction=_validationFunction;

@property(readonly, nonatomic) RUISpinnerView *spinnerViewOM;

- (unsigned long long)supportedInterfaceOrientations;

@property(readonly, nonatomic) RUITableView *tableViewOM;

@property(readonly, nonatomic) UILabel *titleLabel;

@property(readonly, nonatomic) UIToolbar *toolbar; // @synthesize toolbar=_toolbar;

- (void)viewDidAppear:(_Bool)arg1;

- (void)viewDidDisappear:(_Bool)arg1;

- (void)viewDidLayoutSubviews;

- (void)viewDidLoad;

- (void)viewWillAppear:(_Bool)arg1;

- (void)viewWillDisappear:(_Bool)arg1;

@property(readonly, nonatomic) RUIWebView *webViewOM;



@end


