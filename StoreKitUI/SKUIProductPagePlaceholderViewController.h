/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIViewController.h"



#import "SKUIProductPageChildViewController.h"

#import "UIScrollViewDelegate.h"



@class SKUIClientContext, SKUIColorScheme, SKUIProductPageHeaderViewController, SKUIProductPagePlaceholderScrollView, UIActivityIndicatorView, UIScrollView;



@interface SKUIProductPagePlaceholderViewController : UIViewController <UIScrollViewDelegate, SKUIProductPageChildViewController>

{

    SKUIClientContext *_clientContext;

    SKUIColorScheme *_colorScheme;

    SKUIProductPageHeaderViewController *_headerViewController;

    SKUIProductPagePlaceholderScrollView *_scrollView;

    id <SKUIProductPageChildViewControllerDelegate> _delegate;

    long long _style;

    UIActivityIndicatorView *_indicator;

}



- (void).cxx_destruct;

- (void)_addHeaderView;

@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;

@property(retain, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;

@property(nonatomic) __weak id <SKUIProductPageChildViewControllerDelegate> delegate; // @synthesize delegate=_delegate;

@property(retain, nonatomic) SKUIProductPageHeaderViewController *headerViewController; // @synthesize headerViewController=_headerViewController;

- (id)initWithStyle:(long long)arg1;

- (void)loadView;

@property(readonly, nonatomic) UIScrollView *scrollView;

- (void)scrollViewDidScroll:(id)arg1;

- (void)viewDidAppear:(_Bool)arg1;

- (void)viewDidDisappear:(_Bool)arg1;



@end


