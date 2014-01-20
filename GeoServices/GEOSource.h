/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBCodable.h"



#import "NSCopying.h"



@class NSString;



@interface GEOSource : PBCodable <NSCopying>

{

    NSString *_sourceId;

    NSString *_sourceName;

    NSString *_sourceVersion;

}



- (void)copyTo:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (id)dictionaryRepresentation;

@property(readonly, nonatomic) _Bool hasSourceVersion;

- (unsigned long long)hash;

- (_Bool)isEqual:(id)arg1;

- (_Bool)readFrom:(id)arg1;

@property(retain, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;

@property(retain, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;

@property(retain, nonatomic) NSString *sourceVersion; // @synthesize sourceVersion=_sourceVersion;

- (void)writeTo:(id)arg1;



@end


