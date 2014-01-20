/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UICollectionReusableView.h"


__attribute__((visibility("hidden")))

@interface UIKeyboardCandidateGridOverlayBackgroundView : UICollectionReusableView

{

    double _rowHeight;

    unsigned long long _highlightedRowIndex;

}



+ (struct CGColor *)backgroundColor;

+ (id)collectionViewKind;

+ (id)reuseIdentifier;

- (void)applyLayoutAttributes:(id)arg1;

- (void)drawRect:(struct CGRect)arg1;

@property(nonatomic) unsigned long long highlightedRowIndex; // @synthesize highlightedRowIndex=_highlightedRowIndex;

@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;



@end

