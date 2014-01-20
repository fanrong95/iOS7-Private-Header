/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class CHDDataValuesCollection, CHDFormula, EDResources;



__attribute__((visibility("hidden")))

@interface CHDData : NSObject

{

    CHDDataValuesCollection *mDataValues;

    CHDFormula *mFormula;

    unsigned long long mContentFormatId;

    unsigned long long mDataValueIndexCount;

    EDResources *mResources;

}



+ (id)dataWithDataPointCount:(unsigned long long)arg1 resources:(id)arg2;

+ (id)dataWithResources:(id)arg1;

- (unsigned long long)averageDataPointDecimalCount;

- (id)contentFormat;

- (unsigned long long)contentFormatId;

- (unsigned long long)countOfCellsBeingReferenced;

- (unsigned long long)dataValueIndexCount;

- (id)dataValues;

- (void)dealloc;

- (id)firstValueContentFormatWithWorkbook:(id)arg1;

- (id)formula;

- (id)initWithDataPointCount:(unsigned long long)arg1 resources:(id)arg2;

- (id)initWithResources:(id)arg1;

- (_Bool)isEmpty;

- (void)setContentFormat:(id)arg1;

- (void)setContentFormatId:(unsigned long long)arg1;

- (void)setDataValueIndexCount:(unsigned long long)arg1;

- (void)setFormula:(id)arg1 chart:(id)arg2;



@end


