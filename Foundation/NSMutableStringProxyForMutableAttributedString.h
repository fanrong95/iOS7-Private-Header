/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSMutableString.h"


@class NSMutableAttributedString;



@interface NSMutableStringProxyForMutableAttributedString : NSMutableString

{

    NSMutableAttributedString *mutableAttributedString;

}



- (unsigned short)characterAtIndex:(unsigned long long)arg1;

- (void)dealloc;

- (void)finalize;

- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;

- (id)initWithMutableAttributedString:(id)arg1;

- (unsigned long long)length;

- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;



@end


