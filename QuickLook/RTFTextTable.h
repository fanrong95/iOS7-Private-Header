/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "RTFTextBlock.h"


__attribute__((visibility("hidden")))

@interface RTFTextTable : RTFTextBlock

{

    unsigned long long _numCols;

    unsigned long long _tableFlags;

    id _lcache;

    void *_tablePrimary;

    void *_tableSecondary;

}



- (void)_setTableFlags:(unsigned long long)arg1;

- (unsigned long long)_tableFlags;

- (void)_takeValuesFromTextBlock:(id)arg1;

- (_Bool)collapsesBorders;

- (void)dealloc;

- (_Bool)hidesEmptyCells;

- (id)init;

- (unsigned long long)layoutAlgorithm;

- (unsigned long long)numberOfColumns;

- (void)setCollapsesBorders:(_Bool)arg1;

- (void)setHidesEmptyCells:(_Bool)arg1;

- (void)setLayoutAlgorithm:(unsigned long long)arg1;

- (void)setNumberOfColumns:(unsigned long long)arg1;



@end


