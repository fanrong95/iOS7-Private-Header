/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "TSDEditor.h"

#import "TSDStrokeEditor.h"



@class NSArray, NSSet, NSString, TSDDrawableInfo, TSDInteractiveCanvasController, TSDMultiPaneController, TSDStroke, TSKSelection, TSUColor;



__attribute__((visibility("hidden")))

@interface TSDDrawableEditor : NSObject <TSDEditor, TSDStrokeEditor>

{

    TSDInteractiveCanvasController *mICC;

    NSSet *mInfos;

    TSDMultiPaneController *mGraphicInspector;

}



+ (id)keyPathsForValuesAffectingFirstInfo;

+ (id)keyPathsForValuesAffectingInfo;

+ (id)keyPathsForValuesAffectingLayouts;

+ (_Bool)shouldSuppressMultiselection;

- (void)addOrShowComment:(id)arg1;

- (void)applyStylePresetWithIndex:(id)arg1;

- (void)beginChangingStrokeWidth:(id)arg1;

- (_Bool)canAddOrShowComment;

- (int)canPerformAction:(SEL)arg1;

- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;

- (void)dealloc;

- (void)didChangeStrokeWidth:(id)arg1;

- (id)documentRoot;

- (void)endChangingStrokeWidth:(id)arg1;

@property(readonly, nonatomic) TSDDrawableInfo *firstInfo;

- (void)flipHorizontally:(id)arg1;

- (void)flipVertically:(id)arg1;

@property(readonly, nonatomic) TSDDrawableInfo *info;

@property(retain, nonatomic) NSSet *infos; // @synthesize infos=mInfos;

- (id)infosOfClass:(Class)arg1;

- (id)initWithInteractiveCanvasController:(id)arg1;

@property(readonly, nonatomic) TSDInteractiveCanvasController *interactiveCanvasController; // @synthesize interactiveCanvasController=mICC;

@property(readonly, nonatomic) NSSet *layouts;

- (void)p_flipInOrientation:(int)arg1;

- (double)pictureFrameAssetScaleForNormalizedWidth:(double)arg1;

- (id)selectedLayoutsSupportingFlipping;

- (id)selectedLayoutsSupportingInspectorPositioning;

- (id)selectedLayoutsSupportingRotation;

@property(readonly, nonatomic) NSSet *selectedObjectsSupportingConnectionLineAttributes;

@property(readonly, nonatomic) NSSet *selectedObjectsSupportingEndpoints;

@property(readonly, nonatomic) NSSet *selectedObjectsSupportingFill;

@property(readonly, nonatomic) NSSet *selectedObjectsSupportingOpacity;

@property(readonly, nonatomic) NSSet *selectedObjectsSupportingReflection;

@property(readonly, nonatomic) NSSet *selectedObjectsSupportingResize;

@property(readonly, nonatomic) NSSet *selectedObjectsSupportingShadow;

@property(readonly, nonatomic) NSSet *selectedObjectsSupportingShrinkTextToFit;

@property(readonly, nonatomic) NSSet *selectedObjectsSupportingSmartShapeAttributes;

@property(readonly, nonatomic) NSSet *selectedObjectsSupportingStroke;

@property(readonly, nonatomic) NSSet *selectedObjectsSupportingTextInset;

@property(copy, nonatomic) TSDStroke *stroke;

@property(retain, nonatomic) TSUColor *strokeColor;

- (void)setStyleValue:(id)arg1 forStyleProperty:(int)arg2;

@property(readonly, nonatomic) NSString *strokeColorPickerTitle;

@property(readonly, nonatomic) NSArray *strokeSwatches;

- (double)strokeWidthForNormalizedWidth:(double)arg1;

- (void)takePatternFromStroke:(id)arg1 withDefaultStroke:(id)arg2;

- (id)topLevelInspectorAutosaveName;



// Remaining properties

@property(retain, nonatomic) TSKSelection *selection;



@end

