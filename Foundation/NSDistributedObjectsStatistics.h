/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSDictionary.h"



__attribute__((visibility("hidden")))

@interface NSDistributedObjectsStatistics : NSDictionary

{

    unsigned long long requestsReceived;

    unsigned long long repliesSent;

    unsigned long long requestsSent;

    unsigned long long repliesReceived;

}



- (void)addStatistics:(id)arg1;

- (id)allKeys;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (unsigned long long)count;

- (id)keyEnumerator;

- (id)objectForKey:(id)arg1;



@end


