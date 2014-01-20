/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBCodable.h"



@class GEOVCharacteristics, NSData, NSMutableArray;



__attribute__((visibility("hidden")))

@interface GEOVFeature : PBCodable

{

    CDStruct_95bda58d _extrusionHeights;

    CDStruct_95bda58d _labelOffsets;

    CDStruct_95bda58d _shieldLabelOffsets;

    CDStruct_95bda58d _shieldLabelTypes;

    unsigned long long _businessID;

    long long _uID;

    unsigned int _centerlineCount;

    unsigned int _centerlineStart;

    GEOVCharacteristics *_characteristics;

    float _endLaneWidth;

    float _endOffset;

    float _endRoadOffset;

    unsigned int _entryPointMask;

    int _formOfWay;

    float _minzoomRank;

    NSData *_oBSOLETECenterlines;

    NSData *_oBSOLETEShieldLabelPositions;

    NSData *_oBSOLETEVertexLabelPositions;

    int _placeType;

    NSData *_pointLabelPosition;

    int _roadClass;

    int _sectionCount;

    int _sectionStart;

    int _speedLimit;

    float _startLaneWidth;

    float _startOffset;

    float _startRoadOffset;

    NSMutableArray *_styleAttributes;

    unsigned int _styleGroup;

    int _travelDirection;

    int _type;

    _Bool _polyIsConvex;

    struct {

        unsigned int businessID:1;

        unsigned int uID:1;

        unsigned int centerlineCount:1;

        unsigned int centerlineStart:1;

        unsigned int endLaneWidth:1;

        unsigned int endOffset:1;

        unsigned int endRoadOffset:1;

        unsigned int entryPointMask:1;

        unsigned int formOfWay:1;

        unsigned int minzoomRank:1;

        unsigned int placeType:1;

        unsigned int roadClass:1;

        unsigned int sectionCount:1;

        unsigned int sectionStart:1;

        unsigned int speedLimit:1;

        unsigned int startLaneWidth:1;

        unsigned int startOffset:1;

        unsigned int startRoadOffset:1;

        unsigned int styleGroup:1;

        unsigned int travelDirection:1;

        unsigned int type:1;

        unsigned int polyIsConvex:1;

    } _has;

}



- (void)addExtrusionHeight:(int)arg1;

- (void)addLabelOffset:(int)arg1;

- (void)addShieldLabelOffset:(int)arg1;

- (void)addShieldLabelType:(int)arg1;

- (void)addStyleAttributes:(id)arg1;

@property(nonatomic) unsigned long long businessID; // @synthesize businessID=_businessID;

@property(nonatomic) unsigned int centerlineCount; // @synthesize centerlineCount=_centerlineCount;

@property(nonatomic) unsigned int centerlineStart; // @synthesize centerlineStart=_centerlineStart;

@property(retain, nonatomic) GEOVCharacteristics *characteristics; // @synthesize characteristics=_characteristics;

- (void)clearExtrusionHeights;

- (void)clearLabelOffsets;

- (void)clearShieldLabelOffsets;

- (void)clearShieldLabelTypes;

- (void)clearStyleAttributes;

- (void)copyTo:(id)arg1;

- (void)dealloc;

- (id)description;

- (id)dictionaryRepresentation;

@property(nonatomic) float endLaneWidth; // @synthesize endLaneWidth=_endLaneWidth;

@property(nonatomic) float endOffset; // @synthesize endOffset=_endOffset;

@property(nonatomic) float endRoadOffset; // @synthesize endRoadOffset=_endRoadOffset;

@property(nonatomic) unsigned int entryPointMask; // @synthesize entryPointMask=_entryPointMask;

- (int)extrusionHeightAtIndex:(unsigned long long)arg1;

@property(readonly, nonatomic) int *extrusionHeights;

@property(readonly, nonatomic) unsigned long long extrusionHeightsCount;

@property(nonatomic) int formOfWay; // @synthesize formOfWay=_formOfWay;

@property(nonatomic) _Bool hasBusinessID;

@property(nonatomic) _Bool hasCenterlineCount;

@property(nonatomic) _Bool hasCenterlineStart;

@property(readonly, nonatomic) _Bool hasCharacteristics;

@property(nonatomic) _Bool hasEndLaneWidth;

@property(nonatomic) _Bool hasEndOffset;

@property(nonatomic) _Bool hasEndRoadOffset;

@property(nonatomic) _Bool hasEntryPointMask;

@property(nonatomic) _Bool hasFormOfWay;

@property(nonatomic) _Bool hasMinzoomRank;

@property(readonly, nonatomic) _Bool hasOBSOLETECenterlines;

@property(readonly, nonatomic) _Bool hasOBSOLETEShieldLabelPositions;

@property(readonly, nonatomic) _Bool hasOBSOLETEVertexLabelPositions;

@property(nonatomic) _Bool hasPlaceType;

@property(readonly, nonatomic) _Bool hasPointLabelPosition;

@property(nonatomic) _Bool hasPolyIsConvex;

@property(nonatomic) _Bool hasRoadClass;

@property(nonatomic) _Bool hasSectionCount;

@property(nonatomic) _Bool hasSectionStart;

@property(nonatomic) _Bool hasSpeedLimit;

@property(nonatomic) _Bool hasStartLaneWidth;

@property(nonatomic) _Bool hasStartOffset;

@property(nonatomic) _Bool hasStartRoadOffset;

@property(nonatomic) _Bool hasStyleGroup;

@property(nonatomic) _Bool hasTravelDirection;

@property(nonatomic) _Bool hasType;

@property(nonatomic) _Bool hasUID;

- (unsigned long long)hash;

- (_Bool)isEqual:(id)arg1;

- (int)labelOffsetAtIndex:(unsigned long long)arg1;

@property(readonly, nonatomic) int *labelOffsets;

@property(readonly, nonatomic) unsigned long long labelOffsetsCount;

@property(nonatomic) float minzoomRank; // @synthesize minzoomRank=_minzoomRank;

@property(retain, nonatomic) NSData *oBSOLETECenterlines; // @synthesize oBSOLETECenterlines=_oBSOLETECenterlines;

@property(retain, nonatomic) NSData *oBSOLETEShieldLabelPositions; // @synthesize oBSOLETEShieldLabelPositions=_oBSOLETEShieldLabelPositions;

@property(retain, nonatomic) NSData *oBSOLETEVertexLabelPositions; // @synthesize oBSOLETEVertexLabelPositions=_oBSOLETEVertexLabelPositions;

@property(nonatomic) int placeType; // @synthesize placeType=_placeType;

@property(retain, nonatomic) NSData *pointLabelPosition; // @synthesize pointLabelPosition=_pointLabelPosition;

@property(nonatomic) _Bool polyIsConvex; // @synthesize polyIsConvex=_polyIsConvex;

- (_Bool)readFrom:(id)arg1;

@property(nonatomic) int roadClass; // @synthesize roadClass=_roadClass;

@property(nonatomic) int sectionCount; // @synthesize sectionCount=_sectionCount;

@property(nonatomic) int sectionStart; // @synthesize sectionStart=_sectionStart;

- (void)setExtrusionHeights:(int *)arg1 count:(unsigned long long)arg2;

- (void)setLabelOffsets:(int *)arg1 count:(unsigned long long)arg2;

- (void)setShieldLabelOffsets:(int *)arg1 count:(unsigned long long)arg2;

- (void)setShieldLabelTypes:(int *)arg1 count:(unsigned long long)arg2;

@property(nonatomic) int speedLimit; // @synthesize speedLimit=_speedLimit;

@property(nonatomic) float startLaneWidth; // @synthesize startLaneWidth=_startLaneWidth;

@property(nonatomic) float startOffset; // @synthesize startOffset=_startOffset;

@property(nonatomic) float startRoadOffset; // @synthesize startRoadOffset=_startRoadOffset;

@property(retain, nonatomic) NSMutableArray *styleAttributes; // @synthesize styleAttributes=_styleAttributes;

@property(nonatomic) unsigned int styleGroup; // @synthesize styleGroup=_styleGroup;

@property(nonatomic) int travelDirection; // @synthesize travelDirection=_travelDirection;

@property(nonatomic) int type; // @synthesize type=_type;

@property(nonatomic) long long uID; // @synthesize uID=_uID;

- (int)shieldLabelOffsetAtIndex:(unsigned long long)arg1;

@property(readonly, nonatomic) int *shieldLabelOffsets;

@property(readonly, nonatomic) unsigned long long shieldLabelOffsetsCount;

- (int)shieldLabelTypeAtIndex:(unsigned long long)arg1;

@property(readonly, nonatomic) int *shieldLabelTypes;

@property(readonly, nonatomic) unsigned long long shieldLabelTypesCount;

- (id)styleAttributesAtIndex:(unsigned long long)arg1;

- (unsigned long long)styleAttributesCount;

- (void)writeTo:(id)arg1;



@end


