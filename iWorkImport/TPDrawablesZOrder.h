/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSPObject.h"


@class NSMutableArray;



__attribute__((visibility("hidden")))

@interface TPDrawablesZOrder : TSPObject

{

    NSMutableArray *_drawables;

}



- (unsigned long long)addDrawable:(id)arg1;

- (void)dealloc;

- (id)drawableAtZOrder:(unsigned long long)arg1;

@property(readonly, nonatomic) unsigned long long drawableCount;

- (id)drawableEnumerator;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithContext:(id)arg1;

- (unsigned long long)insertDrawable:(id)arg1 atZOrder:(unsigned long long)arg2;

- (void)moveDrawable:(id)arg1 toZOrder:(unsigned long long)arg2;

- (void)moveDrawableAtZOrder:(unsigned long long)arg1 toZOrder:(unsigned long long)arg2;

- (void)moveDrawables:(id)arg1 toZOrder:(unsigned long long)arg2;

- (id)orderedDrawables:(id)arg1;

- (void)removeDrawable:(id)arg1;

- (void)removeDrawableAtZOrder:(unsigned long long)arg1;

- (void)saveToArchiver:(id)arg1;

- (void)swapDrawableAtZOrder:(unsigned long long)arg1 withDrawableAtZOrder:(unsigned long long)arg2;

- (unsigned long long)zOrderOfDrawable:(id)arg1;



@end


