/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CMMapper.h"


@class OADParagraph;



__attribute__((visibility("hidden")))

@interface PMParagraphMapper : CMMapper

{

    OADParagraph *mParagraph;

}



- (void)addEndCharacterStyleToStyle:(id)arg1;

- (id)copyParagraphStyleWithState:(id)arg1 isFirstParagraph:(_Bool)arg2;

- (int)firstTextRunFontSize;

- (id)fontScheme;

- (id)initWithOadParagraph:(id)arg1 parent:(id)arg2;

- (void)mapAt:(id)arg1 withState:(id)arg2 isFirstParagraph:(_Bool)arg3;



@end


