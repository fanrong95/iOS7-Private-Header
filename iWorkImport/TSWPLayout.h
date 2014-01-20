/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSDLayout.h"


#import "TSWPLayoutOwner.h"

#import "TSWPLayoutTarget.h"



@class NSMutableArray, TSDBezierPath, TSDCanvas, TSPObject<TSDHint>, TSWPLayoutManager;



__attribute__((visibility("hidden")))

@interface TSWPLayout : TSDLayout <TSWPLayoutTarget, TSWPLayoutOwner>

{

    TSWPLayoutManager *_layoutManager;

    NSMutableArray *_columns;

    _Bool _textLayoutValid;

}



- (void)addAttachmentLayout:(id)arg1;

- (id)additionalReliedOnLayoutsForTextWrap;

@property(readonly, nonatomic) struct CGPoint anchorPoint;

@property(readonly, nonatomic) unsigned int autosizeFlags;

- (struct CGPoint)calculatePointFromSearchReference:(id)arg1;

@property(readonly, nonatomic) TSDCanvas *canvas;

- (struct CGPoint)capturedInfoPositionForAttachment;

- (_Bool)caresAboutStorageChanges;

- (id)columnMetricsForCharIndex:(unsigned long long)arg1 outRange:(struct _NSRange *)arg2;

@property(readonly, nonatomic) NSMutableArray *columns; // @synthesize columns=_columns;

- (id)computeLayoutGeometry;

- (id)currentAnchoredDrawableLayouts;

- (id)currentInlineDrawableLayouts;

@property(readonly, nonatomic) struct CGSize currentSize;

- (void)dealloc;

- (id)dependentLayouts;

@property(readonly, nonatomic) id <TSWPFootnoteHeightMeasurer> footnoteHeightMeasurer;

@property(readonly, nonatomic) id <TSWPFootnoteMarkProvider> footnoteMarkProvider;

- (id)initWithInfo:(id)arg1;

- (id)initWithInfo:(id)arg1 frame:(struct CGRect)arg2;

- (void *)initialLayoutState;

@property(readonly, nonatomic) TSDBezierPath *interiorClippingPath;

- (void)invalidateForFootnoteNumberingChange;

- (_Bool)invalidateForPageCountChange;

- (void)invalidateParentForAutosizing;

- (void)invalidateSize;

- (void)invalidateTextLayout;

- (_Bool)isLastTarget;

- (_Bool)isLayoutOffscreen;

@property(readonly, nonatomic) _Bool layoutIsValid;

@property(readonly, nonatomic) TSWPLayoutManager *layoutManager;

- (void)layoutManager:(id)arg1 didClearDirtyRangeWithDelta:(long long)arg2 afterCharIndex:(unsigned long long)arg3;

- (void)layoutManagerNeedsLayout:(id)arg1;

- (void)layoutSearchForAnnotationWithHitBlock:(id)arg1;

- (void)layoutSearchForString:(id)arg1 options:(unsigned long long)arg2 hitBlock:(id)arg3;

@property(readonly, nonatomic) struct CGRect maskRect;

@property(readonly, nonatomic) double maxAnchorY;

@property(readonly, nonatomic) struct CGSize maxSize;

@property(readonly, nonatomic) struct CGSize minSize;

@property(readonly, nonatomic) int naturalAlignment;

@property(readonly, nonatomic) int naturalDirection;

@property(readonly, nonatomic) TSPObject<TSDHint> *nextTargetFirstChildHint;

@property(readonly, nonatomic) id <TSWPOffscreenColumn> nextTargetFirstColumn;

@property(readonly, nonatomic) const struct TSWPTopicNumberHints *nextTargetTopicNumbers;

- (id)p_firstAncestorRespondingToSelector:(SEL)arg1;

- (_Bool)p_parentAutosizes;

- (struct CGRect)p_rectForSelection:(id)arg1 useParagraphModeRects:(_Bool)arg2;

- (void)p_validateTextLayout;

- (id)p_wpLayoutParent;

@property(readonly, nonatomic) unsigned long long pageCount;

@property(readonly, nonatomic) unsigned long long pageNumber;

- (void)parentDidChange;

- (void)parentWillChangeTo:(id)arg1;

@property(readonly, nonatomic) struct CGPoint position;

@property(readonly, nonatomic) id <TSWPOffscreenColumn> previousTargetLastColumn;

@property(readonly, nonatomic) const struct TSWPTopicNumberHints *previousTargetTopicNumbers;

- (struct CGRect)rectForPresentingAnnotationPopoverForSelection:(id)arg1;

- (struct CGRect)rectForSelection:(id)arg1;

- (id)reliedOnLayouts;

- (Class)repClassOverride;

- (void)setNeedsDisplayInTargetRect:(struct CGRect)arg1;

- (_Bool)shouldDisplayGuides;

- (_Bool)shouldProvideSizingGuides;

@property(readonly, nonatomic) _Bool shouldWrapAroundExternalDrawables;

- (id)styleProvider;

- (struct CGRect)targetRectForCanvasRect:(struct CGRect)arg1;

- (id)textColorOverride;

@property(readonly, nonatomic) _Bool textIsVertical;

@property(readonly, nonatomic) _Bool textLayoutValid;

- (id)textWrapper;

- (void)validate;

- (id)validatedLayoutForAnchoredDrawable:(id)arg1;

- (id)validatedLayoutForInlineDrawable:(id)arg1;

@property(readonly, nonatomic) int verticalAlignment;

@property(readonly, nonatomic) _Bool wantsLineFragments;

- (void)wrappableChildInvalidated:(id)arg1;



// Remaining properties

@property(retain, nonatomic) NSMutableArray *anchoredDrawablesForRelayout;

@property(readonly, nonatomic) struct __CFLocale *hyphenationLocale;

@property(readonly, nonatomic) TSDLayout *parentLayoutForInlineAttachments;

@property(readonly, nonatomic) _Bool shouldHyphenate;



@end


