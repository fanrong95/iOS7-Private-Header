/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray;



@interface ABModelRecord : NSObject

{

    int _recordID;

    struct __CFString *_sortKey;

    long long _highlightIndex;

    _Bool _isGroup;

    NSArray *_namePieces;

}



- (void)dealloc;

- (long long)highlightIndex;

- (id)initWithRecordID:(int)arg1 highlightIndex:(long long)arg2 group:(_Bool)arg3 namePieces:(id)arg4 sortKey:(struct __CFString *)arg5;

- (_Bool)isGroup;

- (id)namePieces;

- (int)recordID;

- (struct __CFString *)sortKey;



@end


