/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



@protocol NSFetchedResultsControllerDelegate



@optional

- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;

- (void)controller:(id)arg1 didChangeSection:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4;

- (id)controller:(id)arg1 sectionIndexTitleForSectionName:(id)arg2;

- (void)controllerDidChangeContent:(id)arg1;

- (void)controllerWillChangeContent:(id)arg1;

@end


