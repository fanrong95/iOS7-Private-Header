/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface OADAdjustRect : NSObject

{

    struct OADAdjustCoord mLeft;

    struct OADAdjustCoord mTop;

    struct OADAdjustCoord mRight;

    struct OADAdjustCoord mBottom;

}



- (id).cxx_construct;

- (struct OADAdjustCoord)bottom;

- (id)initWithLeft:(struct OADAdjustCoord)arg1 top:(struct OADAdjustCoord)arg2 right:(struct OADAdjustCoord)arg3 bottom:(struct OADAdjustCoord)arg4;

- (struct OADAdjustCoord)left;

- (struct OADAdjustCoord)right;

- (struct OADAdjustCoord)top;



@end


