/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "EKObject.h"


@class NSNumber, NSString, NSURL;



@interface EKAttachment : EKObject

{

}



@property(readonly, nonatomic) NSURL *URL;

@property(readonly, nonatomic) NSString *UUID;

- (long long)compareFileNames:(id)arg1;

- (id)description;

@property(readonly, nonatomic) NSString *fileFormat;

@property(readonly, nonatomic) NSString *fileName;

@property(readonly, nonatomic) NSNumber *fileSize;

- (id)init;

@property(readonly, nonatomic) _Bool isBinary;

- (_Bool)isEqual:(id)arg1;

@property(readonly, nonatomic) NSURL *localURL;



@end


