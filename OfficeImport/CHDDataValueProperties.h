/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "EDKeyedObject.h"



@class CHDDataLabel, CHDMarker, OADGraphicProperties;



__attribute__((visibility("hidden")))

@interface CHDDataValueProperties : NSObject <EDKeyedObject>

{

    CHDDataLabel *mDataLabel;

    CHDMarker *mMarker;

    unsigned long long mDataValueIndex;

    OADGraphicProperties *mGraphicProperties;

}



+ (id)dataValueProperties;

- (id)dataLabel;

- (unsigned long long)dataValueIndex;

- (void)dealloc;

- (id)graphicProperties;

- (id)init;

- (long long)key;

- (id)marker;

- (void)setDataLabel:(id)arg1;

- (void)setDataValueIndex:(unsigned long long)arg1;

- (void)setGraphicProperties:(id)arg1;

- (void)setMarker:(id)arg1;

- (id)shallowCopyWithIndex:(unsigned long long)arg1;



@end


