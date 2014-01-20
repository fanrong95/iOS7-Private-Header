/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSCache;



@interface ABMemberNameViewCache : NSObject

{

    NSCache *_styleProvidersCache;

}



+ (id)sharedInstance;

- (id)_cacheForStyleProvider:(id)arg1;

- (id)boldTextAttributesForStyleProvider:(id)arg1;

- (void)contentSizeCategoryDidChange:(id)arg1;

- (void)dealloc;

- (_Bool)hasNameLabelFrameForStyleProvider:(id)arg1;

- (id)init;

- (id)memberNameBoldFontForStyleProvider:(id)arg1;

- (id)memberNamePlaceholderFontForStyleProvider:(id)arg1;

- (id)memberNameRegularFontForStyleProvider:(id)arg1;

- (double)nameLabelBaselineOffsetFromBottomForStyleProvider:(id)arg1;

- (struct CGRect)nameLabelFrameForStyleProvider:(id)arg1;

- (id)regularTextAttributesForStyleProvider:(id)arg1;

- (void)setNameLabelBaselineOffsetFromBottom:(double)arg1 forStyleProvider:(id)arg2;

- (void)setNameLabelFrame:(struct CGRect)arg1 forStyleProvider:(id)arg2;



@end


