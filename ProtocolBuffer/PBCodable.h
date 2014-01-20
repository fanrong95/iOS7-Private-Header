/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSSecureCoding.h"



@class NSData;



@interface PBCodable : NSObject <NSSecureCoding>

{

}



+ (_Bool)supportsSecureCoding;

@property(readonly, nonatomic) NSData *data;

- (id)dictionaryRepresentation;

- (void)encodeWithCoder:(id)arg1;

- (id)formattedText;

- (id)init;

- (id)initWithCoder:(id)arg1;

- (id)initWithData:(id)arg1;

- (_Bool)readFrom:(id)arg1;

- (void)writeTo:(id)arg1;



@end

