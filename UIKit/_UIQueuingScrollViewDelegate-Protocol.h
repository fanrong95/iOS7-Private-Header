/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol _UIQueuingScrollViewDelegate <NSObject>

- (void)queuingScrollView:(id)arg1 didBailoutOfScrollAndRevealedView:(id)arg2;

- (void)queuingScrollView:(id)arg1 didCommitManualScroll:(_Bool)arg2 toRevealView:(id)arg3 concealView:(id)arg4 direction:(long long)arg5 animated:(_Bool)arg6 canComplete:(_Bool)arg7;

- (void)queuingScrollView:(id)arg1 didEndManualScroll:(_Bool)arg2 toRevealView:(id)arg3 direction:(long long)arg4 animated:(_Bool)arg5 didFinish:(_Bool)arg6 didComplete:(_Bool)arg7;

- (void)queuingScrollView:(id)arg1 willManuallyScroll:(_Bool)arg2 toRevealView:(id)arg3 concealView:(id)arg4 animated:(_Bool)arg5;

- (void)queuingScrollViewDidFinishScrolling:(id)arg1;

- (_Bool)queuingScrollViewShouldLayoutSubviews:(id)arg1;

@end


