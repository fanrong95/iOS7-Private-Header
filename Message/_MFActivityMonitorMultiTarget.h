/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableSet;



@interface _MFActivityMonitorMultiTarget : NSObject

{

    id _primaryTarget;

    NSMutableSet *_allTargets;

}



- (_Bool)addActivityTarget:(id)arg1;

- (id)allTargets;

- (void)dealloc;

- (id)displayName;

- (id)primaryTarget;

- (_Bool)removeActivityTarget:(id)arg1;

- (void)setPrimaryTarget:(id)arg1;



@end

