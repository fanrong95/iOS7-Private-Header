/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "AVVideoCompositionInstruction.h"

#import "NSCopying.h"

#import "NSMutableCopying.h"

#import "NSSecureCoding.h"



@class AVVideoCompositionInstructionInternal, NSArray;



@interface AVVideoCompositionInstruction : NSObject <NSSecureCoding, NSCopying, NSMutableCopying, AVVideoCompositionInstruction>

{

    AVVideoCompositionInstructionInternal *_instruction;

}



+ (void)initialize;

+ (_Bool)supportsSecureCoding;

- (void)_setValuesFromDictionary:(id)arg1;

@property(retain, nonatomic) struct CGColor *backgroundColor;

@property(readonly, nonatomic) _Bool containsTweening;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (id)dictionaryRepresentation;

@property(readonly, nonatomic) _Bool enablePostProcessing;

- (void)encodeWithCoder:(id)arg1;

- (void)finalize;

- (id)init;

- (id)initWithCoder:(id)arg1;

- (_Bool)isEqual:(id)arg1;

@property(readonly, nonatomic) NSArray *layerInstructions;

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@property(readonly, nonatomic) int passthroughTrackID;

@property(readonly, nonatomic) NSArray *requiredSourceTrackIDs;

- (void)setEnablePostProcessing:(_Bool)arg1;

- (void)setLayerInstructions:(id)arg1;

- (void)setTimeRange:(CDStruct_e83c9415)arg1;

@property(readonly, nonatomic) CDStruct_e83c9415 timeRange;



@end


