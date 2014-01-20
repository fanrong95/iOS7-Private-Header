/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSWPRep.h"


#import "TSKChangeSourceObserver.h"



@class NSSet;



__attribute__((visibility("hidden")))

@interface TPBodyRep : TSWPRep <TSKChangeSourceObserver>

{

    NSSet *_lastSelectedInfos;

}



- (id)beginEditing;

- (id)colorBehindLayer:(id)arg1;

- (void)dealloc;

- (id)hitRep:(struct CGPoint)arg1;

- (id)hitRepChrome:(struct CGPoint)arg1;

- (id)hitReps:(struct CGPoint)arg1 withSlop:(struct CGSize)arg2;

- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

- (_Bool)p_doesRep:(id)arg1 containCharIndex:(unsigned long long)arg2 isStart:(_Bool)arg3;

- (id)repForCharIndex:(unsigned long long)arg1 isStart:(_Bool)arg2;

- (id)siblings;

- (id)storage;

- (void)willBeRemoved;



@end

