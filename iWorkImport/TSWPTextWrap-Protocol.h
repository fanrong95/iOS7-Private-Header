/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



@protocol TSWPTextWrap

- (id)beginWrappingToColumn:(id)arg1 target:(id)arg2 hasWrapables:(_Bool *)arg3;

- (double)nextUnobstructedSpanStartingAt:(struct CGRect)arg1 wrappableAttachments:(id)arg2 userInfo:(id)arg3;

- (unsigned int)splitLine:(struct CGRect)arg1 lineSegmentRects:(struct CGRect [128])arg2 wrappableAttachments:(id)arg3 ignoreFloatingGraphics:(_Bool)arg4 floatingCausedWrap:(_Bool *)arg5 skipHint:(double *)arg6 userInfo:(id)arg7;

@end


