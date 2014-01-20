/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCHSelection.h"


__attribute__((visibility("hidden")))

@interface TNChartSelection : TSCHSelection

{

    CDStruct_5744d895 mReference;

}



+ (Class)archivedSelectionClass;

- (id).cxx_construct;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)initFromArchive:(const struct ChartSelectionArchive *)arg1 unarchiver:(id)arg2;

- (id)initWithChartInfo:(id)arg1;

- (id)initWithChartInfo:(id)arg1 paths:(id)arg2;

- (id)initWithChartInfo:(id)arg1 paths:(id)arg2 reference:(CDStruct_5744d895)arg3;

- (_Bool)isEqual:(id)arg1;

@property(readonly, nonatomic) CDStruct_5744d895 reference; // @synthesize reference=mReference;

- (_Bool)returnChartFrameForAutoscroll;

- (void)saveToArchive:(struct ChartSelectionArchive *)arg1 archiver:(id)arg2;

- (void)setReference:(CDStruct_5744d895)arg1;



@end


