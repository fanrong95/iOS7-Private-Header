/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "GQDNameMappable.h"



@class GQDBezierPath;



__attribute__((visibility("hidden")))

@interface GQDRLineEnd : NSObject <GQDNameMappable>

{

    GQDBezierPath *mPath;

    struct CGPoint mEndPoint;

    _Bool mIsFilled;

    double mScale;

}



+ (const struct StateSpec *)stateForReading;

- (id).cxx_construct;

- (void)dealloc;

- (struct CGPoint)endPoint;

- (_Bool)isFilled;

- (struct CGPath *)path;

- (char *)pathStr;

- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;

- (double)scale;



@end


