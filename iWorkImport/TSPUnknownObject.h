/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSPObject.h"


@class NSArray, NSObject<OS_dispatch_data>, NSString, TSPLazyReferenceArray;



__attribute__((visibility("hidden")))

@interface TSPUnknownObject : TSPObject

{

    shared_ptr_bafc106c _archiveInfo;

    NSObject<OS_dispatch_data> *_messagesData;

    NSString *_packageLocator;

    TSPLazyReferenceArray *_objects;

    NSArray *_datas;

}



- (id).cxx_construct;

- (void).cxx_destruct;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithContext:(id)arg1;

- (id)packageLocator;

- (void)saveToArchiver:(id)arg1;

@property(readonly, nonatomic) NSObject<OS_dispatch_data> *serializedData;

- (void)willModify;

- (void)willModifyForUpgrade;



@end


