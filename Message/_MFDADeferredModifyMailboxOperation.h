/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MFOfflineCacheOperation.h"


#import "MFDADeferredFolderChangeOperation.h"



@class NSString;



@interface _MFDADeferredModifyMailboxOperation : MFOfflineCacheOperation <MFDADeferredFolderChangeOperation>

{

    NSString *_folderID;

    NSString *_newParentFolderID;

    NSString *_newDisplayName;

}



- (void)applyToFolderMap:(id)arg1;

- (void)dealloc;

- (id)description;

- (void)encodeWithCoder:(id)arg1;

- (id)folderChangeResult;

- (id)initWithCoder:(id)arg1;

- (id)initWithFolderID:(id)arg1 newParentFolderID:(id)arg2 newDisplayName:(id)arg3;

- (_Bool)performWithAccount:(id)arg1 offlineCache:(id)arg2;



@end


