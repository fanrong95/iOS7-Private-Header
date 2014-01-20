/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "GQDGraphic.h"


#import "GQDNameMappable.h"



@class GQDPath, GQDWPLayoutFrame;



__attribute__((visibility("hidden")))

@interface GQDShape : GQDGraphic <GQDNameMappable>

{

    GQDPath *mPath;

    GQDWPLayoutFrame *mLayoutFrame;

}



+ (const struct StateSpec *)stateForReading;

- (struct CGPath *)createBezierPath;

- (void)dealloc;

- (id)initWithGraphic:(id)arg1 path:(id)arg2 geometry:(id)arg3;

- (_Bool)isBlank;

- (_Bool)isRectangularAndAxisAlignedToAngle:(float)arg1;

- (id)layoutFrame;

- (id)path;



@end


