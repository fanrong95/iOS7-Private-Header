/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "GQDNameMappable.h"



@class GQDImageBinary;



__attribute__((visibility("hidden")))

@interface GQDFilteredImage : NSObject <GQDNameMappable>

{

    GQDImageBinary *mOriginalImageBinary;

    GQDImageBinary *mFilteredImageBinary;

}



+ (const struct StateSpec *)stateForReading;

- (void)dealloc;

- (id)imageBinary;



@end


