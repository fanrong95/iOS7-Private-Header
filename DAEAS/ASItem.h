/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "ASParsing.h"



@class NSInvocation, NSMutableDictionary, NSObject<ASParsing>;



@interface ASItem : NSObject <ASParsing>

{

    ASItem *_root;

    ASItem *_parent;

    int _codePage;

    int _token;

    NSObject<ASParsing> *_currentlyParsingSubItem;

    int _currentlyParsingCPTNumber;

    NSInvocation *_currentStreamInvocation;

    int _parsingState;

    NSMutableDictionary *_parseRuleUsageNumbers;

}



+ (_Bool)acceptsTopLevelLeaves;

+ (id)asParseRules;

+ (_Bool)expectsContent;

+ (_Bool)frontingBasicTypes;

+ (_Bool)notifyOfUnknownTokens;

+ (id)parseRuleCache;

+ (_Bool)parsingLeafNode;

+ (_Bool)parsingWithSubItems;

- (int)_dataclass;

- (_Bool)_haveEnoughDataToKeepParsingWithContext:(id)arg1 curToken:(unsigned char)arg2;

- (_Bool)_itemPathMatches:(id)arg1;

- (_Bool)_itemPathWithDCCPTMatches:(id)arg1 dccpt:(int)arg2;

- (_Bool)_parseNextValueWithDataclass:(int)arg1 context:(id)arg2 root:(id)arg3 parent:(id)arg4 callbackDict:(id)arg5 streamCallbackDict:(id)arg6 parseRules:(id)arg7 account:(id)arg8;

- (id)_replacementObjectWithCallbackDict:(id)arg1;

- (void)_setCurrentlyParsingSubItem:(id)arg1;

- (_Bool)_setupFirstParseWithContext:(id)arg1 root:(id)arg2 parent:(id)arg3;

- (_Bool)_streamIfNecessaryFromContext:(id)arg1;

- (int)_streamYourLittleHeartOutWithContext:(id)arg1;

- (id)_streamingInvocationForStreamingCallbackDict:(id)arg1 dccpt:(int)arg2;

- (id)asParseRules;

- (id)currentStreamInvocation;

- (void)dealloc;

- (void)ignoreThisContent:(id)arg1;

- (id)init;

- (_Bool)nextParsedObjectWithContext:(id)arg1 root:(id)arg2 callbackDict:(id)arg3 streamCallbackDict:(id)arg4 dataclass:(int)arg5 outParsedObject:(id *)arg6 outCPTNumber:(int *)arg7 account:(id)arg8;

- (id)parent;

- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;

- (int)parsingState;

- (void)setCurrentStreamInvocation:(id)arg1;



@end


