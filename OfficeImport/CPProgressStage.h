/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class CPProgressContext, NSString;



__attribute__((visibility("hidden")))

@interface CPProgressStage : NSObject

{

    double m_currentPosition;

    double m_totalSteps;

    double m_stepsInParent;

    NSString *m_name;

    CPProgressStage *m_parentStage;

    CPProgressContext *m_context;

}



- (void)advanceProgress:(double)arg1;

- (double)currentPosition;

- (void)dealloc;

- (void)end;

- (id)initBranchWithSteps:(double)arg1 takingSteps:(double)arg2 name:(id)arg3 inContext:(id)arg4;

- (id)initRootStageInContext:(id)arg1;

- (id)initWithSteps:(double)arg1 takingSteps:(double)arg2 name:(id)arg3 inContext:(id)arg4;

- (id)parentStage;

- (void)setProgress:(double)arg1;



@end


