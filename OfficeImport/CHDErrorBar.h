/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class CHDChart, CHDData, OADGraphicProperties;



__attribute__((visibility("hidden")))

@interface CHDErrorBar : NSObject

{

    CHDChart *mChart;

    double mValue;

    int mType;

    int mValueType;

    int mDirection;

    _Bool mNoEndCap;

    CHDData *mMinusValues;

    CHDData *mPlusValues;

    OADGraphicProperties *mGraphicProperties;

}



+ (id)errorBarWithChart:(id)arg1;

- (void)dealloc;

- (int)direction;

- (id)graphicProperties;

- (id)initWithChart:(id)arg1;

- (_Bool)isNoEndCap;

- (id)minusValues;

- (id)plusValues;

- (void)setDirection:(int)arg1;

- (void)setGraphicProperties:(id)arg1;

- (void)setMinusValues:(id)arg1;

- (void)setNoEndCap:(_Bool)arg1;

- (void)setPlusValues:(id)arg1;

- (void)setType:(int)arg1;

- (void)setValue:(double)arg1;

- (void)setValueType:(int)arg1;

- (int)type;

- (double)value;

- (int)valueType;



@end

