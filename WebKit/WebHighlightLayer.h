/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CALayer.h"



@class WebNodeHighlightView, WebView;



__attribute__((visibility("hidden")))

@interface WebHighlightLayer : CALayer

{

    WebNodeHighlightView *_view;

    WebView *_webView;

}



- (id)actionForKey:(id)arg1;

- (id)initWithHighlightView:(id)arg1 webView:(id)arg2;

- (void)layoutSublayers;



@end

