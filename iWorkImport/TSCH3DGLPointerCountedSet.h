/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class TSUPointerKeyDictionary;



__attribute__((visibility("hidden")))

@interface TSCH3DGLPointerCountedSet : NSObject

{

    TSUPointerKeyDictionary *mSet;

    unsigned long long mCount;

    unsigned long long mByteCount;

}



- (void)addObject:(id)arg1;

@property(readonly, nonatomic) unsigned long long count; // @synthesize count=mCount;

- (void)dealloc;

- (id)description;

- (id)descriptionWithFrames:(unsigned long long)arg1;

- (id)init;



@end


