/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "IMXMLParserContext.h"


@class NSArray, NSAttributedString, NSMutableArray, NSMutableAttributedString, NSMutableDictionary, NSString;



@interface IMToSuperParserContext : IMXMLParserContext

{

    unsigned long long _underlineCount;

    unsigned long long _boldCount;

    unsigned long long _italicCount;

    unsigned long long _strikethroughCount;

    unsigned long long _messagePartNumber;

    NSMutableArray *_fontFamilyStack;

    NSMutableArray *_fontSizeStack;

    NSMutableArray *_linkStack;

    NSMutableArray *_backgroundColorStack;

    NSMutableArray *_foregroundColorStack;

    NSMutableDictionary *_currentAttributes;

    _Bool _didAddBodyAttributes;

    long long _baseWritingDirection;

    NSString *_backgroundColor;

    NSString *_foregroundColor;

    NSMutableAttributedString *_body;

    NSMutableArray *_fileTransferGUIDs;

}



- (void)_clearIvars;

- (void)_incrementMessagePartNumber;

- (void)_initIvars;

- (void)_popValueFromStack:(id)arg1 attributeName:(id)arg2;

- (void)_pushValue:(id)arg1 ontoStack:(id)arg2 attributeName:(id)arg3;

- (void)_updateFontFamily;

- (void)_updateFontSize;

- (void)appendFileTransferWithGUID:(id)arg1;

- (void)appendInlineImageWithGUID:(id)arg1 filename:(id)arg2 width:(long long)arg3 height:(long long)arg4;

- (void)appendString:(id)arg1;

@property(retain, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;

@property long long baseWritingDirection; // @synthesize baseWritingDirection=_baseWritingDirection;

@property(readonly, nonatomic) NSAttributedString *body;

- (void)dealloc;

- (void)decrementBoldCount;

- (void)decrementItalicCount;

- (void)decrementStrikethroughCount;

- (void)decrementUnderlineCount;

@property(retain, nonatomic) NSArray *fileTransferGUIDs; // @synthesize fileTransferGUIDs=_fileTransferGUIDs;

@property(retain, nonatomic) NSString *foregroundColor; // @synthesize foregroundColor=_foregroundColor;

- (void)incrementBoldCount;

- (void)incrementItalicCount;

- (void)incrementStrikethroughCount;

- (void)incrementUnderlineCount;

- (id)name;

- (void)popBackgroundColor;

- (void)popFontFamily;

- (void)popFontSize;

- (void)popForegroundColor;

- (void)popLink;

- (void)pushBackgroundColor:(id)arg1;

- (void)pushFontFamily:(id)arg1;

- (void)pushFontSize:(id)arg1;

- (void)pushForegroundColor:(id)arg1;

- (void)pushLink:(id)arg1;

- (void)reset;

- (id)resultsForLogging;



@end


