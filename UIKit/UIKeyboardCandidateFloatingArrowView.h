/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UICollectionReusableView.h"


@class UIButton;



__attribute__((visibility("hidden")))

@interface UIKeyboardCandidateFloatingArrowView : UICollectionReusableView

{

    UIButton *_arrowButton;

}



+ (id)collectionViewKind;

+ (id)reuseIdentifier;

- (void)applyLayoutAttributes:(id)arg1;

@property(retain, nonatomic) UIButton *arrowButton; // @synthesize arrowButton=_arrowButton;

- (void)dealloc;

- (id)initWithFrame:(struct CGRect)arg1;

- (void)prepareForReuse;

- (void)updateArrow;



@end


