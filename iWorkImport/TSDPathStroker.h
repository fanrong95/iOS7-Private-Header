/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class TSUColor;



__attribute__((visibility("hidden")))

@interface TSDPathStroker : NSObject

{

    TSUColor *mColor;

    double mWidth;

    TSDPathStroker *mPrecedingStroker;

}



- (void)dealloc;

- (id)initWithProperties:(id)arg1 bundle:(id)arg2 dataManager:(void *)arg3 precedingStroker:(id)arg4;

@property(nonatomic) double width; // @synthesize width=mWidth;

- (void)strokePath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2 inColor:(id)arg3;



@end


