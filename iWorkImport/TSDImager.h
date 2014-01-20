/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "TSDCanvasDelegate.h"



@class NSArray, TSDCanvas, TSKDocumentRoot;



__attribute__((visibility("hidden")))

@interface TSDImager : NSObject <TSDCanvasDelegate>

{

    NSArray *mInfos;

    struct CGColor *mBackgroundColor;

    struct CGRect mUnscaledClipRect;

    double mViewScale;

    struct CGSize mScaledImageSize;

    struct CGSize mMaximumScaledImageSize;

    _Bool mUseScaledImageSize;

    _Bool mDistortedToMatch;

    _Bool mImageMustHaveEvenDimensions;

    _Bool mShouldReuseBitmapContext;

    struct UIEdgeInsets mContentInset;

    TSKDocumentRoot *mDocumentRoot;

    TSDCanvas *mCanvas;

    struct CGRect mActualScaledClipRect;

    _Bool mDrawingIntoPDF;

    _Bool mIsPrinting;

    struct CGContext *mReusableBitmapContext;

    struct CGRect mReusableBounds;

    struct CGRect mReusableIntegralBounds;

    struct CGRect mReusableActualScaledClipRect;

    struct CGSize mReusableScaledImageSize;

    id mPostRenderAction;

}



@property(readonly, nonatomic) struct CGRect actualScaledClipRect; // @synthesize actualScaledClipRect=mActualScaledClipRect;

@property(nonatomic) struct CGColor *backgroundColor; // @synthesize backgroundColor=mBackgroundColor;

@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=mContentInset;

- (void)dealloc;

@property(nonatomic) _Bool distortedToMatch; // @synthesize distortedToMatch=mDistortedToMatch;

- (id)documentRoot;

- (_Bool)drawPageInContext:(struct CGContext *)arg1 createPage:(_Bool)arg2;

@property(nonatomic) _Bool imageMustHaveEvenDimensions; // @synthesize imageMustHaveEvenDimensions=mImageMustHaveEvenDimensions;

@property(retain, nonatomic) NSArray *infos; // @synthesize infos=mInfos;

- (id)initWithDocumentRoot:(id)arg1;

- (_Bool)isCanvasDrawingIntoPDF:(id)arg1;

@property(nonatomic) _Bool isPrinting; // @synthesize isPrinting=mIsPrinting;

- (_Bool)isPrintingCanvas;

@property(nonatomic) struct CGSize maximumScaledImageSize;

- (struct CGImage *)newImage;

- (_Bool)p_configureCanvas;

- (void)p_drawPageInContext:(struct CGContext *)arg1 createPage:(_Bool)arg2;

- (struct CGImage *)p_newImageInReusableContext;

- (id)pdfData;

@property(nonatomic) struct CGSize scaledImageSize;

- (void)setPostRenderAction:(id)arg1;

@property(nonatomic) _Bool shouldReuseBitmapContext; // @synthesize shouldReuseBitmapContext=mShouldReuseBitmapContext;

@property(nonatomic) struct CGRect unscaledClipRect; // @synthesize unscaledClipRect=mUnscaledClipRect;

@property(nonatomic) double viewScale;

- (struct CGRect)visibleScaledBoundsForClippingRepsOnCanvas:(id)arg1;



@end


