/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SAUISnippet.h"


@class NSArray, NSString;



@interface SAUIPronunciationSnippet : SAUISnippet

{

}



+ (id)pronunciationSnippet;

+ (id)pronunciationSnippetWithDictionary:(id)arg1 context:(id)arg2;

@property(copy, nonatomic) NSArray *cancelCommands;

- (id)encodedClassName;

- (id)groupIdentifier;

@property(copy, nonatomic) NSString *interactionId;

@property(copy, nonatomic) NSString *orthography;

@property(copy, nonatomic) NSArray *pronunciations;

@property(copy, nonatomic) NSArray *selectNoneCommands;

@property(copy, nonatomic) NSString *selectNoneText;



@end


