/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface TSCHStyleUtilities : NSObject

{

}



+ (id)chartsNullShadowToDefaultDisabledShadow:(id)arg1;

+ (id)fullyPopulatedStyleFromStyle:(id)arg1 context:(id)arg2;

+ (id)fullyPopulatedStylesFromArray:(id)arg1 context:(id)arg2;

+ (_Bool)hasNoFill:(id)arg1;

+ (_Bool)hasShadow:(id)arg1;

+ (_Bool)isNullFill:(id)arg1;

+ (id)nullFill;

+ (id)nullShadow;

+ (_Bool)p_hasShadow:(id)arg1;

+ (_Bool)propertyMap:(id)arg1 equivalentTo:(id)arg2;

+ (id)shadowToChartsNullShadow:(id)arg1;

+ (void)updateStyleState:(id)arg1 forMutationsPerStyleOwner:(id)arg2;

+ (void)upgradeAlignmentInParagraphStyles:(id)arg1 willModifyBlock:(id)arg2;

+ (_Bool)upgradeShadowProperties:(id)arg1 inMap:(id)arg2;

+ (id)upgradedShadowPropertyForParagraphStyle:(id)arg1;

+ (_Bool)upgradedShadowPropertyFromShadow:(id)arg1 outUpgraded:(id *)arg2;



@end


