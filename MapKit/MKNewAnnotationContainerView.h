/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MKAnnotationContainerView.h"


__attribute__((visibility("hidden")))

@interface MKNewAnnotationContainerView : MKAnnotationContainerView

{

    _Bool _suppress;

}



- (void)_updateAddedAnnotationRotation:(id)arg1;

- (void)_updateAnnotationView:(id)arg1;

- (void)_updateAnnotationViewPerspective;

- (void)_updateAnnotationViewPositions;

- (void)setAnnotationViewsRotationRadians:(double)arg1 animation:(id)arg2;

- (void)stopSuppressingUpdates;

- (void)suppressUpdates;



@end

