/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface CHDDataValue : NSObject

{

    struct CHDDataPoint mDataPoint;

}



+ (id)dataValue;

+ (id)dataValueWithIndex:(long long)arg1 value:(struct EDValue *)arg2;

- (id).cxx_construct;

- (void).cxx_destruct;

- (unsigned long long)contentFormatId;

- (id)contentFormatWithResources:(id)arg1;

- (struct CHDDataPoint *)dataPoint;

- (long long)index;

- (id)init;

- (id)initWithIndex:(long long)arg1 value:(struct EDValue *)arg2;

- (void)setContentFormatId:(unsigned long long)arg1;

- (void)setContentFormatWithResources:(id)arg1 resources:(id)arg2;

- (void)setDataPoint:(struct CHDDataPoint *)arg1;

- (void)setIndex:(long long)arg1;

- (void)setValue:(struct EDValue *)arg1;

- (struct EDValue *)value;



@end


