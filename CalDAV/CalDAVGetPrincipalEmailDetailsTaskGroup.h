/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CoreDAVTaskGroup.h"



#import "CoreDAVTaskDelegate.h"



@class CalDAVPrincipalEmailDetailsResult, NSSet, NSString, NSURL;



@interface CalDAVGetPrincipalEmailDetailsTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate>

{

    CalDAVPrincipalEmailDetailsResult *_principalResult;

    NSURL *_principalURL;

}



- (void)_finishWithError:(id)arg1;

- (void)_processPropFind:(id)arg1;

@property(readonly) NSSet *addresses;

- (void)dealloc;

@property(readonly) NSString *displayName;

- (id)initWithAccountInfoProvider:(id)arg1 principalURL:(id)arg2 taskManager:(id)arg3;

@property(retain) CalDAVPrincipalEmailDetailsResult *principalResult; // @synthesize principalResult=_principalResult;

@property(retain) NSURL *principalURL; // @synthesize principalURL=_principalURL;

- (void)startTaskGroup;

- (void)task:(id)arg1 didFinishWithError:(id)arg2;



@end


