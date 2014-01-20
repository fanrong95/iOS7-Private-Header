/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIKBSplitImageView.h"


#import "UIKBCacheableView.h"



@class NSObject, NSString, UIKBRenderConfig, UIKBTree;



__attribute__((visibility("hidden")))

@interface UIKBBackgroundView : UIKBSplitImageView <UIKBCacheableView>

{

    UIKBTree *_keyplane;

    int _visualStyle;

    NSObject *_geometryCacheKey;

    struct CGRect _splitLeftRect;

    struct CGRect _splitLeftCacheRect;

    struct CGRect _splitRightRect;

    struct CGRect _splitRightCacheRect;

    int _topCorners;

    _Bool _isSplit;

    _Bool _centerFilled;

    _Bool _hasCandidateKeys;

    UIKBRenderConfig *_renderConfig;

}



@property(readonly, nonatomic) _Bool cacheDeferable;

@property(readonly, nonatomic) NSString *cacheKey;

- (id)cacheKeysForRenderFlags:(id)arg1;

@property(readonly, nonatomic) double cachedWidth;

- (void)dealloc;

- (void)displayLayer:(id)arg1;

- (void)drawContentsOfRenderers:(id)arg1;

- (void)drawRect:(struct CGRect)arg1;

@property(retain, nonatomic) NSObject *geometryCacheKey; // @synthesize geometryCacheKey=_geometryCacheKey;

- (id)initWithFrame:(struct CGRect)arg1;

@property(readonly, nonatomic) _Bool keepNonPersistent;

- (void)layoutSubviews;

- (void)refreshStyleForKeyplane:(id)arg1;

@property(retain, nonatomic) UIKBRenderConfig *renderConfig; // @synthesize renderConfig=_renderConfig;



@end


