/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCoding.h"

#import "NSCopying.h"



@class NSCountedSet, NSMutableDictionary;



@interface BBAttachments : NSObject <NSCopying, NSCoding>

{

    long long primaryType;

    NSCountedSet *_additionalAttachments;

    NSMutableDictionary *_clientSideComposedImageInfos;

}



- (void)addAttachmentOfType:(long long)arg1;

@property(retain, nonatomic) NSCountedSet *additionalAttachments; // @synthesize additionalAttachments=_additionalAttachments;

@property(retain, nonatomic) NSMutableDictionary *clientSideComposedImageInfos; // @synthesize clientSideComposedImageInfos=_clientSideComposedImageInfos;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (void)encodeWithCoder:(id)arg1;

- (id)initWithCoder:(id)arg1;

- (_Bool)isEqualToAttachments:(id)arg1;

- (unsigned long long)numberOfAdditionalAttachments;

- (unsigned long long)numberOfAdditionalAttachmentsOfType:(long long)arg1;

@property(nonatomic) long long primaryType; // @synthesize primaryType;



@end


