/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class CPProgressStage, NSDate, NSMutableArray, TSUProgressContext;



__attribute__((visibility("hidden")))

@interface CPProgressContext : NSObject

{

    TSUProgressContext *m_parentProgressContext;

    CPProgressStage *m_currentStage;

    NSDate *m_lastReportTime;

    NSMutableArray *m_stackOfBranches;

}



+ (void)addProgressObserver:(id)arg1 selector:(SEL)arg2;

+ (void)advanceProgress:(double)arg1;

+ (id)contextForCurrentThread;

+ (id)createBranchWithSteps:(double)arg1 takingSteps:(double)arg2 name:(id)arg3;

+ (void)createContextForCurrentThreadWithParentContext:(id)arg1;

+ (void)createStageWithSteps:(double)arg1 takingSteps:(double)arg2;

+ (void)createStageWithSteps:(double)arg1 takingSteps:(double)arg2 name:(id)arg3;

+ (double)currentPosition;

+ (void)endBranch:(id)arg1;

+ (void)endStage;

+ (void)popBranch;

+ (void)pushBranch:(id)arg1;

+ (void)removeContextForCurrentThread;

+ (void)removeProgressObserver:(id)arg1;

+ (void)setMessage:(id)arg1;

+ (void)setProgress:(double)arg1;

+ (id)stageForCurrentThread;

- (id)currentStage;

- (void)dealloc;

- (id)initWithParentContext:(id)arg1;

- (void)reportProgress:(double)arg1;

- (id)rootStage;



@end


