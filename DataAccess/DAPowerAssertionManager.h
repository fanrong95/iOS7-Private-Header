/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSCountedSet, NSMutableDictionary, NSMutableSet;



@interface DAPowerAssertionManager : NSObject

{

    NSCountedSet *_contexts;

    NSMutableDictionary *_groupIdentifierToContexts;

    struct __CFDictionary *_contextToGroupIdentifier;

    NSMutableSet *_heldAsideGroupIdentifiers;

    NSCountedSet *_heldAsideContexts;

    struct __CFDictionary *_contextToPowerAssertionRef;

}



+ (id)sharedPowerAssertionManager;

+ (void)vendDaemons:(Class)arg1;

- (void)_releaseAssertionForContext:(id)arg1;

- (void)_retainAssertionForContext:(id)arg1;

- (void)dealloc;

- (void)dropPowerAssertionsForGroupIdentifier:(id)arg1;

- (id)init;

- (unsigned long long)powerAssertionRetainCount:(id)arg1;

- (void)reattainPowerAssertionsForGroupIdentifier:(id)arg1;

- (void)releasePowerAssertion:(id)arg1;

- (void)retainPowerAssertion:(id)arg1 withGroupIdentifier:(id)arg2;

- (id)stateString;



@end


