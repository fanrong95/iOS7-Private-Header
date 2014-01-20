/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSPObject.h"


#import "TSCHMediatorProvider.h"

#import "TSCHNotifyOnModify.h"



@class TSCHChartMediator;



__attribute__((visibility("hidden")))

@interface TSCHPersistentChartMediator : TSPObject <TSCHNotifyOnModify, TSCHMediatorProvider>

{

    TSCHChartMediator *mMediator;

}



- (void)dealloc;

- (id)initWithContext:(id)arg1 andMediator:(id)arg2;

- (void)loadFromArchive:(const struct ChartMediatorArchive *)arg1;

@property(readonly, nonatomic) TSCHChartMediator *mediator; // @synthesize mediator=mMediator;

- (void)saveToArchive:(struct ChartMediatorArchive *)arg1;



@end


