/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableDictionary;



__attribute__((visibility("hidden")))

@interface SYDJournal : NSObject

{

    NSMutableDictionary *store;

    NSMutableDictionary *journal;

    _Bool readonly;

}



- (void)addChange:(int)arg1 forKey:(id)arg2 changeCount:(long long)arg3;

- (int)changeSinceChangeCount:(long long)arg1 forKey:(id)arg2;

- (id)changesSinceChangeCount:(long long)arg1;

- (void)dealloc;

- (id)description;

- (id)init;

- (id)initWithMutableStore:(id)arg1;

- (id)initWithStore:(id)arg1;

- (long long)maximumChangeCount;

- (_Bool)removeChangesUntilChangeCount:(long long)arg1;



@end


