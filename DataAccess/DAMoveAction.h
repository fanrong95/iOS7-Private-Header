/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "DAAction.h"


@class NSString;



@interface DAMoveAction : DAAction

{

    NSString *_sourceContainerId;

    NSString *_sourceServerId;

    NSString *_destinationContainerId;

}



- (void)dealloc;

@property(readonly) NSString *destinationContainerId; // @synthesize destinationContainerId=_destinationContainerId;

- (void)encodeWithCoder:(id)arg1;

- (id)initWithCoder:(id)arg1;

- (id)initWithItemChangeType:(int)arg1 changedItem:(id)arg2 sourceContainerId:(id)arg3 sourceServerId:(id)arg4 destinationContainerId:(id)arg5;

@property(readonly) NSString *sourceContainerId; // @synthesize sourceContainerId=_sourceContainerId;

@property(readonly) NSString *sourceServerId; // @synthesize sourceServerId=_sourceServerId;



@end


