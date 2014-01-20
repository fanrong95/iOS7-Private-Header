/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSManagedObject.h"


@class NSNumber, NSString, PFUbiquityPeer;



__attribute__((visibility("hidden")))

@interface PFUbiquityRemotePeerState : NSManagedObject

{

}



+ (id)remotePeerStatesMatchingStoreName:(id)arg1 andPeerID:(id)arg2 inManagedObjectContext:(id)arg3;

+ (id)remotePeerStatesMatchingStoreName:(id)arg1 inManagedObjectContext:(id)arg2;

- (id)initWithStoreName:(id)arg1 andRemotePeerID:(id)arg2 insertIntoManagedObjectContext:(id)arg3;



// Remaining properties

@property(retain, nonatomic) PFUbiquityPeer *peer; // @dynamic peer;

@property(retain, nonatomic) NSString *peerID; // @dynamic peerID;

@property(retain, nonatomic) NSString *storeName; // @dynamic storeName;

@property(retain, nonatomic) NSNumber *transactionNumber; // @dynamic transactionNumber;



@end


