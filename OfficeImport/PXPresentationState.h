/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableDictionary, OAVState, OAXDrawingState, OAXTableStyleCache, PDPresentation;



__attribute__((visibility("hidden")))

@interface PXPresentationState : NSObject

{

    NSMutableDictionary *mModelObjects;

    OAXDrawingState *mOfficeArtState;

    OAVState *mOAVState;

    OAXTableStyleCache *mTableStyleCache;

    NSMutableDictionary *mSlideURLToIndexMap;

    PDPresentation *mTgtPresentation;

    id <OCCancelDelegate> mCancel;

}



@property(retain, nonatomic) id <OCCancelDelegate> cancelDelegate; // @synthesize cancelDelegate=mCancel;

- (void)dealloc;

- (id)init;

- (_Bool)isCancelled;

- (id)modelObjectForLocation:(id)arg1;

- (id)oavState;

- (id)officeArtState;

- (void)resetOfficeArtState;

- (void)setModelObject:(id)arg1 forLocation:(id)arg2;

- (void)setSlideIndex:(long long)arg1 forSlideURL:(id)arg2;

- (void)setTgtPresentation:(id)arg1;

- (long long)slideIndexForSlideURL:(id)arg1;

- (id)tableStyleCache;

- (id)tgtPresentation;



@end


