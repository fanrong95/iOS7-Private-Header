/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSKCommand.h"


@class NSArray, TSPObject<TSDMutableContainerInfo>;



__attribute__((visibility("hidden")))

@interface TSDContainerInsertChildrenCommand : TSKCommand

{

    TSPObject<TSDMutableContainerInfo> *mContainer;

    NSArray *mChildren;

    unsigned long long mIndex;

}



- (id)actionString;

- (_Bool)canCoalesceWithCommand:(id)arg1;

@property(readonly, nonatomic) NSArray *children; // @synthesize children=mChildren;

- (void)commit;

@property(readonly, nonatomic) TSPObject<TSDMutableContainerInfo> *container; // @synthesize container=mContainer;

- (void)dealloc;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithContainer:(id)arg1 insertingChildren:(id)arg2 atIndex:(unsigned long long)arg3 objectContext:(id)arg4;

- (void)p_do;

- (_Bool)process;

- (void)redo;

- (void)saveToArchiver:(id)arg1;

- (void)undo;



@end


