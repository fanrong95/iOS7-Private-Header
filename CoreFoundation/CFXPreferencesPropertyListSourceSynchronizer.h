/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class CFXPreferencesPropertyListSource;



__attribute__((visibility("hidden")))

@interface CFXPreferencesPropertyListSourceSynchronizer : NSObject

{

    unsigned short _mode;

    unsigned int _owner;

    CFXPreferencesPropertyListSource *_source;

    struct __CFDictionary *_dict;

    struct __CFArray *_dirtyKeys;

    struct __CFDictionary *_pendingMutations;

    struct __CFURL *_url;

    long long _formatToWrite;

    struct _CFXPreferencesStatInfo _statInfo;

    unsigned int _group;

    long long _generationCount;

}



- (unsigned char)_backingPlistChangedSinceLastSync;

- (void *)createPlistFromDisk;

- (void)dealloc;

- (void)finalize;

- (id)initWithPropertyListSource:(id)arg1 forLockedSynchronize:(_Bool)arg2;

- (void)setValue:(void *)arg1 forKey:(struct __CFString *)arg2;

- (unsigned char)synchronize;

- (unsigned char)synchronizeAlreadyFlocked;

- (unsigned char)writePlistToDisk;



@end


