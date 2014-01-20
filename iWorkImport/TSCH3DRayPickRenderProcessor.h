/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCH3DRetargetRenderProcessor.h"


@class NSArray, NSMutableArray, TSCH3DDataBuffer, TSCH3DRayPickPipelineDelegate;



__attribute__((visibility("hidden")))

@interface TSCH3DRayPickRenderProcessor : TSCH3DRetargetRenderProcessor

{

    TSCH3DDataBuffer *mBuffer;

    NSMutableArray *mPickedPoints;

    tvec2_84d5962d mPosition;

    float mSlack;

    TSCH3DRayPickPipelineDelegate *mSceneObjectDelegate;

}



- (id).cxx_construct;

- (void)dealloc;

- (void)geometry:(id)arg1;

- (id)init;

- (id)matrix;

@property(readonly, nonatomic) NSArray *pickedPoints;

@property(nonatomic) tvec2_84d5962d position; // @synthesize position=mPosition;

@property(retain, nonatomic) TSCH3DRayPickPipelineDelegate *sceneObjectDelegate; // @synthesize sceneObjectDelegate=mSceneObjectDelegate;

@property(nonatomic) float slack; // @synthesize slack=mSlack;

- (void)submit:(const struct PrimitiveInfo *)arg1;



@end


