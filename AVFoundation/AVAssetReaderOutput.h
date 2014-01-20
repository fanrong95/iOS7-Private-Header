/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class AVAssetReaderOutputInternal, AVWeakReference, NSDictionary, NSString;



@interface AVAssetReaderOutput : NSObject

{

    AVAssetReaderOutputInternal *_internal;

}



+ (void)initialize;

- (id)_asset;

- (void)_attachToWeakReferenceToAssetReader:(id)arg1;

- (void)_cancelReading;

- (_Bool)_enableTrackExtractionReturningError:(id *)arg1;

- (id)_errorForOSStatus:(int)arg1;

@property(nonatomic, getter=_extractionID, setter=_setExtractionID:) int extractionID;

- (struct OpaqueFigAssetReader *)_figAssetReader;

- (void)_figAssetReaderDecodeError;

@property(readonly, nonatomic, getter=_figAssetReaderExtractionOptions) NSDictionary *figAssetReaderExtractionOptions;

- (void)_figAssetReaderFailed;

- (void)_figAssetReaderSampleBufferDidBecomeAvailableForExtractionID:(int)arg1;

- (_Bool)_isFinished;

- (void)_markAsFinished;

- (_Bool)_prepareForReadingReturningError:(id *)arg1;

- (void)_setFigAssetReader:(struct OpaqueFigAssetReader *)arg1;

@property(readonly, getter=_status) long long status;

@property(readonly, nonatomic, getter=_trimsSampleDurations) _Bool trimsSampleDurations;

@property(readonly, nonatomic, getter=_weakReferenceToAssetReader) AVWeakReference *weakReferenceToAssetReader;

@property(nonatomic) _Bool alwaysCopiesSampleData;

- (struct opaqueCMSampleBuffer *)copyNextSampleBuffer;

- (void)dealloc;

- (void)finalize;

- (id)init;

@property(readonly, nonatomic) NSString *mediaType;



@end


