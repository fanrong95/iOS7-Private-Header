/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class GEOTileKeyList, GEOTileRequester;



__attribute__((visibility("hidden")))

@interface GEOTileServerLocalProxyBatchContext : NSObject

{

    GEOTileKeyList *_fullList;

    GEOTileKeyList *_interestList;

    GEOTileKeyList *_networkList;

    GEOTileKeyList *_pendingNetworkList;

    GEOTileRequester *_tileRequester;

}



- (void)dealloc;

@property(retain, nonatomic) GEOTileKeyList *fullList; // @synthesize fullList=_fullList;

@property(retain, nonatomic) GEOTileKeyList *interestList; // @synthesize interestList=_interestList;

@property(retain, nonatomic) GEOTileKeyList *networkList; // @synthesize networkList=_networkList;

@property(retain, nonatomic) GEOTileKeyList *pendingNetworkList; // @synthesize pendingNetworkList=_pendingNetworkList;

@property(retain, nonatomic) GEOTileRequester *tileRequester; // @synthesize tileRequester=_tileRequester;



@end

