/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "EKPersistentObject.h"


#import "NSCopying.h"



@class NSDictionary, NSNumber, NSString, NSURL;



@interface EKPersistentAttachment : EKPersistentObject <NSCopying>

{

}



+ (id)relations;

@property(copy, nonatomic) NSURL *URL;

@property(readonly, nonatomic) NSString *UUID;

@property(copy, nonatomic) NSDictionary *XProperties;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (id)description;

- (int)entityType;

@property(copy, nonatomic) NSString *fileFormat;

@property(copy, nonatomic) NSString *fileName;

@property(copy, nonatomic) NSNumber *fileSize;

@property(readonly, nonatomic) _Bool isBinary;

@property(copy, nonatomic) NSURL *localURL;

- (void)setIsBinary:(_Bool)arg1;



@end


