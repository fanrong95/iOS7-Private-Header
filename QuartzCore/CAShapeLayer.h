/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CALayer.h"


@class NSArray, NSString;



@interface CAShapeLayer : CALayer

{

}



+ (_Bool)CA_automaticallyNotifiesObservers:(Class)arg1;

+ (_Bool)_hasRenderLayerSubclass;

+ (id)defaultValueForKey:(id)arg1;

- (struct Layer *)_copyRenderLayer:(struct Transaction *)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int *)arg3;

- (void)_renderForegroundInContext:(struct CGContext *)arg1;

- (_Bool)_renderLayerDefinesProperty:(unsigned int)arg1;

- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;

- (void)didChangeValueForKey:(id)arg1;

@property struct CGColor *fillColor;

@property(copy) NSString *fillRule;

- (id)implicitAnimationForKeyPath:(id)arg1;

@property(copy) NSString *lineCap;

@property(copy) NSArray *lineDashPattern;

@property double lineDashPhase;

@property(copy) NSString *lineJoin;

@property double lineWidth;

@property double miterLimit;

@property struct CGPath *path;

@property struct CGColor *strokeColor;

@property double strokeEnd;

@property double strokeStart;



@end


