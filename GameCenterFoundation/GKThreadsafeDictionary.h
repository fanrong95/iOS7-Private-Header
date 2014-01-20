/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableDictionary, NSObject<OS_dispatch_queue>;



@interface GKThreadsafeDictionary : NSObject

{

    NSObject<OS_dispatch_queue> *_queue;

    NSMutableDictionary *_dictionary;

}



- (id)allKeys;

- (id)allObjects;

- (void)dealloc;

- (id)description;

@property(retain, nonatomic) NSMutableDictionary *dictionary; // @synthesize dictionary=_dictionary;

- (id)initWithName:(id)arg1;

- (id)objectForKey:(id)arg1;

- (id)objectForKey:(id)arg1 objectProducerBlock:(id)arg2;

- (id)objectForKeyedSubscript:(id)arg1;

- (void)readFromDictionary:(id)arg1;

- (void)removeAllObjects;

- (void)removeObjectForKey:(id)arg1;

- (void)setObject:(id)arg1 forKey:(id)arg2;

- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

- (void)writeToDictionary:(id)arg1;



@end


