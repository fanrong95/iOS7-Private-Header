/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"

#import "NSMutableCopying.h"



@class AVAudioMixInternal, NSArray;



@interface AVAudioMix : NSObject <NSCopying, NSMutableCopying>

{

    AVAudioMixInternal *_audioMix;

}



- (id)_audioMixInputParametersForTrackID:(int)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (void)finalize;

- (unsigned long long)hash;

- (id)init;

@property(readonly, nonatomic) NSArray *inputParameters;

- (_Bool)isEqual:(id)arg1;

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

- (void)setInputParameters:(id)arg1;



@end


