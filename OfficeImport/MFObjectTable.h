/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableArray;



__attribute__((visibility("hidden")))

@interface MFObjectTable : NSObject

{

    NSMutableArray *m_objects;

}



- (void)clear;

- (void)dealloc;

- (int)deleteObject:(unsigned int)arg1;

- (id)getObject:(unsigned int)arg1;

- (id)init;

- (unsigned int)insertPos;

- (int)putObject:(id)arg1:(unsigned int)arg2;

- (int)selectInto:(int)arg1:(id)arg2;

- (int)size;



@end


