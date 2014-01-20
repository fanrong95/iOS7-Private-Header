/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class AVPlayerMediaSelectionCriteriaInternal, NSArray;



@interface AVPlayerMediaSelectionCriteria : NSObject

{

    AVPlayerMediaSelectionCriteriaInternal *_criteria;

}



- (void)dealloc;

- (id)description;

- (id)figDictionary;

- (id)init;

- (id)initWithFigDictionary:(id)arg1;

- (id)initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2;

- (id)initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2 preferredMediaSubTypes:(id)arg3 precludedMediaSubTypes:(id)arg4;

- (id)precludedMediaSubTypes;

@property(readonly, nonatomic) NSArray *preferredLanguages;

@property(readonly, nonatomic) NSArray *preferredMediaCharacteristics;

- (id)preferredMediaSubTypes;



@end


