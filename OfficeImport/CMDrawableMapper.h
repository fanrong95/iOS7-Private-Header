/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CMMapper.h"


@class CMDrawableStyle, NSData, NSString, OADDrawable, OADOrientedBounds;



__attribute__((visibility("hidden")))

@interface CMDrawableMapper : CMMapper

{

    OADDrawable *mDrawable;

    CMDrawableStyle *mStyle;

    NSData *mImageBinaryData;

    NSString *mName;

    NSString *mExtension;

    int mResourceType;

    NSString *mSourcePath;

    struct CGRect mBox;

    float mRotation;

    _Bool mIsSupported;

    _Bool mIsCropped;

    struct CGRect mUncroppedBox;

    OADOrientedBounds *mOrientedBounds;

}



- (id).cxx_construct;

- (id)blipAtIndex:(unsigned int)arg1;

- (struct CGRect)box;

- (void)calculateUncroppedBox:(id)arg1;

- (id)convertMetafileToPdf;

- (void)dealloc;

- (id)initWithOadDrawable:(id)arg1 parent:(id)arg2;

- (id)initWithParent:(id)arg1;

- (_Bool)isCropped;

- (void)mapBounds;

- (void)mapDrawingContext:(id)arg1 at:(id)arg2 relative:(_Bool)arg3 withState:(id)arg4;

- (void)mapImageBinaryData;

- (void)mapShapeGraphicsAt:(id)arg1 withState:(id)arg2;

- (void)mapTextBoxAt:(id)arg1 withState:(id)arg2;

- (float)rotation;

- (id)saveResourceAndReturnPath:(id)arg1 withType:(int)arg2;

- (void)setBoundingBox;

- (void)setRotation:(float)arg1;

- (void)setWithOadImage:(id)arg1;

- (struct CGRect)shapeTextBoxRect;

- (struct CGRect)uncroppedBox;



@end


