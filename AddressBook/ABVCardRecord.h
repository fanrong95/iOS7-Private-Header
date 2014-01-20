/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface ABVCardRecord : NSObject

{

    void *_record;

    struct __CFArray *_properties;

}



+ (void)clearPrivateFields;

+ (_Bool)includeABClipRectInVCardPhotos;

+ (_Bool)includeImageURIInVCards;

+ (_Bool)includeNotesInVCards;

+ (_Bool)includePhotosInVCards;

+ (_Bool)includeREVInVCards;

+ (_Bool)privateVCardEnabled;

+ (void)setIncludeNotesInVCards:(_Bool)arg1;

+ (void)setIncludePhotosInVCards:(_Bool)arg1;

+ (void)setIncludeREVInVCards:(_Bool)arg1;

+ (void)setPrivateVCardEnabled:(_Bool)arg1;

+ (void)setVCardField:(id)arg1 isPrivate:(_Bool)arg2;

+ (struct __CFArray *)supportedProperties;

+ (_Bool)vcardFieldisPrivate:(id)arg1;

- (id)ISO8061StringFromDate:(id)arg1;

- (id)ISO8061StringFromDateTime:(id)arg1;

- (id)_21vCardRepresentationAsData;

- (void)_appendPropValue:(id)arg1 forExternalPropKey:(id)arg2 toOutString:(id)arg3 usingDelimiter:(id)arg4;

- (id)_copyGroupVCardRepresentationAsStringIncludeExternalProperties:(_Bool)arg1;

- (id)_copyVCardRepresentationAsStringIncludeExternalProperties:(_Bool)arg1 withPhoto:(id)arg2 extraPhotoParameters:(id)arg3;

- (id)_fullName;

- (id)_fullNameIncludingAuxiliaryElements:(_Bool)arg1;

- (_Bool)_isCompany;

- (id)_prodID;

- (id)_realCompositeName;

- (_Bool)_showField:(unsigned int)arg1;

- (_Bool)_showField:(unsigned int)arg1 identifier:(int)arg2;

- (_Bool)_usesArrayForExternalPropKey:(id)arg1;

- (id)_vCardKeyForAddressLabel:(id)arg1 vCard3:(_Bool)arg2;

- (struct __CFString *)_vCardKeyForEmailLabel:(id)arg1;

- (struct __CFString *)_vCardKeyForGenericLabel:(id)arg1;

- (id)_vCardKeysForPhoneLabel:(id)arg1;

- (id)alternateName;

- (void)appendLabel:(id)arg1 toVCardRep:(id)arg2 inGroup:(id)arg3;

- (void *)copyValueForProperty:(unsigned int)arg1;

- (id)dataForInstantMessageProperties;

- (id)dataForSocialProfileProperty:(void *)arg1 groupCount:(long long *)arg2;

- (void)dealloc;

- (id)encodedDataForValue:(id)arg1 charsetName:(id *)arg2;

- (id)encodedLineForValue:(id)arg1;

- (id)imageData;

- (id)init;

- (id)initWithRecord:(void *)arg1;

- (id)initWithVCardRepresentation:(id)arg1;

- (id)newISO8061StringFromDate:(id)arg1;

- (id)propertyLineForGenericABProperty21:(unsigned int)arg1 vCardProperty:(id)arg2;

- (id)propertyLineForGenericABProperty:(unsigned int)arg1 vCardProperty:(id)arg2 is21:(_Bool)arg3 groupCount:(long long *)arg4;

- (id)propertyLineForIMHandles:(id)arg1 labels:(id)arg2 vCardProperty:(id)arg3;

- (id)propertyLineForIMPPProperty:(id)arg1 groupCount:(long long *)arg2;

- (id)propertyLineForInstantMessageHandles:(id)arg1 groupCount:(long long *)arg2;

- (void *)record;

- (_Bool)setValue:(void *)arg1 forProperty:(unsigned int)arg2;

- (_Bool)useThumbnailImageFormatIfAvailable;

- (id)vCardRepresentationForMode:(int)arg1;

- (void *)valueForProperty:(unsigned int)arg1;



@end

