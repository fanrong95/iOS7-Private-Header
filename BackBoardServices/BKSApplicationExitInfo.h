/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "BKSXPCCoding.h"

#import "NSCopying.h"



@interface BKSApplicationExitInfo : NSObject <NSCopying, BKSXPCCoding>

{

    _Bool _wasReceiver;

    int _terminationReason;

    long long _status;

}



- (id)copyWithZone:(struct _NSZone *)arg1;

- (id)description;

- (void)encodeWithXPCDictionary:(id)arg1;

- (id)initWithXPCDictionary:(id)arg1;

@property(nonatomic) long long status; // @synthesize status=_status;

@property(nonatomic) int terminationReason; // @synthesize terminationReason=_terminationReason;

@property(nonatomic) _Bool wasReceiver; // @synthesize wasReceiver=_wasReceiver;



@end


