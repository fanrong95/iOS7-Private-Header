/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSDInfo.h"



@protocol TSDChangeableInfo <TSDInfo>

- (void)beginCollectingChanges;

- (id)endCollectingChanges;

@property(readonly, nonatomic) _Bool isUserModifiable;

- (void)willChangeProperty:(int)arg1;



@optional

@property(readonly, nonatomic) Class editorClass;

- (void)willChangeProperties:(id)arg1;

@end


