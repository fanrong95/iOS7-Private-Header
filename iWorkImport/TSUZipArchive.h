/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableDictionary;



__attribute__((visibility("hidden")))

@interface TSUZipArchive : NSObject

{

    NSMutableDictionary *_entries;

}



- (void).cxx_destruct;

- (void)addEntry:(id)arg1;

@property(readonly, nonatomic) unsigned long long archiveLength;

- (id)debugDescription;

- (id)entryForName:(id)arg1;

- (void)enumerateEntriesUsingBlock:(id)arg1;

- (id)init;

- (void)readArchiveWithQueue:(id)arg1 completion:(id)arg2;

- (void)readCentralDirectoryData:(id)arg1 entryCount:(unsigned long long)arg2 queue:(id)arg3 completion:(id)arg4;

- (void)readCentralDirectoryWithEntryCount:(unsigned long long)arg1 offset:(long long)arg2 size:(long long)arg3 channel:(id)arg4 queue:(id)arg5 completion:(id)arg6;

- (_Bool)readCentralFileHeaderWithBuffer:(const void **)arg1 dataSize:(unsigned long long *)arg2;

@property(readonly, nonatomic) id <TSUReadChannel> readChannel;

- (id)readChannelForEntry:(id)arg1;

- (void)readEndOfCentralDirectoryData:(id)arg1 channel:(id)arg2 queue:(id)arg3 completion:(id)arg4;



@end


