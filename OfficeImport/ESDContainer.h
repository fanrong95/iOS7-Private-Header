/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "ESDObject.h"


@class NSMutableArray;



__attribute__((visibility("hidden")))

@interface ESDContainer : ESDObject

{

    NSMutableArray *mChildren;

}



+ (void)pbReadChildrenOfObject:(struct EshObject *)arg1 toArray:(id)arg2 state:(id)arg3;

+ (void)readChildrenOfObject:(struct EshObject *)arg1 reader:(struct OcReader *)arg2 toArray:(id)arg3;

- (struct EshObject *)addAtomChildOfType:(unsigned short)arg1;

- (void)addCStringWithChar2String:(const unsigned short *)arg1 instance:(int)arg2;

- (void)addCStringWithNSString:(id)arg1 instance:(int)arg2;

- (void)addChild:(id)arg1;

- (id)addChildOfType:(unsigned short)arg1;

- (id)addContainerChildOfType:(unsigned short)arg1;

- (id)addEshChild:(struct EshObject *)arg1;

- (struct EshObject *)addPptAtomChildOfType:(unsigned short)arg1;

- (id)addPptContainerChildOfType:(unsigned short)arg1;

- (id)addPptEshClientChildOfType:(unsigned short)arg1;

- (id)childAt:(unsigned long long)arg1;

- (unsigned long long)childCount;

- (id)childOfType:(unsigned short)arg1 instance:(short)arg2;

- (id)containerChildAt:(unsigned long long)arg1;

- (id)containerChildOfType:(unsigned short)arg1 instance:(short)arg2 mustExist:(_Bool)arg3;

- (id)containerFromObject:(id)arg1 mustExist:(_Bool)arg2;

- (void)dealloc;

- (id)ebInitWithType:(unsigned short)arg1 version:(unsigned short)arg2 state:(id)arg3;

- (struct EshContainer *)eshContainer;

- (struct EshGroup *)eshGroup;

- (id)firstChildOfType:(unsigned short)arg1;

- (id)firstChildOfType:(unsigned short)arg1 afterChild:(id)arg2;

- (id)firstChildOfType:(unsigned short)arg1 afterIndex:(unsigned long long)arg2;

- (id)firstContainerChildOfType:(unsigned short)arg1 mustExist:(_Bool)arg2;

- (unsigned long long)indexOfFirstChildOfType:(unsigned short)arg1 afterIndex:(unsigned long long)arg2;

- (id)initFromReader:(struct OcReader *)arg1 type:(unsigned short)arg2 version:(unsigned short)arg3;

- (id)initWithEshObject:(struct EshObject *)arg1;

- (void)insertChild:(id)arg1 at:(unsigned long long)arg2;

- (id)insertEshChild:(struct EshObject *)arg1 at:(unsigned long long)arg2;

- (id)pbInitWithType:(unsigned short)arg1 version:(unsigned short)arg2 state:(id)arg3;

- (void)removeChild:(id)arg1;

- (id)shapeContainer;

- (void)writeToWriter:(struct OcWriter *)arg1;



@end


