/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CLNotifierServiceAdapter.h"


#import "CLGyroCalibrationDatabaseProtocol.h"



@interface CLGyroCalibrationDatabaseAdapter : CLNotifierServiceAdapter <CLGyroCalibrationDatabaseProtocol>

{

}



+ (id)getSilo;

- (void)beginService;

- (void)endService;

- (void)heartAttack;

- (id)initInSilo:(id)arg1;



@end


