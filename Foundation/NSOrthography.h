/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCoding.h"

#import "NSCopying.h"



@class NSDictionary, NSString;



@interface NSOrthography : NSObject <NSCopying, NSCoding>

{

}



+ (id)allocWithZone:(struct _NSZone *)arg1;

+ (void)initialize;

+ (id)orthographyWithDominantScript:(id)arg1 languageMap:(id)arg2;

- (id)allLanguages;

- (id)allScripts;

- (Class)classForCoder;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (id)description;

- (id)dominantLanguage;

- (id)dominantLanguageForScript:(id)arg1;

@property(readonly) NSString *dominantScript;

- (void)encodeWithCoder:(id)arg1;

- (unsigned long long)hash;

- (id)initWithCoder:(id)arg1;

- (id)initWithDominantScript:(id)arg1 languageMap:(id)arg2;

- (_Bool)isEqual:(id)arg1;

@property(readonly) NSDictionary *languageMap;

- (id)languagesForScript:(id)arg1;

- (unsigned int)orthographyFlags;

- (id)replacementObjectForPortCoder:(id)arg1;



@end


