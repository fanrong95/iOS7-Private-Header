/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface SenTestObserver : NSObject

{

}



+ (void)addTestObserver:(Class)arg1;

+ (void)initialize;

+ (void)removeTestObserver:(Class)arg1;

+ (void)resumeObservation;

+ (void)suspendObservation;

+ (void)testCaseDidFail:(id)arg1;

+ (void)testCaseDidStart:(id)arg1;

+ (void)testCaseDidStop:(id)arg1;

+ (void)testSuiteDidStart:(id)arg1;

+ (void)testSuiteDidStop:(id)arg1;



@end

