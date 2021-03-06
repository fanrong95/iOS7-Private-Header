/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "TSDAnimationSession.h"



@class KNAnimatedSlideView, KNAnimationContext, KNShow, KNSlideNode, NSMutableArray, TSULRUCache;



__attribute__((visibility("hidden")))

@interface KNPlaybackSession : NSObject <TSDAnimationSession>

{

    id mEndShowHandler;

    _Bool mHasEndShowHandlerBeenCancelled;

    id <TSDCanvasDelegate> mCanvasDelegate;

    TSULRUCache *mASVCache;

    KNSlideNode *mCurrentSlideNode;

    KNSlideNode *mAlternateNextSlideNode;

    NSMutableArray *mBreadCrumbTrail;

    KNSlideNode *mLastVisitedSlideNode;

    KNShow *mShow;

    KNAnimationContext *mAnimationContext;

    int mPlayMode;

    _Bool mSkipSlides;

    _Bool mShouldAnimateTransitionOnLastSlide;

    _Bool mShouldAnimateNullTransitions;

    _Bool mShouldUseContentlessLayers;

    _Bool mSkipBuilds;

    _Bool mShouldPreferCARenderer;

    _Bool mDisableAutoAnimationRemoval;

    _Bool mShouldAutomaticallyPlayMovies;

    _Bool mShouldShowVideoReflectionsAndMasks;

    _Bool mShouldForceTextureGeneration;

    _Bool mShouldAlwaysSetCurrentGLContextWhenDrawing;

}



@property(nonatomic) KNSlideNode *alternateNextSlideNode; // @synthesize alternateNextSlideNode=mAlternateNextSlideNode;

- (id)animatedSlideViewFor:(id)arg1 setupTransition:(_Bool)arg2;

@property(readonly, nonatomic) KNAnimationContext *animationContext; // @synthesize animationContext=mAnimationContext;

- (_Bool)atBegginingOfDeck;

- (id)breadCrumb;

@property(retain, nonatomic) NSMutableArray *breadCrumbTrail; // @synthesize breadCrumbTrail=mBreadCrumbTrail;

- (void)cancelEndShowHandler;

@property(nonatomic) id <TSDCanvasDelegate> canvasDelegate; // @synthesize canvasDelegate=mCanvasDelegate;

@property(readonly, nonatomic) KNAnimatedSlideView *currentCachedAnimatedSlideView;

- (id)currentSlide;

- (id)currentSlideNode;

- (void)dealloc;

@property(nonatomic) _Bool disableAutoAnimationRemoval; // @synthesize disableAutoAnimationRemoval=mDisableAutoAnimationRemoval;

- (void)dropABreadCrumb;

@property(copy, nonatomic) id endShowHandler; // @synthesize endShowHandler=mEndShowHandler;

- (void)executeEndShowHandlerAfterDelay:(double)arg1;

- (id)firstSlideNode;

- (id)gotoFirstSlide;

- (id)gotoLastSlide;

- (id)gotoNextSlide;

- (id)gotoPreviousSlide;

- (void)gotoSlideNode:(id)arg1;

- (id)initWithShow:(id)arg1 viewScale:(double)arg2 baseLayer:(id)arg3 isBaseLayerVisible:(_Bool)arg4 canvasDelegate:(id)arg5 endShowHandler:(id)arg6;

- (void)invalidateAnimatedSlideViewCache;

- (void)invalidateSlideNumberLayoutsOnCanvas:(id)arg1;

- (_Bool)isOffscreenPlayback;

@property(readonly, nonatomic) _Bool isPreview;

- (id)lastSlideNode;

- (id)newCanvas;

- (id)newTextureForCurrentEvent;

- (id)newTextureForSlideNode:(id)arg1 atEventIndex:(unsigned long long)arg2;

- (id)newTransitionTo:(id)arg1;

- (id)nextSlideAfterCurrent;

- (id)nextSlideNodeAfterCurrent;

- (id)nextSlideNodeAfterSlideNode:(id)arg1;

- (void)p_executeEndShowHandler;

- (void)p_setCurrentSlideNode:(id)arg1;

@property(nonatomic) int playMode; // @synthesize playMode=mPlayMode;

- (id)preloadTexturesForSlideNode:(id)arg1 atSlideIndex:(unsigned long long)arg2;

- (id)previousSlideNodeBeforeCurrent;

- (void)renderTextureContentsIfNeeded:(id)arg1;

- (void)renderTextureSetContentsIfNeeded:(id)arg1;

- (id)renderedTextureSetForRep:(id)arg1;

- (id)renderedTextureSetForRep:(id)arg1 context:(id)arg2;

- (id)repForInfo:(id)arg1 onCanvas:(id)arg2;

@property(nonatomic) _Bool shouldAlwaysSetCurrentGLContextWhenDrawing; // @synthesize shouldAlwaysSetCurrentGLContextWhenDrawing=mShouldAlwaysSetCurrentGLContextWhenDrawing;

@property(nonatomic) _Bool shouldAnimateNullTransitions; // @synthesize shouldAnimateNullTransitions=mShouldAnimateNullTransitions;

@property(nonatomic) _Bool shouldAnimateTransitionOnLastSlide; // @synthesize shouldAnimateTransitionOnLastSlide=mShouldAnimateTransitionOnLastSlide;

@property(nonatomic) _Bool shouldAutomaticallyPlayMovies; // @synthesize shouldAutomaticallyPlayMovies=mShouldAutomaticallyPlayMovies;

@property(nonatomic) _Bool shouldForceTextureGeneration; // @synthesize shouldForceTextureGeneration=mShouldForceTextureGeneration;

@property(nonatomic) _Bool shouldPreferCARenderer; // @synthesize shouldPreferCARenderer=mShouldPreferCARenderer;

@property(nonatomic) _Bool shouldShowVideoReflectionsAndMasks; // @synthesize shouldShowVideoReflectionsAndMasks=mShouldShowVideoReflectionsAndMasks;

@property(nonatomic) _Bool shouldUseContentlessLayers; // @synthesize shouldUseContentlessLayers=mShouldUseContentlessLayers;

@property(nonatomic) _Bool skipBuilds; // @synthesize skipBuilds=mSkipBuilds;

@property(nonatomic) _Bool skipSlides; // @synthesize skipSlides=mSkipSlides;

@property(readonly, nonatomic) _Bool shouldShowInstructionalText;

@property(readonly, nonatomic) KNShow *show; // @synthesize show=mShow;

- (double)showScale;

- (unsigned long long)slideNumberForSlideNode:(id)arg1;



@end


