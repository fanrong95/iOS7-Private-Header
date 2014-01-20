/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface TSCH3DAreaGenerator : NSObject

{

    vector_45b393db mTop;

    vector_45b393db mBottom;

    tvec2_84d5962d mYLimits;

    float mZeroValue;

}



+ (id)generatorWithYLimits:(tvec2_84d5962d)arg1 zeroValue:(float)arg2;

- (id).cxx_construct;

- (void).cxx_destruct;

- (void)addRow:(const vector_ec52ae8c *)arg1;

- (float)clampedZero;

- (void)clipLine:(const vector_45b393db *)arg1 into:(vector_45b393db *)arg2;

- (id)createGeometry:(const vector_ec52ae8c *)arg1;

- (void)dealloc;

- (id)initWithYLimits:(tvec2_84d5962d)arg1 zeroValue:(float)arg2;



@end


