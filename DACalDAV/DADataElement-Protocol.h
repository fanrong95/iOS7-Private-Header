/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol DADataElement <NSObject>

- (_Bool)deleteFromContainer:(void *)arg1;

- (_Bool)loadLocalItemWithAccount:(id)arg1;

- (_Bool)saveServerIDToExistingItem;

- (_Bool)saveWithLocalObject:(void *)arg1 toContainer:(void *)arg2 shouldMergeProperties:(_Bool)arg3 outMergeDidChooseLocalProperties:(_Bool *)arg4 account:(id)arg5;

- (void)setLocalItem:(void *)arg1;

@end


