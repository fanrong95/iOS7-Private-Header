/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString;



@interface _MFEmailSetEmail : NSObject

{

    unsigned long long _hash;

    NSString *_encodedAddress;

    NSString *_comment;

}



@property(retain, nonatomic) NSString *address;

@property(readonly, nonatomic) NSString *commentedAddress;

- (void)dealloc;

- (id)description;

@property(readonly, nonatomic) unsigned long long hash;

- (id)initWithAddress:(id)arg1;

- (_Bool)isEqualToEmail:(id)arg1;



@end


