/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "OABReaderState.h"


@class WBReader;



__attribute__((visibility("hidden")))

@interface WBOfficeArtReaderState : OABReaderState

{

    WBReader *mReader;

    int mCurrentTextType;

}



@property(nonatomic) int currentTextType; // @synthesize currentTextType=mCurrentTextType;

- (id)initWithClient:(Class)arg1;

@property(nonatomic) WBReader *reader; // @synthesize reader=mReader;



@end


