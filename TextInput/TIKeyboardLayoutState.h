/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"

#import "NSSecureCoding.h"



@class NSString;



@interface TIKeyboardLayoutState : NSObject <NSCopying, NSSecureCoding>

{

    _Bool _hasCandidateKey;

    _Bool _hasAccentKey;

    _Bool _canMultitap;

    _Bool _isAlphabeticPlane;

    _Bool _interfaceIdiomIsPad;

    NSString *_inputMode;

}



+ (_Bool)supportsSecureCoding;

@property(nonatomic) _Bool canMultitap; // @synthesize canMultitap=_canMultitap;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (void)encodeWithCoder:(id)arg1;

@property(nonatomic) _Bool hasAccentKey; // @synthesize hasAccentKey=_hasAccentKey;

@property(nonatomic) _Bool hasCandidateKey; // @synthesize hasCandidateKey=_hasCandidateKey;

- (id)initWithCoder:(id)arg1;

@property(copy, nonatomic) NSString *inputMode; // @synthesize inputMode=_inputMode;

@property(nonatomic) _Bool interfaceIdiomIsPad; // @synthesize interfaceIdiomIsPad=_interfaceIdiomIsPad;

@property(nonatomic) _Bool isAlphabeticPlane; // @synthesize isAlphabeticPlane=_isAlphabeticPlane;

- (_Bool)isEqual:(id)arg1;



@end


