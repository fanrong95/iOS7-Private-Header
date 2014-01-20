/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MSStreamsProtocol.h"


@class NSArray;



@interface MSPublishStreamsProtocol : MSStreamsProtocol

{

    struct __MSPSPCContext {

        struct __MSSPCContext _super;

        void *finishedCallback;

        void *authFailedCallback;

        void *didReceiveServerSideConfigurationVersionCallback;

        void *didReceiveRetryAfterCallback;

    } _context;

    NSArray *_assetCollectionsInFlight;

    struct __MSPSPCUCContext {

        struct __MSSPCContext _super;

        void *finishedCallback;

        void *authFailedCallback;

        void *didReceiveServerSideConfigurationVersionCallback;

    } _UCContext;

}



- (void).cxx_destruct;

- (void)_coreProtocolDidFailAuthenticationError:(id)arg1;

- (void)_coreProtocolDidFinishResponse:(id)arg1 error:(id)arg2;

- (void)_coreProtocolDidFinishUCResults:(id)arg1 error:(id)arg2;

- (_Bool)_insertInfoAboutAsset:(id)arg1 intoDictionary:(id)arg2 outError:(id *)arg3;

- (id)_metadataDictForAsset:(id)arg1 outError:(id *)arg2;

- (id)_metadataDictForAssetCollection:(id)arg1 outError:(id *)arg2;

- (id)_missingAssetFieldErrorWithFieldName:(id)arg1;

- (void)_resetConnectionVariables;

- (void)abort;

- (void)dealloc;

- (id)delegate;

- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;

- (void)sendMetadataForAssetCollections:(id)arg1;

- (void)sendUploadCompleteForAssetCollections:(id)arg1;

- (void)setDelegate:(id)arg1;



@end


