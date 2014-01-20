/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UICollectionViewFlowLayout.h"



@class NSMutableArray;



__attribute__((visibility("hidden")))

@interface SFCollectionViewFlowLayout : UICollectionViewFlowLayout

{

    NSMutableArray *_insertedIndexPaths;

    NSMutableArray *_movedIndexPaths;

    NSMutableArray *_deletedIndexPaths;

    NSMutableArray *_handledIndexPaths;

}



- (void).cxx_destruct;

- (id)_animationForReusableView:(SEL)arg1 toLayoutAttributes:(id)arg2 type:(id)arg3;

- (void)_applyToLayoutAttributes:(id)arg1 toView:(id)arg2;

- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;

- (void)finalizeCollectionViewUpdates;

- (id)init;

- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;

- (void)prepareForCollectionViewUpdates:(id)arg1;



@end


