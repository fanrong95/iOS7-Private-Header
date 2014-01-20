/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString, UIKBRenderTraits;



__attribute__((visibility("hidden")))

@interface UIKBRenderFactoryLayoutSegment : NSObject

{

    int _rectCount;

    struct CGRect _rects[3];

    int _triangleCorners[3];

    int _edgeCount;

    unsigned long long _edges[3];

    NSString *_cachedKeyNames[3];

    int _states;

    UIKBRenderTraits *_traits;

}



+ (id)segmentWithTraits:(id)arg1;

- (void)addLayoutRect:(struct CGRect)arg1 asTriangle:(int)arg2;

- (void)addRelativeLayoutRectFromEdge:(unsigned long long)arg1 ofCachedKey:(id)arg2;

- (_Bool)containsPoint:(struct CGPoint)arg1 inRect:(struct CGRect)arg2 withKeyplane:(id)arg3;

- (void)dealloc;

- (id)initWithTraits:(id)arg1;

@property(nonatomic) int keyStates; // @synthesize keyStates=_states;

@property(readonly, nonatomic) UIKBRenderTraits *traits; // @synthesize traits=_traits;



@end


