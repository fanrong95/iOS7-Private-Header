/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSData, NSDate, NSError, NSString;



@protocol MMCSAsset <NSObject>

@property(retain, nonatomic) NSString *MMCSAccessHeader;

@property(retain, nonatomic) NSDate *MMCSAccessHeaderTimeStamp;

@property(retain, nonatomic) NSError *MMCSError;

@property(retain, nonatomic) NSData *MMCSHash;

@property(nonatomic) unsigned int MMCSItemFlags;

@property(nonatomic) unsigned long long MMCSItemID;

@property(nonatomic) unsigned long long MMCSItemSize;

- (id)MMCSItemType;

- (int)MMCSOpenNewFileDescriptor;

@property(retain, nonatomic) NSString *MMCSReceipt;

@property(retain, nonatomic) NSString *MMCSUTI;

@end


