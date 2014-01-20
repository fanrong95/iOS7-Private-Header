/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBCodable.h"



#import "NSCopying.h"



@class NSMutableArray, NSString;



@interface GEOLocalizedAttribution : PBCodable <NSCopying>

{

    NSString *_displayName;

    NSString *_language;

    NSMutableArray *_logoURLs;

    NSMutableArray *_snippetLogoURLs;

}



- (void)addLogoURLs:(id)arg1;

- (void)addSnippetLogoURLs:(id)arg1;

- (id)bestURLForLogos:(id)arg1 hiDPI:(_Bool)arg2;

- (void)clearLogoURLs;

- (void)clearSnippetLogoURLs;

- (void)copyTo:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (id)dictionaryRepresentation;

@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;

@property(readonly, nonatomic) _Bool hasDisplayName;

@property(readonly, nonatomic) _Bool hasLanguage;

- (unsigned long long)hash;

- (_Bool)isEqual:(id)arg1;

@property(retain, nonatomic) NSString *language; // @synthesize language=_language;

@property(retain, nonatomic) NSMutableArray *logoURLs; // @synthesize logoURLs=_logoURLs;

- (id)logoURLsAtIndex:(unsigned long long)arg1;

- (unsigned long long)logoURLsCount;

- (_Bool)readFrom:(id)arg1;

@property(retain, nonatomic) NSMutableArray *snippetLogoURLs; // @synthesize snippetLogoURLs=_snippetLogoURLs;

- (id)snippetLogoURLsAtIndex:(unsigned long long)arg1;

- (unsigned long long)snippetLogoURLsCount;

- (void)writeTo:(id)arg1;



@end

