/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface TSPDistributableArchiveOutputStream : NSObject

{

    id <SFUSimpleOutputStream> _outputStream;

    long long _offset;

    _Bool _doneWritingObjectEntries;

    _Bool _doneWritingFileDescriptorProtos;

    _Bool _doneWritingClassInfoMap;

    _Bool _descriptorsEnabled;

    _Bool _tocEnabled;

}



- (void).cxx_destruct;

- (id)initWithOutputStream:(id)arg1 checkCrc:(unsigned int)arg2 enableDescriptors:(_Bool)arg3 enableToc:(_Bool)arg4 closedCleanly:(_Bool)arg5 archivedVersions:(CDStruct_4bcfbbae)arg6;

- (_Bool)writeEntry:(id)arg1 offset:(long long *)arg2 headerLength:(unsigned int *)arg3 error:(id *)arg4;



@end

