/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class MFPlainTextDocument, NSMutableString;



@interface _MFFormatFlowedWriter : NSObject

{

    MFPlainTextDocument *_inputDocument;

    unsigned int _encoding;

    NSMutableString *_outputString;

    NSMutableString *_quotedString;

    unsigned int _addedTrailingSpaces:1;

    NSMutableString *_lineString;

}



+ (id)newWithPlainTextDocument:(id)arg1 encoding:(unsigned int)arg2;

- (unsigned long long)_findLineBreakInRange:(struct _NSRange)arg1 maxCharWidthCount:(unsigned long long)arg2 endIsURL:(_Bool)arg3;

- (void)_outputQuotedParagraph:(id)arg1 range:(struct _NSRange)arg2 withQuoteLevel:(unsigned int)arg3;

- (_Bool)addedTrailingSpaces;

- (void)dealloc;

- (id)outputString;

- (id)quotedString;



@end


