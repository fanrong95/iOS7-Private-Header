/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString;



@interface CTCall : NSObject

{

    NSString *_callState;

    NSString *_callID;

}



+ (id)callForCTCallRef:(struct __CTCall *)arg1;

@property(copy, nonatomic) NSString *callID; // @synthesize callID=_callID;

@property(copy, nonatomic) NSString *callState; // @synthesize callState=_callState;

- (void)dealloc;

- (id)description;

- (unsigned long long)hash;

- (_Bool)isEqual:(id)arg1;



@end


