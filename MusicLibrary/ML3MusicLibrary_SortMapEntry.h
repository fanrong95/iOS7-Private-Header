/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSData, NSString;



__attribute__((visibility("hidden")))

@interface ML3MusicLibrary_SortMapEntry : NSObject

{

    long long _nameOrder;

    NSString *_name;

    NSData *_sortKey;

    int _nameSection;

    _Bool _dirty;

}



- (void).cxx_destruct;

- (id)description;

- (id)initWithName:(id)arg1 nameSection:(int)arg2 sortKey:(id)arg3;

- (id)initWithName:(id)arg1 nameSection:(int)arg2 sortKey:(id)arg3 nameOrder:(long long)arg4 dirtyFlag:(_Bool)arg5;



@end


