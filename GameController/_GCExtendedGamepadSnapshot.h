/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "_GCExtendedGamepad.h"


#import "_GCSnapshot.h"



@class NSData;



__attribute__((visibility("hidden")))

@interface _GCExtendedGamepadSnapshot : _GCExtendedGamepad <_GCSnapshot>

{

    NSData *_snapshotData;

}



- (void).cxx_destruct;

- (id)init;

- (id)initWithController:(id)arg1 snapshotData:(id)arg2;

- (id)initWithSnapshotData:(id)arg1;

@property(copy) NSData *snapshotData; // @synthesize snapshotData=_snapshotData;



@end


