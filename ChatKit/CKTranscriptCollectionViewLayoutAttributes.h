/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UICollectionViewLayoutAttributes.h"



@interface CKTranscriptCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes

{

    struct CGRect _targetFrame;

    struct CGRect _currentFrame;

    double _easing;

    double _targetEasing;

    BOOL _orientation;

    _Bool _wantsDrawerLayout;

}



- (id)copyWithZone:(struct _NSZone *)arg1;

@property(nonatomic) struct CGRect currentFrame; // @synthesize currentFrame=_currentFrame;

@property(nonatomic) double easing; // @synthesize easing=_easing;

@property(nonatomic) BOOL orientation; // @synthesize orientation=_orientation;

@property(nonatomic) double targetEasing; // @synthesize targetEasing=_targetEasing;

@property(nonatomic) struct CGRect targetFrame; // @synthesize targetFrame=_targetFrame;

@property(nonatomic) _Bool wantsDrawerLayout; // @synthesize wantsDrawerLayout=_wantsDrawerLayout;



@end


