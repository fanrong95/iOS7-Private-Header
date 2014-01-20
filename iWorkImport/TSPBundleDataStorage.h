/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSPFileDataStorage.h"


@class NSString, SFUCryptoKey, TSPBundle;



__attribute__((visibility("hidden")))

@interface TSPBundleDataStorage : TSPFileDataStorage

{

    NSString *_path;

    SFUCryptoKey *_decryptionKey;

    unsigned char _packageIdentifier;

    TSPBundle *_bundle;

    _Bool _gilligan_isRemote;

}



- (void).cxx_destruct;

- (id)AVAssetWithOptions:(id)arg1 contentTypeUTI:(id)arg2;

- (_Bool)copyToTemporaryURL:(id)arg1;

- (_Bool)gilligan_isRemote;

- (id)initWithFilename:(id)arg1 decryptionKey:(id)arg2 bundle:(id)arg3;

- (_Bool)isInPackage:(id)arg1;

- (unsigned char)packageIdentifier;

- (id)packageLocator;

- (void)performIOChannelReadWithAccessor:(id)arg1;

- (void)performReadWithAccessor:(id)arg1;

- (void)setGilligan_isRemote:(_Bool)arg1;

- (_Bool)writeToBundleWriter:(id)arg1 preferredFilename:(id)arg2 filename:(id *)arg3 didCopyDataToBundle:(_Bool *)arg4;



@end


