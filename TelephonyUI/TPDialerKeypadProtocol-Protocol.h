/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol TPDialerKeypadProtocol <NSObject>

- (void)highlightKeyAtIndex:(long long)arg1;

- (long long)indexForHighlightedKey;

- (void)setDelegate:(id)arg1;

- (void)setPlaysSounds:(_Bool)arg1;

- (void)setSupportsHardPause:(_Bool)arg1;

- (_Bool)supportsHardPause;



@optional

- (void)performTapActionDownForHighlightedKey;

- (void)performTapActionEndForHighlightedKey;

@end

