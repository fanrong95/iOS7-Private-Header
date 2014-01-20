/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class TSDStroke;



__attribute__((visibility("hidden")))

@interface TSTTableStrokePresetData : NSObject

{

    TSDStroke *mHorizontalStroke;

    TSDStroke *mVerticalStroke;

    TSDStroke *mExteriorStroke;

    unsigned int mVisibleMask;

}



- (void)dealloc;

@property(retain, nonatomic) TSDStroke *exteriorStroke; // @synthesize exteriorStroke=mExteriorStroke;

@property(retain, nonatomic) TSDStroke *horizontalStroke; // @synthesize horizontalStroke=mHorizontalStroke;

- (id)init;

- (id)initWithArchive:(const struct StrokePresetDataArchive *)arg1 unarchiver:(id)arg2;

- (id)initWithDeprecatedArchive:(const struct Deprecated_StrokePresetDataArchive *)arg1 unarchiver:(id)arg2;

- (id)initWithMask:(unsigned int)arg1 horizontalStroke:(id)arg2 verticalStroke:(id)arg3 exteriorStroke:(id)arg4;

- (_Bool)isEqual:(id)arg1;

@property(nonatomic) unsigned int mask; // @synthesize mask=mVisibleMask;

- (void)saveToArchive:(struct StrokePresetDataArchive *)arg1 archiver:(id)arg2;

@property(retain, nonatomic) TSDStroke *verticalStroke; // @synthesize verticalStroke=mVerticalStroke;



@end


