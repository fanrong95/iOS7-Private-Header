/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSEnumerator.h"



__attribute__((visibility("hidden")))

@interface NSSearchPathEnumerator : NSEnumerator

{

    long long state;

    unsigned long long directory;

    unsigned long long domainMask;

}



- (id)initWithDirectory:(unsigned long long)arg1 domains:(unsigned long long)arg2;

- (id)nextObject;



@end


