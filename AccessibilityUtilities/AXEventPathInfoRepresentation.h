/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"

#import "NSSecureCoding.h"



@interface AXEventPathInfoRepresentation : NSObject <NSSecureCoding, NSCopying>

{

    unsigned char _pathIndex;

    unsigned char _pathIdentity;

    unsigned char _pathProximity;

    unsigned int _pathWindowContextID;

    float _pathPressure;

    float _pathMajorRadius;

    float _pathMinorRadius;

    float _pathTwist;

    float _pathQuality;

    float _pathDensity;

    unsigned int _pathEventMask;

    void *_pathWindow;

    struct CGPoint _pathLocation;

}



+ (id)representationWithPathInfo:(CDStruct_723b0d29 *)arg1;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (id)description;

- (void)encodeWithCoder:(id)arg1;

- (id)initWithCoder:(id)arg1;

@property(nonatomic) float pathDensity; // @synthesize pathDensity=_pathDensity;

@property(nonatomic) unsigned int pathEventMask; // @synthesize pathEventMask=_pathEventMask;

@property(nonatomic) unsigned char pathIdentity; // @synthesize pathIdentity=_pathIdentity;

@property(nonatomic) unsigned char pathIndex; // @synthesize pathIndex=_pathIndex;

@property(nonatomic) struct CGPoint pathLocation; // @synthesize pathLocation=_pathLocation;

@property(nonatomic) float pathMajorRadius; // @synthesize pathMajorRadius=_pathMajorRadius;

@property(nonatomic) float pathMinorRadius; // @synthesize pathMinorRadius=_pathMinorRadius;

@property(nonatomic) float pathPressure; // @synthesize pathPressure=_pathPressure;

@property(nonatomic) unsigned char pathProximity; // @synthesize pathProximity=_pathProximity;

@property(nonatomic) float pathQuality; // @synthesize pathQuality=_pathQuality;

@property(nonatomic) float pathTwist; // @synthesize pathTwist=_pathTwist;

@property(nonatomic) void *pathWindow; // @synthesize pathWindow=_pathWindow;

@property(nonatomic) unsigned int pathWindowContextID; // @synthesize pathWindowContextID=_pathWindowContextID;

- (void)writeToPathInfo:(CDStruct_723b0d29 *)arg1;



@end


