/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSEnumerator.h"



@class NSConcreteMapTable;



__attribute__((visibility("hidden")))

@interface NSConcreteMapTableValueEnumerator : NSEnumerator

{

    NSConcreteMapTable *mapTable;

    unsigned long long counter;

}



+ (id)enumeratorWithMapTable:(id)arg1;

- (void)dealloc;

- (id)nextObject;



@end


