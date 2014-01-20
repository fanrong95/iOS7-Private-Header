/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBCodable.h"



#import "NSCopying.h"



@class NSMutableArray;



@interface GEOPlaceSearchFeedbackCollection : PBCodable <NSCopying>

{

    CDStruct_612aec5b _sessionID;

    unsigned long long _businessID;

    long long _placeID;

    NSMutableArray *_actionCaptures;

    int _localSearchProviderID;

    struct {

        unsigned int sessionID:1;

        unsigned int businessID:1;

        unsigned int placeID:1;

        unsigned int localSearchProviderID:1;

    } _has;

}



- (id)actionCaptureAtIndex:(unsigned long long)arg1;

@property(retain, nonatomic) NSMutableArray *actionCaptures; // @synthesize actionCaptures=_actionCaptures;

- (unsigned long long)actionCapturesCount;

- (void)addActionCapture:(id)arg1;

@property(nonatomic) unsigned long long businessID; // @synthesize businessID=_businessID;

- (void)clearActionCaptures;

- (void)copyTo:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (id)dictionaryRepresentation;

@property(nonatomic) _Bool hasBusinessID;

@property(nonatomic) _Bool hasLocalSearchProviderID;

@property(nonatomic) _Bool hasPlaceID;

@property(nonatomic) _Bool hasSessionID;

- (unsigned long long)hash;

- (_Bool)isEqual:(id)arg1;

@property(nonatomic) int localSearchProviderID; // @synthesize localSearchProviderID=_localSearchProviderID;

@property(nonatomic) long long placeID; // @synthesize placeID=_placeID;

- (_Bool)readFrom:(id)arg1;

@property(nonatomic) CDStruct_612aec5b sessionID; // @synthesize sessionID=_sessionID;

- (void)writeTo:(id)arg1;



@end


