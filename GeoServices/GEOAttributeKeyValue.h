/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBCodable.h"



#import "NSCopying.h"



@class NSString;



@interface GEOAttributeKeyValue : PBCodable <NSCopying>

{

    NSString *_attributeKey;

    NSString *_attributeValue;

}



@property(retain, nonatomic) NSString *attributeKey; // @synthesize attributeKey=_attributeKey;

@property(retain, nonatomic) NSString *attributeValue; // @synthesize attributeValue=_attributeValue;

- (void)copyTo:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (id)dictionaryRepresentation;

- (unsigned long long)hash;

- (_Bool)isEqual:(id)arg1;

- (_Bool)readFrom:(id)arg1;

- (void)writeTo:(id)arg1;



@end


