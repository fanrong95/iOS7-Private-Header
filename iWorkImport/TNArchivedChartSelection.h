/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSPObject.h"


#import "TSKArchivedSelection.h"



@class TNChartSelection, TSKSelection;



__attribute__((visibility("hidden")))

@interface TNArchivedChartSelection : TSPObject <TSKArchivedSelection>

{

    TNChartSelection *mSelection;

}



- (void)dealloc;

- (id)initFromUnarchiver:(id)arg1;

- (void)saveToArchiver:(id)arg1;

@property(retain, nonatomic) TSKSelection *selection; // @synthesize selection=mSelection;



@end


