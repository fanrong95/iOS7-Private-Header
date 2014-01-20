/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class CALayer, CAShapeLayer, UIPDFPageView, UIView, UIWindow;



@interface UIPDFMagnifierController : NSObject

{

    UIWindow *_textEffectsWindow;

    UIView *_textEffectsSubView;

    CALayer *_loLayer;

    CALayer *_hiLayer;

    CALayer *_imageContainer;

    CALayer *_imageLayer;

    CAShapeLayer *_selectionLayer;

    CALayer *_maskLayer;

    double _power;

    struct CGSize _magnifierSize;

    _Bool _loupe;

    struct CGPoint _touchPoint;

    struct CGPoint _pointToMagnify;

    double _enlargementScale;

    CALayer *_leftBar;

    CALayer *_leftGrabber;

    CALayer *_rightBar;

    CALayer *_rightGrabber;

    struct CGSize _controlPointSize;

    struct CGColor *_grabberColor;

    unsigned long long _pageRotation;

    UIPDFPageView *pageView;

}



- (void)_show;

- (void)addBling;

- (void)addTextRangeHandles;

- (struct CGPoint)convertPointToEnlargedSpace:(struct CGPoint)arg1;

- (struct CGPoint)convertPointToRotatedPage:(struct CGPoint)arg1;

- (struct CGRect)convertRectToEnlargedSpace:(struct CGRect)arg1;

- (struct CGRect)convertRectToRotatedPage:(struct CGRect)arg1;

- (struct CGPoint)convertViewPointToEnlargedSpace:(struct CGPoint)arg1;

- (void)dealloc;

- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;

- (void)hide;

- (id)imageReceived:(id)arg1 data:(id)arg2;

- (id)init;

- (_Bool)isSelectionUniformlyRotated:(double *)arg1;

- (void)move;

@property(nonatomic) UIPDFPageView *pageView; // @synthesize pageView;

- (void)placeImage;

- (struct CGPoint)pointToMagnifyInPDFSpace;

- (void)setImageContainerMask;

- (void)setImageContainerPositionLoupe;

- (void)setImageContainerPositionMagnifier;

- (void)setLayerPositions;

- (void)setPosition:(struct CGPoint)arg1 viewPoint:(struct CGPoint)arg2;

- (void)setPower;

- (void)setSelectionPath;

- (void)setSelectionPath:(struct CGPath *)arg1 bounds:(struct CGRect)arg2 transform:(struct CGAffineTransform)arg3;

- (void)setTextRangeHandlePositions;

- (void)showLoupe;

- (void)showMagnifier;

- (void)tearDownLayers;

- (struct CGPoint)viewPointInTextEffectsSpace;



@end


