/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSDictionary, OADOrientedBounds;



__attribute__((visibility("hidden")))

@interface CMShapeBuilder : NSObject

{

    int _type;

    OADOrientedBounds *_orientedBounds;

    int _format;

    NSDictionary *_adjustValues;

}



+ (struct CGRect)canonicalBounds;

- (struct CGAffineTransform)affineTransform;

- (struct CGPath *)copyShapeWithTransform:(struct CGAffineTransform)arg1;

- (void)dealloc;

- (_Bool)isOffice12;

- (float)maxAdjustedValue;

- (void)setAdjustValues:(id)arg1;

- (void)setFileFormat:(int)arg1;

- (void)setOrientedBounds:(id)arg1;

- (void)setShapeType:(int)arg1;



@end


