/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class AVAssetResourceLoadingContentInformationRequestInternal, NSString;



@interface AVAssetResourceLoadingContentInformationRequest : NSObject

{

    AVAssetResourceLoadingContentInformationRequestInternal *_contentInformationRequest;

}



@property(nonatomic) long long contentLength;

@property(copy, nonatomic) NSString *contentType;

- (void)dealloc;

- (id)description;

- (void)finalize;

- (id)init;

@property(nonatomic, getter=isByteRangeAccessSupported) _Bool byteRangeAccessSupported;

- (_Bool)isDiskCachingPermitted;

- (id)propertyList;

- (void)setDiskCachingPermitted:(_Bool)arg1;



@end

