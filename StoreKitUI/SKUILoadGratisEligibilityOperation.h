/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSOperation.h"



@class NSArray, NSObject<OS_dispatch_queue>, SKUIClientContext;



@interface SKUILoadGratisEligibilityOperation : NSOperation

{

    NSArray *_bundleIDs;

    SKUIClientContext *_clientContext;

    NSObject<OS_dispatch_queue> *_dispatchQueue;

    id _outputBlock;

}



- (void).cxx_destruct;

- (id)_bodyData;

- (id)init;

- (id)initWithBundleIdentifiers:(id)arg1 clientContext:(id)arg2;

- (void)main;

@property(copy) id outputBlock;



@end


