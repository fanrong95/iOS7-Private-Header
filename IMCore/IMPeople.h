/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray, NSMutableArray;



@interface IMPeople : NSObject

{

    NSMutableArray *_people;

    int _coalesceCount;

    _Bool _hidePeople;

}



- (void)_addedPeople:(id)arg1;

- (_Bool)addIMHandle:(id)arg1;

- (void)addNotificationObserver:(id)arg1 selector:(SEL)arg2;

- (_Bool)addPeopleFromArray:(id)arg1;

- (_Bool)addPeopleFromArray:(id)arg1 skipMe:(_Bool)arg2;

- (void)addedIMHandle:(id)arg1;

- (void)beginCoalescedChanges;

@property(readonly, nonatomic) _Bool coalescingChanges;

- (_Bool)containsIMHandle:(id)arg1;

@property(readonly, nonatomic) unsigned long long count;

- (void)dealloc;

- (void)endCoalescedChanges;

@property(readonly, nonatomic) NSArray *groups;

@property(nonatomic, setter=setShouldHidePeople:) _Bool hidePeople; // @synthesize hidePeople=_hidePeople;

- (void)imHandle:(id)arg1 buddyStatusChanged:(_Bool)arg2;

@property(readonly, nonatomic) NSArray *people;

- (_Bool)removeIMHandle:(id)arg1;

- (void)removeNotificationObserver:(id)arg1;

- (_Bool)removePeopleFromArray:(id)arg1;

- (void)removedIMHandle:(id)arg1;



@end


