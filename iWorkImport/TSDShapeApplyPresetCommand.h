/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSDStyledInfoSetStyleCommand.h"


@class NSObject<TSSPreset>;



__attribute__((visibility("hidden")))

@interface TSDShapeApplyPresetCommand : TSDStyledInfoSetStyleCommand

{

    NSObject<TSSPreset> *mPreset;

}



- (void)computeStyle;

- (void)dealloc;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithShape:(id)arg1 preset:(id)arg2;

- (id)initWithShape:(id)arg1 presetKind:(id)arg2 index:(unsigned long long)arg3;

- (void)loadFromArchive:(const struct ShapeApplyPresetCommandArchive *)arg1 unarchiver:(id)arg2;

@property(readonly, nonatomic) NSObject<TSSPreset> *preset; // @synthesize preset=mPreset;

- (void)saveToArchive:(struct ShapeApplyPresetCommandArchive *)arg1 archiver:(id)arg2;

- (void)saveToArchiver:(id)arg1;

- (const struct ShapeApplyPresetCommandArchive *)shapeApplyPresetCommandArchiveFromUnarchiver:(id)arg1;



@end


