/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSMutableDictionary.h"



@interface NSRTFD : NSMutableDictionary

{

    NSMutableDictionary *dict;

}



+ (void)initialize;

- (id)_getDocInfoForKey:(id)arg1;

- (_Bool)_isLink:(id)arg1;

- (id)addCommon:(id)arg1 docInfo:(id)arg2 value:(id)arg3 zone:(struct _NSZone *)arg4;

- (id)addData:(id)arg1 name:(id)arg2;

- (unsigned long long)addDirNamed:(id)arg1 lazy:(_Bool)arg2;

- (id)addFile:(id)arg1;

- (unsigned long long)addFileNamed:(id)arg1 fileAttributes:(id)arg2;

- (id)addLink:(id)arg1;

- (id)copy;

- (id)copy:(id)arg1 into:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (unsigned long long)count;

- (id)createRandomKey:(id)arg1;

- (id)createUniqueKey:(id)arg1;

- (id)dataForFile:(id)arg1;

- (id)dataRepresentation;

- (void)dealloc;

- (id)freeSerialized:(void *)arg1 length:(unsigned long long)arg2;

- (id)getDirInfo:(_Bool)arg1;

- (id)getDocument:(id)arg1 docInfo:(id)arg2;

- (id)init;

- (unsigned long long)initFromDocument:(id)arg1;

- (id)initFromElement:(id)arg1 ofDocument:(id)arg2;

- (id)initFromSerialized:(id)arg1;

- (unsigned long long)initUnixFile:(id)arg1;

- (id)initWithCapacity:(unsigned long long)arg1;

- (id)initWithContentsOfFile:(id)arg1;

- (id)initWithDataRepresentation:(id)arg1;

- (id)initWithDictionary:(id)arg1;

- (id)initWithDictionary:(id)arg1 copyItems:(_Bool)arg2;

- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;

- (id)initWithPasteboardDataRepresentation:(id)arg1;

- (unsigned long long)insertItem:(id)arg1 path:(id)arg2 dirInfo:(id)arg3 zone:(struct _NSZone *)arg4 plist:(id)arg5;

- (unsigned long long)internalSaveTo:(id)arg1 removeBackup:(_Bool)arg2 errorHandler:(id)arg3;

- (unsigned long long)internalSaveTo:(id)arg1 removeBackup:(_Bool)arg2 errorHandler:(id)arg3 temp:(id)arg4 backup:(id)arg5;

- (unsigned long long)internalWritePath:(id)arg1 errorHandler:(id)arg2 remapContents:(_Bool)arg3 hardLinkPath:(id)arg4;

- (_Bool)isPackage;

- (id)keyEnumerator;

- (id)nameFromPath:(id)arg1 extra:(id)arg2;

- (id)objectForKey:(id)arg1;

- (id)pasteboardDataRepresentation;

- (unsigned long long)realAddDirNamed:(id)arg1;

- (id)removeFile:(id)arg1;

- (void)removeObjectForKey:(id)arg1;

- (id)replaceFile:(id)arg1 data:(id)arg2;

- (id)replaceFile:(id)arg1 path:(id)arg2;

- (unsigned long long)saveToDocument:(id)arg1 removeBackup:(_Bool)arg2 errorHandler:(id)arg3;

- (id)serialize:(void **)arg1 length:(unsigned long long *)arg2;

- (void)setObject:(id)arg1 forKey:(id)arg2;

- (id)setPackage:(_Bool)arg1;

- (id)tmpNameFromPath:(id)arg1;

- (id)tmpNameFromPath:(id)arg1 extension:(id)arg2;

- (id)uniqueKey:(id)arg1;

- (long long)validatePath:(id)arg1 ignore:(id)arg2;

- (unsigned long long)writePath:(id)arg1 docInfo:(id)arg2 errorHandler:(id)arg3 remapContents:(_Bool)arg4 hardLinkPath:(id)arg5;

- (unsigned long long)writePath:(id)arg1 docInfo:(id)arg2 errorHandler:(id)arg3 remapContents:(_Bool)arg4 markBusy:(_Bool)arg5 hardLinkPath:(id)arg6;



@end


