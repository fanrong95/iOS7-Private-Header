/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCoding.h"

#import "NSCopying.h"



__attribute__((visibility("hidden")))

@interface TSCELegacyGlobalID : NSObject <NSCopying, NSCoding>

{

    unsigned char mBytes[16];

}



- (id)copyWithZone:(struct _NSZone *)arg1;

- (id)description;

- (void)encodeWithCoder:(id)arg1;

- (unsigned int)hash;

- (id)init;

- (id)initWithCoder:(id)arg1;

- (id)initWithString:(id)arg1;

- (_Bool)isEqual:(id)arg1;

- (id)newStringForTableReferencesInNativeSyntax;

- (id)newStringValue;

- (id)stringForTableReferencesInNativeSyntax;

- (id)stringValue;



@end


