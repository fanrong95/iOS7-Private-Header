/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCH3DRetargetRenderProcessor.h"


__attribute__((visibility("hidden")))

@interface TSCH3DObjectStateRenderProcessor : TSCH3DRetargetRenderProcessor

{

    StateStack_22d3dc01 mObjectStateStack;

}



- (id).cxx_construct;

- (void).cxx_destruct;

- (StateStack_22d3dc01 *)objectStateStack;

- (void)popState;

- (void)pushState;

- (void)resetBuffers;



@end


