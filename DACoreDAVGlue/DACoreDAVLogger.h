/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "DATrafficLogger.h"



#import "CoreDAVLogDelegate.h"



@interface DACoreDAVLogger : DATrafficLogger <CoreDAVLogDelegate>

{

}



+ (id)registerDefaultLoggerWithCoreDAV;

- (void)coreDAVLogDiagnosticMessage:(id)arg1 atLevel:(long long)arg2;

- (long long)coreDAVLogLevel;

- (void)coreDAVLogTransmittedDataPartial:(id)arg1;

- (long long)coreDAVOutputLevel;

- (void)coreDAVTransmittedDataFinished;

- (_Bool)shouldLogTransmittedData;



@end


