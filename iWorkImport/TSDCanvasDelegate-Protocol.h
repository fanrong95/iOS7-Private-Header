/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol TSDCanvasDelegate <NSObject>

- (id)documentRoot;



@optional

- (id)additionalVisibleInfosForCanvas:(id)arg1;

- (void)canvas:(id)arg1 createdRep:(id)arg2;

- (void)canvasDidLayout:(id)arg1;

- (void)canvasDidUpdateRepsFromLayouts:(id)arg1;

- (void)canvasDidUpdateVisibleBounds:(id)arg1;

- (void)canvasDidValidateLayouts:(id)arg1;

- (void)canvasDidValidateLayoutsWithDependencies:(id)arg1;

- (void)canvasLayoutInvalidated:(id)arg1;

- (void)canvasWillLayout:(id)arg1;

- (void)canvasWillUpdateRepsFromLayouts:(id)arg1;

- (id)infosToHideForCanvas:(id)arg1;

- (_Bool)isCanvasDrawingIntoPDF:(id)arg1;

- (_Bool)isCanvasInteractive;

- (_Bool)isPrintingCanvas;

- (_Bool)shouldShowInstructionalText;

- (_Bool)shouldShowTextOverflowGlyphs;

- (_Bool)shouldSuppressBackgrounds;

- (_Bool)spellCheckingSupported;

- (_Bool)spellCheckingSuppressed;

- (_Bool)supportsAdaptiveLayout;

- (struct CGRect)visibleScaledBoundsForClippingRepsOnCanvas:(id)arg1;

@end


