/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CoreDAVTaskGroup.h"



@class NSMutableSet;



@interface CalDAVOperation : CoreDAVTaskGroup

{

    id <CalDAVPrincipal> _principal;

    _Bool _isCancellingTaskGroups;

    NSMutableSet *_outstandingTaskGroups;

}



- (void)_tearDownAllTaskGroupsWithBlock:(id)arg1;

- (void)bailWithError:(id)arg1;

- (void)cancelTaskGroup;

- (void)dealloc;

- (id)init;

- (id)initWithPrincipal:(id)arg1;

@property(readonly) NSMutableSet *outstandingTaskGroups; // @synthesize outstandingTaskGroups=_outstandingTaskGroups;

@property(readonly) id <CalDAVPrincipal> principal; // @synthesize principal=_principal;



@end

