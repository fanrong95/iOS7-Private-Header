/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSIndexPath.h"



__attribute__((visibility("hidden")))

@interface UIMutableIndexPath : NSIndexPath

{

    unsigned long long *_mutableIndexes;

    _Bool _locked;

}



+ (void)setIndex:(unsigned long long)arg1 atPosition:(unsigned long long)arg2 forIndexPath:(id *)arg3;

- (long long)compare:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (void)getIndexes:(unsigned long long *)arg1;

- (unsigned long long)indexAtPosition:(unsigned long long)arg1;

- (id)initWithIndexes:(const unsigned long long *)arg1 length:(unsigned long long)arg2;

- (id)retain;



@end

