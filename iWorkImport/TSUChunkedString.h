/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSMutableString.h"



__attribute__((visibility("hidden")))

@interface TSUChunkedString : NSMutableString

{

    unsigned long long _length;

    struct vector<boost::shared_ptr<TSUStringChunk>, std::__1::allocator<boost::shared_ptr<TSUStringChunk>>> _chunks;

    unsigned long long _chunkLength;

}



- (id).cxx_construct;

- (void).cxx_destruct;

- (void)appendString:(id)arg1;

- (unsigned short)characterAtIndex:(unsigned long long)arg1;

- (void)compact;

- (void)dealloc;

- (void)deleteCharactersInRange:(struct _NSRange)arg1;

- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;

- (id)init;

- (id)initWithChunkLength:(unsigned long long)arg1;

- (void)insertString:(id)arg1 atIndex:(unsigned long long)arg2;

- (unsigned long long)length;

- (void)p_appendRange:(struct _NSRange)arg1 fromString:(id)arg2;

- (void)p_compactChunksInRange:(struct _NSRange)arg1;

- (void)p_deleteCharactersInRange:(struct _NSRange)arg1 chunkIndex:(unsigned long long)arg2;

- (void)p_insertCharactersInRange:(struct _NSRange)arg1 fromString:(id)arg2 atIndex:(unsigned long long)arg3 chunkIndex:(unsigned long long)arg4;

- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;



@end


