/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PKPass.h"


@class PKPassLibrary;



@interface PKRemotePass : PKPass

{

    PKPassLibrary *_passLibrary;

}



- (id)archivedPass;

- (void)dealloc;

- (void)fetchContentWithCompletion:(id)arg1;

- (void)fetchImageSet:(long long)arg1 withCompletion:(id)arg2;

- (void)flushCachedImageSets;

@property(retain, nonatomic) PKPassLibrary *passLibrary; // @synthesize passLibrary=_passLibrary;

- (void)setSettings:(long long)arg1;



@end


