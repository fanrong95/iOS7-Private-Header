/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class EDReference, EDTable;



__attribute__((visibility("hidden")))

@interface EFTableData : NSObject

{

    struct EFRefTok mRefTok;

    EDTable *mTable;

    EDReference *mReference;

    int mMakeups;

}



- (id).cxx_construct;

- (void)dealloc;

- (id)initWith:(struct EFStrTok *)arg1;

- (void)makeup:(id)arg1 with:(int)arg2;

- (unsigned short *)ptgData;

- (const struct EFRefTok *)refTok;

- (id)reference;

- (id)table;



@end


