/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSString.h"



@interface NSString (AXPriv)

+ (struct USet *)_characterSetWithPattern:(id)arg1;

+ (struct USet *)_ideographSet;

+ (struct USet *)_japaneseLetterSet;

- (_Bool)_contentsExclusivelyInCharacterSet:(struct USet *)arg1;

- (_Bool)_isJapanesePhrase;

- (_Bool)_isOnlyIdeographs;

@end


