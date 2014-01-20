/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSDate, TSUProgressStage;



__attribute__((visibility("hidden")))

@interface TSUProgressContext : NSObject

{

    TSUProgressStage *m_currentStage;

    NSDate *m_lastReportTime;

    double m_lastProgressReport;

}



- (void)addProgressObserver:(id)arg1 selector:(SEL)arg2;

- (id)addProgressObserverBlock:(id)arg1;

- (void)advanceProgress:(double)arg1;

- (void)createStageWithSteps:(double)arg1;

- (void)createStageWithSteps:(double)arg1 takingSteps:(double)arg2;

- (double)currentPosition;

- (id)currentStage;

- (void)dealloc;

- (void)endStage;

- (id)init;

- (void)nextSubStageWillTakeThisManyOfMySteps:(double)arg1;

- (double)overallProgress;

- (void)removeProgressObserver:(id)arg1;

- (void)reportProgress:(double)arg1 overallProgress:(double)arg2;

- (void)reset;

- (void)setMessage:(id)arg1;

- (void)setPercentageProgressFromCPProgressContext:(double)arg1;

- (void)setProgress:(double)arg1;



@end


