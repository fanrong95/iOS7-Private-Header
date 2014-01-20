/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCHChartCommand.h"


@class NSNumber;



__attribute__((visibility("hidden")))

@interface TSCHCommandSetGridValue : TSCHChartCommand

{

    unsigned long long mRowIndex;

    unsigned long long mColumnIndex;

    NSNumber *mOldValue;

    NSNumber *mNewValue;

}



- (const struct ChartCommandArchive *)chartCommandArchiveFromUnarchiver:(id)arg1;

- (void)commitPrimitive;

- (void)dealloc;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithChartInfo:(id)arg1 rowIndex:(unsigned long long)arg2 columnIndex:(unsigned long long)arg3 value:(id)arg4;

- (_Bool)process;

- (void)redoPrimitive;

- (void)saveToArchiver:(id)arg1;

- (void)undoPrimitive;



@end


