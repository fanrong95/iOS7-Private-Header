/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol NSISRowBody <NSObject>

- (void)enumerateVariables:(id)arg1;

- (void)removeVariable:(id)arg1;

- (void)replaceVariable:(id)arg1 withExpression:(id)arg2 processVariableNewToReceiver:(id)arg3 processVariableDroppedFromReceiver:(void)arg4;

- (void)replaceVariable:(id)arg1 withVariablePlusDelta:(double)arg2;

- (void)replaceVariable:(id)arg1 withVariablePlusDelta:(double)arg2 timesVariable:(id)arg3 processVariableNewToReceiver:(id)arg4 processVariableDroppedFromReceiver:(void)arg5;

@end


