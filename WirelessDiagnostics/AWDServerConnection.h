/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface AWDServerConnection : NSObject

{

    struct AWDServerConnection *fServerConnection;

}



- (void)dealloc;

- (void)flushToQueue:(id)arg1 block:(id)arg2;

- (unsigned long long)getAWDTimestamp;

- (id)initWithComponentId:(unsigned int)arg1;

- (id)initWithComponentId:(unsigned int)arg1 andBlockOnConfiguration:(_Bool)arg2;

- (id)newMetricContainerWithIdentifier:(unsigned int)arg1;

- (_Bool)registerConfigChangeCallback:(id)arg1;

- (_Bool)registerQueriableMetricCallback:(id)arg1 forIdentifier:(void)arg2;

- (_Bool)registerQueriableMetricCallbackForLogging:(id)arg1;

- (_Bool)submitMetric:(id)arg1;



@end


