/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSOperation.h"



@class MFContactsSearchManager, NSNumber, NSOrderedSet, NSString;



@interface MFContactsSearchOperation : NSOperation

{

    void *_addressBook;

    MFContactsSearchManager *_owner;

    NSNumber *_taskID;

    NSString *_text;

    NSOrderedSet *_properties;

    NSString *_sendingAddress;

}



+ (id)operationWithAddressBook:(void *)arg1 owner:(id)arg2 text:(id)arg3 taskID:(id)arg4 properties:(id)arg5;

@property(readonly, nonatomic) void *addressBook; // @synthesize addressBook=_addressBook;

- (void)dealloc;

@property(readonly, nonatomic) MFContactsSearchManager *owner; // @synthesize owner=_owner;

@property(readonly, nonatomic) NSOrderedSet *properties; // @synthesize properties=_properties;

@property(readonly, nonatomic) NSString *sendingAddress; // @synthesize sendingAddress=_sendingAddress;

@property(readonly, nonatomic) NSNumber *taskID; // @synthesize taskID=_taskID;

@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;

- (int)type;



@end


