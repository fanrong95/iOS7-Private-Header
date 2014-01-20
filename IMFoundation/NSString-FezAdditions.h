/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSString.h"



@interface NSString (FezAdditions)

+ (id)copyStringGUID;

+ (id)copyStringGUIDForObject:(id)arg1;

+ (id)generatedRoomNameForGroupChat;

+ (id)randomString;

+ (id)stringGUID;

+ (id)stringGUIDForObject:(id)arg1;

- (long long)_FZBestGuessFZIDType;

- (id)_FZIDFromEmail;

- (id)_FZIDFromPhoneNumber;

- (long long)_FZIDType;

- (id)_IDFromFZIDType:(long long)arg1;

- (id)_URIFromCanonicalizedDSID;

- (id)_URIFromCanonicalizedEmail;

- (id)_URIFromCanonicalizedFZIDType:(long long)arg1;

- (id)_URIFromCanonicalizedPhoneNumber;

- (id)_URIFromDSID;

- (id)_URIFromEmail;

- (id)_URIFromFZIDType:(long long)arg1;

- (id)_URIFromPhoneNumber;

- (struct _NSRange)__rangeOfNewlineInRange:(struct _NSRange)arg1;

- (id)__stringByStrippingAttachmentAndControlCharacters;

- (id)__stringByStrippingControlCharacters;

- (_Bool)_appearsToBeDSID;

- (_Bool)_appearsToBeEmail;

- (_Bool)_appearsToBePhoneNumber;

- (id)_bestGuessURI;

- (id)_bestGuessURIFromCanicalizedID;

- (id)_stripFZIDPrefix;

- (unsigned int)hexValue;

- (_Bool)isDirectory;

- (_Bool)isEqualToIgnoringCase:(id)arg1;

- (long long)localizedCompareToString:(id)arg1;

- (id)pathStringForDisplay;

- (_Bool)roomNameIsProbablyAutomaticallyGenerated;

- (id)stringByAddingURLEscapes;

- (id)stringByRemovingCharactersFromSet:(id)arg1;

- (id)stringByRemovingURLEscapes;

- (id)stringByRemovingWhitespace;

- (id)stringByResolvingAndStandardizingPath;

- (id)stringWithLTREmbedding;

- (id)trimmedString;

- (id)uniqueSavePath;

- (unsigned int)unsignedIntValue;

- (id)urlFromString;

@end


