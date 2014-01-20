/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



__attribute__((visibility("hidden")))

@interface TSDTextureContext : NSObject <NSCopying>

{

    id <TSDAnimationSession> _session;

    unsigned int _isMagicMove:1;

    unsigned int _shouldAddFinal:1;

    unsigned int _shouldAddReversedFinal:1;

    unsigned int _shouldAddMagicMoveObjectOnly:1;

    unsigned int _shouldNotAddContainedReps:1;

    unsigned int _shouldNotAddShapeAttributes:1;

    unsigned int _shouldNotAddText:1;

    unsigned int _shouldNotCacheTexture:1;

    unsigned int _shouldSeparateReflection:1;

    unsigned int _shouldSeparateShadow:1;

    unsigned int _shouldSeparateStroke:1;

    unsigned int _shouldSeparateText:1;

    unsigned int _shouldDistortToFit:1;

    unsigned int _shouldForceTextureGeneration:1;

    _Bool _shouldAddNoShapeAttributes;

}



+ (id)context;

+ (id)contextWithSession:(id)arg1;

+ (id)contextWithTextureContext:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (id)description;

- (unsigned long long)hash;

- (_Bool)isEqual:(id)arg1;

@property(nonatomic) _Bool isMagicMove; // @synthesize isMagicMove=_isMagicMove;

- (void)reset;

@property(nonatomic) id <TSDAnimationSession> session; // @synthesize session=_session;

@property(nonatomic) _Bool shouldAddFinal; // @synthesize shouldAddFinal=_shouldAddFinal;

@property(nonatomic) _Bool shouldAddMagicMoveObjectOnly; // @synthesize shouldAddMagicMoveObjectOnly=_shouldAddMagicMoveObjectOnly;

@property(nonatomic) _Bool shouldAddReversedFinal; // @synthesize shouldAddReversedFinal=_shouldAddReversedFinal;

@property(nonatomic) _Bool shouldDistortToFit; // @synthesize shouldDistortToFit=_shouldDistortToFit;

@property(nonatomic) _Bool shouldForceTextureGeneration; // @synthesize shouldForceTextureGeneration=_shouldForceTextureGeneration;

@property(nonatomic) _Bool shouldNotAddContainedReps; // @synthesize shouldNotAddContainedReps=_shouldNotAddContainedReps;

@property(nonatomic) _Bool shouldNotAddShapeAttributes; // @synthesize shouldNotAddShapeAttributes=_shouldAddNoShapeAttributes;

@property(nonatomic) _Bool shouldNotAddText; // @synthesize shouldNotAddText=_shouldNotAddText;

@property(nonatomic) _Bool shouldNotCacheTexture; // @synthesize shouldNotCacheTexture=_shouldNotCacheTexture;

@property(nonatomic) _Bool shouldSeparateReflection; // @synthesize shouldSeparateReflection=_shouldSeparateReflection;

@property(nonatomic) _Bool shouldSeparateShadow; // @synthesize shouldSeparateShadow=_shouldSeparateShadow;

@property(nonatomic) _Bool shouldSeparateStroke; // @synthesize shouldSeparateStroke=_shouldSeparateStroke;

@property(nonatomic) _Bool shouldSeparateText; // @synthesize shouldSeparateText=_shouldSeparateText;



@end


