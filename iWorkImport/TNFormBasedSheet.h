/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TNSheet.h"


@class NSString, TSTTableInfo;



__attribute__((visibility("hidden")))

@interface TNFormBasedSheet : TNSheet

{

    struct __CFUUID *mTableID;

    TSTTableInfo *mTableInfo;

    NSString *mImportedTargetName;

}



- (void)clearTableInfoCache;

- (double)contentScale;

- (void)dealloc;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithContext:(id)arg1 importedTargetName:(id)arg2;

- (_Bool)isForm;

- (void)resolveImportedTargetNameInDocumentRoot:(id)arg1;

- (void)saveToArchiver:(id)arg1;

@property struct __CFUUID *tableID;

@property(readonly) TSTTableInfo *tableInfo;



@end


