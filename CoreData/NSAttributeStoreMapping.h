/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSPropertyStoreMapping.h"


__attribute__((visibility("hidden")))

@interface NSAttributeStoreMapping : NSPropertyStoreMapping

{

    int _externalType;

    unsigned int _externalPrecision;

    int _externalScale;

}



- (id)attribute;

- (id)columnDefinition;

- (unsigned int)externalPrecision;

- (int)externalScale;

- (int)externalType;

- (id)initWithProperty:(id)arg1;

- (_Bool)isEqual:(id)arg1;

- (void)setExternalPrecision:(unsigned int)arg1;

- (void)setExternalScale:(int)arg1;

- (void)setExternalType:(int)arg1;

- (id)sqlType;



@end


