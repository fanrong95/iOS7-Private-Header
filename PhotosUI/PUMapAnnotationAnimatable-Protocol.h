/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MKAnnotation.h"

#import "NSCopying.h"



@class NSArray, NSDate, NSMutableSet, NSObject;



@protocol PUMapAnnotationAnimatable <NSObject, MKAnnotation, NSCopying>

- (long long)annotationSortingCompareWithAnnotation:(id)arg1;

- (id)compactDescription;

- (long long)compare:(id)arg1;

- (_Bool)containsAnnotation:(id)arg1;

@property(nonatomic) CDStruct_c3b9c2ee coordinate;

@property(readonly, nonatomic) unsigned long long count;

@property(readonly, nonatomic) NSDate *dateCreated;

@property(readonly, nonatomic) NSObject *itemId;

@property(readonly, nonatomic) NSArray *mapItems;

- (id)newestMaxMapItems:(unsigned long long)arg1;

@property(readonly, nonatomic) CDStruct_c3b9c2ee originalCoordinate;

@property(nonatomic) unsigned long long relativeOrder;

- (void)resetCoordinateToOriginal;

@property(readonly, nonatomic) NSMutableSet *subAnnotations;

@end


