/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableArray, NSMutableDictionary;



__attribute__((visibility("hidden")))

@interface KNAnimationRegistry : NSObject

{

    NSMutableDictionary *mClassesForTypeAndName;

    NSMutableDictionary *mClassesForTypeAndCategory;

    NSMutableDictionary *mClassesForTypeAndFilter;

    NSMutableDictionary *mClassesForTypeAndObsoleteName;

    NSMutableDictionary *mAlternateEffectIdentifiersForEffectIdentifierAndFilter;

    NSMutableArray *mAnimationInfos;

}



+ (id)animationsInBundle;

+ (id)categoryNameForPluginClass:(Class)arg1;

+ (id)instance;

+ (id)localizedCategoryNameForCategory:(int)arg1;

+ (id)localizedNameForUnsupportedAnimation:(id)arg1;

+ (_Bool)p_dumpRegistry;

- (id)allAnimationInfos;

- (id)animationInfoForEffectIdentifier:(id)arg1 animationType:(int)arg2;

- (id)animationInfoForEffectIdentifier:(id)arg1 animationType:(int)arg2 includeObsoleteNames:(_Bool)arg3;

- (id)animationInfoForEffectIdentifier:(id)arg1 animationType:(int)arg2 includeObsoleteNames:(_Bool)arg3 drawable:(id)arg4;

- (id)animationInfosForAnimationType:(int)arg1 category:(id)arg2;

- (id)animationInfosForAnimationType:(int)arg1 filter:(id)arg2;

- (_Bool)canMapEffectIdentifier:(id)arg1 animationType:(int)arg2 toEffectIdentifier:(id)arg3 includeObsoleteNames:(_Bool)arg4 forDrawable:(id)arg5;

- (void)dealloc;

- (id)distinctCategoriesForType:(int)arg1;

- (id)init;

- (void)p_buildAlternateFilterMap;



@end

