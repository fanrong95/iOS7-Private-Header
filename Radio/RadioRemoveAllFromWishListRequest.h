/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "RadioRequest.h"


@class NSArray, SSURLConnectionRequest;



@interface RadioRemoveAllFromWishListRequest : RadioRequest

{

    SSURLConnectionRequest *_request;

    NSArray *_trackStoreIDs;

}



- (void).cxx_destruct;

- (id)init;

- (id)initWithTrackStoreIDs:(id)arg1;

- (id)initWithTracks:(id)arg1;

- (void)startWithCompletionHandler:(id)arg1;



@end


