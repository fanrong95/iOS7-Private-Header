/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "OADClient.h"



@class CHDAnchor;



__attribute__((visibility("hidden")))

@interface CHDOfficeArtClient : NSObject <OADClient>

{

    CHDAnchor *mAnchor;

}



- (id)anchor;

- (struct CGRect)bounds;

- (void)dealloc;

- (_Bool)hasBounds;

- (void)setAnchor:(id)arg1;



@end


