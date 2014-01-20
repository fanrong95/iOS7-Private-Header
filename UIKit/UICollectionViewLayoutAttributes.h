/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"

#import "UIDynamicItem.h"



@class NSIndexPath, NSString;



@interface UICollectionViewLayoutAttributes : NSObject <NSCopying, UIDynamicItem>

{

    NSString *_elementKind;

    NSString *_reuseIdentifier;

    struct CGPoint _center;

    struct CGSize _size;

    struct CGRect _frame;

    double _alpha;

    struct CATransform3D _transform;

    NSIndexPath *_indexPath;

    NSString *_isCloneString;

    struct {

        unsigned int isCellKind:1;

        unsigned int isDecorationView:1;

        unsigned int isHidden:1;

        unsigned int isClone:1;

    } _layoutFlags;

    long long _zIndex;

}



+ (id)layoutAttributesForCellWithIndexPath:(id)arg1;

+ (id)layoutAttributesForDecorationViewOfKind:(id)arg1 withIndexPath:(id)arg2;

+ (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 withIndexPath:(id)arg2;

- (id)_elementKind;

- (_Bool)_isCell;

- (_Bool)_isClone;

- (_Bool)_isDecorationView;

- (_Bool)_isEquivalentTo:(id)arg1;

- (_Bool)_isSupplementaryView;

- (_Bool)_isTransitionVisibleTo:(id)arg1;

- (id)_reuseIdentifier;

- (void)_setElementKind:(id)arg1;

- (void)_setIsClone:(_Bool)arg1;

- (void)_setReuseIdentifier:(id)arg1;

@property(nonatomic) double alpha; // @synthesize alpha=_alpha;

@property(nonatomic) struct CGRect bounds;

@property(nonatomic) struct CGPoint center; // @synthesize center=_center;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

@property(nonatomic) struct CGRect frame;

- (unsigned long long)hash;

@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;

- (id)init;

- (id)initialLayoutAttributesForInsertedDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;

- (_Bool)isEqual:(id)arg1;

@property(nonatomic, getter=isHidden) _Bool hidden;

@property(readonly, nonatomic) unsigned long long representedElementCategory;

@property(readonly, nonatomic) NSString *representedElementKind;

@property(nonatomic) struct CGSize size; // @synthesize size=_size;

@property(nonatomic) struct CATransform3D transform3D; // @synthesize transform3D=_transform;

@property(nonatomic) struct CGAffineTransform transform;

@property(nonatomic) long long zIndex; // @synthesize zIndex=_zIndex;



@end


