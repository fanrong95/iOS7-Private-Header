/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBCodable.h"



#import "NSCopying.h"



@class NSString;



@interface GEOGeoServiceTag : PBCodable <NSCopying>

{

    int _serviceType;

    NSString *_tag;

}



- (void)copyTo:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (id)dictionaryRepresentation;

- (unsigned long long)hash;

- (_Bool)isEqual:(id)arg1;

- (_Bool)readFrom:(id)arg1;

@property(nonatomic) int serviceType; // @synthesize serviceType=_serviceType;

@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;

- (void)writeTo:(id)arg1;



@end


