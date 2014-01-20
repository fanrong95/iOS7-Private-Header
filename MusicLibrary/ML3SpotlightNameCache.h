/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class ML3MusicLibrary;



__attribute__((visibility("hidden")))

@interface ML3SpotlightNameCache : NSObject

{

    struct unordered_map<long long, NSString *, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, NSString *>>> _map;

    _Bool _idle;

    ML3MusicLibrary *_library;

}



+ (id)copyFromLibrary:(id)arg1 cancelHandler:(id)arg2;

+ (void)initialize;

- (id).cxx_construct;

- (void).cxx_destruct;

- (id)_initWithLibrary:(id)arg1 cancelHandler:(id)arg2;

- (void)dealloc;



@end


