/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSKCommand.h"


@class TSDLineEnd, TSDShapeInfo;



__attribute__((visibility("hidden")))

@interface TSDShapeSetLineEndCommand : TSKCommand

{

    TSDShapeInfo *mShape;

    TSDLineEnd *mLineEnd;

    _Bool mIsHeadLineEnd;

}



- (id)actionString;

- (void)commit;

- (void)dealloc;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithShape:(id)arg1 lineEnd:(id)arg2 isHeadLineEnd:(_Bool)arg3;

@property(readonly, nonatomic) _Bool isHeadLineEnd; // @synthesize isHeadLineEnd=mIsHeadLineEnd;

@property(readonly, nonatomic) TSDLineEnd *lineEnd; // @synthesize lineEnd=mLineEnd;

- (void)p_do;

- (_Bool)process;

- (void)redo;

- (void)saveToArchiver:(id)arg1;

@property(readonly, nonatomic) TSDShapeInfo *shape; // @synthesize shape=mShape;

- (void)undo;



@end


