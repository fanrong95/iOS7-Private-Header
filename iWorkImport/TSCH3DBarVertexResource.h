/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCH3DAbstractBarVertexResource.h"


@class TSCH3DBarExtrusionGeometry;



__attribute__((visibility("hidden")))

@interface TSCH3DBarVertexResource : TSCH3DAbstractBarVertexResource

{

    TSCH3DBarExtrusionGeometry *mGeometry;

}



- (long long)capOffset;

- (void)dealloc;

- (id)geometry;

- (id)get;

- (id)initWithGeometry:(id)arg1;

- (long long)numCapVertices;

- (long long)numVertices;

- (long long)verticesOffset;



@end


