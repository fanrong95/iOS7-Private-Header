/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "ML3ImportItem.h"



@interface HSDAAPML3ImportItem : ML3ImportItem

{

    CDStruct_1568afcd _parsedValues[256];

    long long _parsedValuesPropertyIndex[109];

    long long _parsedValuesPropertyIndex[109];

    CDStruct_1568afcd _parsedValues[256];

}



- (id)deduplicationPredicates;

- (_Bool)hasValueForProperty:(unsigned int)arg1;

- (id)init;

- (_Bool)isValid;

- (_Bool)mediaKindIsSupported:(unsigned int)arg1;

- (unsigned int)mediaType;

- (void)parseItemData:(id)arg1;

- (long long)ratingLevel;

- (id)valueForProperty:(unsigned int)arg1;



@end


