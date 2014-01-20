/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol TPMasterDrawableProvider <NSObject>

- (void)addMasterDrawable:(id)arg1 atIndex:(unsigned long long)arg2 insertContext:(id)arg3 suppressDOLC:(_Bool)arg4;

- (void)addMasterDrawables:(id)arg1 atIndex:(unsigned long long)arg2 insertContext:(id)arg3 suppressDOLC:(_Bool)arg4;

- (unsigned long long)countOfMasterDrawables;

- (unsigned long long)indexOfMasterDrawable:(id)arg1;

- (id)masterDrawables;

- (id)masterDrawablesSortedByZOrder:(id)arg1;

- (void)removeMasterDrawable:(id)arg1 suppressDOLC:(_Bool)arg2;

@end

