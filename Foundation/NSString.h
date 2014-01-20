/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"

#import "NSMutableCopying.h"

#import "NSSecureCoding.h"



@interface NSString : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

{

}



+ (id)_web_stringRepresentationForBytes:(long long)arg1;

+ (id)allocWithZone:(struct _NSZone *)arg1;

+ (const unsigned long long *)availableStringEncodings;

+ (unsigned long long)defaultCStringEncoding;

+ (void)initialize;

+ (id)localizedNameOfStringEncoding:(unsigned long long)arg1;

+ (id)localizedStringWithFormat:(id)arg1;

+ (id)pathWithComponents:(id)arg1;

+ (id)string;

+ (id)stringWithBytes:(const void *)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3;

+ (id)stringWithCString:(const char *)arg1;

+ (id)stringWithCString:(const char *)arg1 encoding:(unsigned long long)arg2;

+ (id)stringWithCString:(const char *)arg1 length:(unsigned long long)arg2;

+ (id)stringWithCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2;

+ (id)stringWithContentsOfFile:(id)arg1;

+ (id)stringWithContentsOfFile:(id)arg1 encoding:(unsigned long long)arg2 error:(id *)arg3;

+ (id)stringWithContentsOfFile:(id)arg1 usedEncoding:(unsigned long long *)arg2 error:(id *)arg3;

+ (id)stringWithContentsOfURL:(id)arg1;

+ (id)stringWithContentsOfURL:(id)arg1 encoding:(unsigned long long)arg2 error:(id *)arg3;

+ (id)stringWithContentsOfURL:(id)arg1 usedEncoding:(unsigned long long *)arg2 error:(id *)arg3;

+ (id)stringWithFormat:(id)arg1;

+ (id)stringWithFormat:(id)arg1 locale:(id)arg2;

+ (id)stringWithString:(id)arg1;

+ (id)stringWithUTF8String:(const char *)arg1;

+ (_Bool)supportsSecureCoding;

- (const char *)UTF8String;

- (id)__escapeString5991;

- (_Bool)_allowsDirectEncoding;

- (unsigned long long)_cfTypeID;

- (id)_copyFormatStringWithConfiguration:(id)arg1;

- (id)_createSubstringWithRange:(struct _NSRange)arg1;

- (unsigned char)_encodingCantBeStoredInEightBitCFString;

- (const char *)_fastCStringContents:(_Bool)arg1;

- (const unsigned short *)_fastCharacterContents;

- (unsigned int)_fastestEncodingInCFStringEncoding;

- (void)_flushRegularExpressionCaches;

- (void)_getBlockStart:(unsigned long long *)arg1 end:(unsigned long long *)arg2 contentsEnd:(unsigned long long *)arg3 forRange:(struct _NSRange)arg4 stopAtLineSeparators:(_Bool)arg5;

- (_Bool)_getBytesAsData:(id *)arg1 maxLength:(unsigned long long)arg2 usedLength:(unsigned long long *)arg3 encoding:(unsigned long long)arg4 options:(unsigned long long)arg5 range:(struct _NSRange)arg6 remainingRange:(struct _NSRange *)arg7;

- (_Bool)_getCString:(char *)arg1 maxLength:(unsigned long long)arg2 encoding:(unsigned int)arg3;

- (id)_getCharactersAsStringInRange:(struct _NSRange)arg1;

- (id)_initWithBytesOfUnknownEncoding:(char *)arg1 length:(unsigned long long)arg2 copy:(_Bool)arg3 usedEncoding:(unsigned long long *)arg4;

- (id)_initWithDataOfUnknownEncoding:(id)arg1;

- (_Bool)_isCString;

- (id)_newSubstringWithRange:(struct _NSRange)arg1 zone:(struct _NSZone *)arg2;

- (struct _NSRange)_rangeOfRegularExpressionPattern:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3 locale:(id)arg4;

- (unsigned int)_smallestEncodingInCFStringEncoding;

- (id)_stringByReplacingOccurrencesOfRegularExpressionPattern:(id)arg1 withTemplate:(id)arg2 options:(unsigned long long)arg3 range:(struct _NSRange)arg4;

- (id)_stringByResolvingSymlinksInPathUsingCache:(_Bool)arg1;

- (id)_stringByStandardizingPathUsingCache:(_Bool)arg1;

- (id)_stringRepresentation;

- (id)_web_HTTPStyleLanguageCode;

- (id)_web_HTTPStyleLanguageCodeWithoutRegion;

- (id)_web_URLFragment;

- (id)_web_characterSetFromContentTypeHeader_nowarn;

- (long long)_web_countOfString:(id)arg1;

- (id)_web_domainFromHost;

- (_Bool)_web_domainMatches:(id)arg1;

- (unsigned int)_web_extractFourCharCode;

- (id)_web_fileNameFromContentDispositionHeader_nowarn;

- (id)_web_filenameByFixingIllegalCharacters;

- (id)_web_fixedCarbonPOSIXPath;

- (_Bool)_web_hasCaseInsensitivePrefix:(id)arg1;

- (_Bool)_web_hasCountryCodeTLD;

- (_Bool)_web_isCaseInsensitiveEqualToString:(id)arg1;

- (_Bool)_web_isFileURL;

- (_Bool)_web_isJavaScriptURL;

- (_Bool)_web_looksLikeAbsoluteURL;

- (_Bool)_web_looksLikeIPAddress;

- (id)_web_mimeTypeFromContentTypeHeader_nowarn;

- (id)_web_parseAsKeyValuePairHandleQuotes_nowarn:(_Bool)arg1;

- (id)_web_parseAsKeyValuePair_nowarn;

- (struct _NSRange)_web_rangeOfURLHost;

- (struct _NSRange)_web_rangeOfURLResourceSpecifier_nowarn;

- (struct _NSRange)_web_rangeOfURLScheme_nowarn;

- (struct _NSRange)_web_rangeOfURLUserPasswordHostPort;

- (id)_web_splitAtNonDateCommas_nowarn;

- (id)_web_stringByCollapsingNonPrintingCharacters;

- (id)_web_stringByExpandingTildeInPath;

- (id)_web_stringByReplacingValidPercentEscapes_nowarn;

- (id)_web_stringByTrimmingWhitespace;

- (_Bool)boolValue;

- (const char *)cString;

- (unsigned long long)cStringLength;

- (const char *)cStringUsingEncoding:(unsigned long long)arg1;

- (_Bool)canBeConvertedToEncoding:(unsigned long long)arg1;

- (id)capitalizedString;

- (id)capitalizedStringWithLocale:(id)arg1;

- (long long)caseInsensitiveCompare:(id)arg1;

- (unsigned short)characterAtIndex:(unsigned long long)arg1;

- (Class)classForCoder;

- (id)commonPrefixWithString:(id)arg1 options:(unsigned long long)arg2;

- (long long)compare:(id)arg1;

- (long long)compare:(id)arg1 options:(unsigned long long)arg2;

- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;

- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3 locale:(id)arg4;

- (unsigned long long)completePathIntoString:(id *)arg1 caseSensitive:(_Bool)arg2 matchesIntoArray:(id *)arg3 filterTypes:(id)arg4;

- (id)componentsSeparatedByCharactersInSet:(id)arg1;

- (id)componentsSeparatedByString:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (id)dataUsingEncoding:(unsigned long long)arg1;

- (id)dataUsingEncoding:(unsigned long long)arg1 allowLossyConversion:(_Bool)arg2;

- (CDStruct_5fe7aead)decimalValue;

- (id)decomposedStringWithCanonicalMapping;

- (id)decomposedStringWithCompatibilityMapping;

- (id)description;

- (id)displayableString;

- (double)doubleValue;

- (void)encodeWithCoder:(id)arg1;

- (void)enumerateLinesUsingBlock:(id)arg1;

- (void)enumerateLinguisticTagsInRange:(struct _NSRange)arg1 scheme:(id)arg2 options:(unsigned long long)arg3 orthography:(id)arg4 usingBlock:(id)arg5;

- (void)enumerateSubstringsInRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 usingBlock:(id)arg3;

- (unsigned long long)fastestEncoding;

- (const char *)fileSystemRepresentation;

- (float)floatValue;

- (id)formatConfiguration;

- (_Bool)getBytes:(char *)arg1 maxLength:(unsigned long long)arg2 filledLength:(unsigned long long *)arg3 encoding:(unsigned long long)arg4 allowLossyConversion:(_Bool)arg5 range:(struct _NSRange)arg6 remainingRange:(struct _NSRange *)arg7;

- (_Bool)getBytes:(void *)arg1 maxLength:(unsigned long long)arg2 usedLength:(unsigned long long *)arg3 encoding:(unsigned long long)arg4 options:(unsigned long long)arg5 range:(struct _NSRange)arg6 remainingRange:(struct _NSRange *)arg7;

- (void)getCString:(char *)arg1;

- (void)getCString:(char *)arg1 maxLength:(unsigned long long)arg2;

- (_Bool)getCString:(char *)arg1 maxLength:(unsigned long long)arg2 encoding:(unsigned long long)arg3;

- (void)getCString:(char *)arg1 maxLength:(unsigned long long)arg2 range:(struct _NSRange)arg3 remainingRange:(struct _NSRange *)arg4;

- (void)getCharacters:(unsigned short *)arg1;

- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;

- (_Bool)getExternalRepresentation:(id *)arg1 extendedAttributes:(id *)arg2 forWritingToURLOrPath:(id)arg3 usingEncoding:(unsigned long long)arg4 error:(id *)arg5;

- (_Bool)getFileSystemRepresentation:(char *)arg1 maxLength:(unsigned long long)arg2;

- (void)getLineStart:(unsigned long long *)arg1 end:(unsigned long long *)arg2 contentsEnd:(unsigned long long *)arg3 forRange:(struct _NSRange)arg4;

- (void)getParagraphStart:(unsigned long long *)arg1 end:(unsigned long long *)arg2 contentsEnd:(unsigned long long *)arg3 forRange:(struct _NSRange)arg4;

- (_Bool)hasPrefix:(id)arg1;

- (_Bool)hasSuffix:(id)arg1;

- (unsigned long long)hash;

- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 freeWhenDone:(_Bool)arg4;

- (id)initWithCString:(const char *)arg1;

- (id)initWithCString:(const char *)arg1 encoding:(unsigned long long)arg2;

- (id)initWithCString:(const char *)arg1 length:(unsigned long long)arg2;

- (id)initWithCStringNoCopy:(char *)arg1 length:(unsigned long long)arg2 freeWhenDone:(_Bool)arg3;

- (id)initWithCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2;

- (id)initWithCharactersNoCopy:(unsigned short *)arg1 length:(unsigned long long)arg2 freeWhenDone:(_Bool)arg3;

- (id)initWithCoder:(id)arg1;

- (id)initWithContentsOfFile:(id)arg1;

- (id)initWithContentsOfFile:(id)arg1 encoding:(unsigned long long)arg2 error:(id *)arg3;

- (id)initWithContentsOfFile:(id)arg1 usedEncoding:(unsigned long long *)arg2 error:(id *)arg3;

- (id)initWithContentsOfURL:(id)arg1;

- (id)initWithContentsOfURL:(id)arg1 encoding:(unsigned long long)arg2 error:(id *)arg3;

- (id)initWithContentsOfURL:(id)arg1 usedEncoding:(unsigned long long *)arg2 error:(id *)arg3;

- (id)initWithData:(id)arg1 encoding:(unsigned long long)arg2;

- (id)initWithData:(id)arg1 usedEncoding:(unsigned long long *)arg2;

- (id)initWithFormat:(id)arg1;

- (id)initWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;

- (id)initWithFormat:(id)arg1 locale:(id)arg2;

- (id)initWithFormat:(id)arg1 locale:(id)arg2 arguments:(struct __va_list_tag [1])arg3;

- (id)initWithString:(id)arg1;

- (id)initWithUTF8String:(const char *)arg1;

- (int)intValue;

- (long long)integerValue;

- (_Bool)isAbsolutePath;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isEqualToString:(id)arg1;

- (_Bool)isNSString__;

- (id)lastPathComponent;

- (unsigned long long)length;

- (unsigned long long)lengthOfBytesUsingEncoding:(unsigned long long)arg1;

- (struct _NSRange)lineRangeForRange:(struct _NSRange)arg1;

- (id)linguisticTagsInRange:(struct _NSRange)arg1 scheme:(id)arg2 options:(unsigned long long)arg3 orthography:(id)arg4 tokenRanges:(id *)arg5;

- (long long)localizedCaseInsensitiveCompare:(id)arg1;

- (long long)localizedCompare:(id)arg1;

- (long long)localizedStandardCompare:(id)arg1;

- (long long)longLongValue;

- (const char *)lossyCString;

- (id)lowercaseString;

- (id)lowercaseStringWithLocale:(id)arg1;

- (unsigned long long)maximumLengthOfBytesUsingEncoding:(unsigned long long)arg1;

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

- (struct _NSRange)paragraphRangeForRange:(struct _NSRange)arg1;

- (id)pathComponents;

- (id)pathExtension;

- (id)precomposedStringWithCanonicalMapping;

- (id)precomposedStringWithCompatibilityMapping;

- (id)propertyList;

- (id)propertyListFromStringsFileFormat;

- (id)quotedStringRepresentation;

- (struct _NSRange)rangeOfCharacterFromSet:(id)arg1;

- (struct _NSRange)rangeOfCharacterFromSet:(id)arg1 options:(unsigned long long)arg2;

- (struct _NSRange)rangeOfCharacterFromSet:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;

- (struct _NSRange)rangeOfComposedCharacterSequenceAtIndex:(unsigned long long)arg1;

- (struct _NSRange)rangeOfComposedCharacterSequencesForRange:(struct _NSRange)arg1;

- (struct _NSRange)rangeOfString:(id)arg1;

- (struct _NSRange)rangeOfString:(id)arg1 options:(unsigned long long)arg2;

- (struct _NSRange)rangeOfString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;

- (struct _NSRange)rangeOfString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3 locale:(id)arg4;

- (id)replacementObjectForPortCoder:(id)arg1;

- (struct _NSRange)significantText;

- (unsigned long long)smallestEncoding;

- (id)standardizedURLPath;

- (id)stringByAbbreviatingWithTildeInPath;

- (id)stringByAddingPercentEncodingWithAllowedCharacters:(id)arg1;

- (id)stringByAddingPercentEscapes;

- (id)stringByAddingPercentEscapesUsingEncoding:(unsigned long long)arg1;

- (id)stringByAppendingFormat:(id)arg1;

- (id)stringByAppendingPathComponent:(id)arg1;

- (id)stringByAppendingPathExtension:(id)arg1;

- (id)stringByAppendingString:(id)arg1;

- (id)stringByConvertingPathToURL;

- (id)stringByConvertingURLToPath;

- (id)stringByDeletingLastPathComponent;

- (id)stringByDeletingPathExtension;

- (id)stringByExpandingTildeInPath;

- (id)stringByFoldingWithOptions:(unsigned long long)arg1 locale:(id)arg2;

- (id)stringByPaddingToLength:(unsigned long long)arg1 withString:(id)arg2 startingAtIndex:(unsigned long long)arg3;

- (id)stringByRemovingPercentEncoding;

- (id)stringByRemovingPercentEscapes;

- (id)stringByReplacingCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;

- (id)stringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2;

- (id)stringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned long long)arg3 range:(struct _NSRange)arg4;

- (id)stringByReplacingPercentEscapesUsingEncoding:(unsigned long long)arg1;

- (id)stringByResolvingSymlinksInPath;

- (id)stringByStandardizingPath;

- (id)stringByTrimmingCharactersInSet:(id)arg1;

- (id)stringsByAppendingPaths:(id)arg1;

- (id)substringFromIndex:(unsigned long long)arg1;

- (id)substringToIndex:(unsigned long long)arg1;

- (id)substringWithRange:(struct _NSRange)arg1;

- (id)uppercaseString;

- (id)uppercaseStringWithLocale:(id)arg1;

- (id)urlPathRelativeToPath:(id)arg1;

- (_Bool)writeToFile:(id)arg1 atomically:(_Bool)arg2;

- (_Bool)writeToFile:(id)arg1 atomically:(_Bool)arg2 encoding:(unsigned long long)arg3 error:(id *)arg4;

- (_Bool)writeToURL:(id)arg1 atomically:(_Bool)arg2;

- (_Bool)writeToURL:(id)arg1 atomically:(_Bool)arg2 encoding:(unsigned long long)arg3 error:(id *)arg4;



@end

