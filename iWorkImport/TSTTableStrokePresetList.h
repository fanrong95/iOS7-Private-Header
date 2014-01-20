/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class TSTTableStrokePresetData;



__attribute__((visibility("hidden")))

@interface TSTTableStrokePresetList : NSObject

{

    unsigned long long mCount;

    TSTTableStrokePresetData *mPresets[15];

}



+ (id)init;

+ (id)instanceWithArchive:(const struct StrokePresetListArchive *)arg1 unarchiver:(id)arg2;

+ (id)strokePresetListForDefaultPropertyMapForTablePresetIndex:(unsigned long long)arg1 colors:(id)arg2;

+ (id)strokePresetListForDefaultPropertyMapWithFatStroke:(id)arg1 andThinStroke:(id)arg2;

+ (id)strokePresetListForDefaultPropertyMapWithHorizontalStroke:(id)arg1 verticalStroke:(id)arg2 exteriorStroke:(id)arg3;

- (unsigned long long)count;

- (void)dealloc;

- (id)exteriorStrokeForStrokePreset:(unsigned long long)arg1;

- (id)horizontalStrokeForStrokePreset:(unsigned long long)arg1;

- (id)initWithArchive:(const struct StrokePresetListArchive *)arg1 unarchiver:(id)arg2;

- (_Bool)isEqual:(id)arg1;

- (unsigned int)maskForStrokePreset:(unsigned long long)arg1;

- (id)presetAtIndex:(unsigned long long)arg1;

- (void)saveToArchive:(struct StrokePresetListArchive *)arg1 archiver:(id)arg2;

- (void)setStroke:(id)arg1 forPresetIndex:(unsigned long long)arg2;

- (void)setStrokePreset:(id)arg1 atIndex:(unsigned long long)arg2;

- (id)verticalStrokeForStrokePreset:(unsigned long long)arg1;



@end


