/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCoding.h"

#import "NSSecureCoding.h"



@class GKAchievementInternal, NSString, UIImage;



@interface GKAchievementDescription : NSObject <NSCoding, NSSecureCoding>

{

    GKAchievementInternal *_internal;

    UIImage *_image;

}



+ (id)instanceMethodSignatureForSelector:(SEL)arg1;

+ (_Bool)instancesRespondToSelector:(SEL)arg1;

+ (void)loadAchievementDescriptionsForGame:(id)arg1 withCompletionHandler:(id)arg2;

+ (void)loadAchievementDescriptionsWithCompletionHandler:(id)arg1;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;

- (id)description;

- (void)encodeWithCoder:(id)arg1;

- (id)forwardingTargetForSelector:(SEL)arg1;

- (unsigned long long)hash;

@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;

- (id)init;

- (id)initWithCoder:(id)arg1;

- (id)initWithInternalRepresentation:(id)arg1;

@property(retain) GKAchievementInternal *internal; // @synthesize internal=_internal;

- (_Bool)isEqual:(id)arg1;

- (id)methodSignatureForSelector:(SEL)arg1;

- (_Bool)respondsToSelector:(SEL)arg1;

- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;

- (id)valueForUndefinedKey:(id)arg1;



// Remaining properties

@property(readonly, nonatomic) NSString *achievedDescription; // @dynamic achievedDescription;

@property(readonly, nonatomic) NSString *groupIdentifier; // @dynamic groupIdentifier;

@property(readonly, nonatomic, getter=isHidden) _Bool hidden; // @dynamic hidden;

@property(readonly, nonatomic) NSString *identifier; // @dynamic identifier;

@property(readonly, nonatomic) long long maximumPoints; // @dynamic maximumPoints;

@property(readonly, nonatomic, getter=isReplayable) _Bool replayable; // @dynamic replayable;

@property(readonly, nonatomic) NSString *title; // @dynamic title;

@property(readonly, nonatomic) NSString *unachievedDescription; // @dynamic unachievedDescription;



@end


