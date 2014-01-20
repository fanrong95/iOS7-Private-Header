/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SUDefaultDownloadPolicy.h"


@interface SUManualDownloadPolicy : SUDefaultDownloadPolicy

{

    _Bool _downloadFreeForCellular;

    _Bool _downloadAllowableForCellular;

    _Bool _downloadAllowableForCellular2G;

    _Bool _downloadAllowableForCellularRoaming;

    _Bool _downloadAllowableForWiFi;

    _Bool _autoDownloadAllowableForCellular;

    _Bool _hasEnoughDiskSpace;

    _Bool _powerRequired;

    _Bool _downloadable;

    Class _fakeClass;

}



- (Class)class;

@property(retain, nonatomic) Class fakeClass; // @synthesize fakeClass=_fakeClass;

@property(nonatomic, getter=hasEnoughDiskSpace) _Bool hasEnoughDiskSpace; // @synthesize hasEnoughDiskSpace=_hasEnoughDiskSpace;

- (id)init;

@property(nonatomic, getter=isDownloadAllowableForCellular) _Bool downloadAllowableForCellular; // @synthesize downloadAllowableForCellular=_downloadAllowableForCellular;

@property(nonatomic, getter=isDownloadAllowableForCellular2G) _Bool downloadAllowableForCellular2G; // @synthesize downloadAllowableForCellular2G=_downloadAllowableForCellular2G;

@property(nonatomic, getter=isDownloadAllowableForCellularRoaming) _Bool downloadAllowableForCellularRoaming; // @synthesize downloadAllowableForCellularRoaming=_downloadAllowableForCellularRoaming;

@property(nonatomic, getter=isDownloadAllowableForWiFi) _Bool downloadAllowableForWiFi; // @synthesize downloadAllowableForWiFi=_downloadAllowableForWiFi;

@property(nonatomic, getter=isDownloadFreeForCellular) _Bool downloadFreeForCellular; // @synthesize downloadFreeForCellular=_downloadFreeForCellular;

@property(nonatomic, getter=isDownloadable) _Bool downloadable; // @synthesize downloadable=_downloadable;

@property(nonatomic, getter=isPowerRequired) _Bool powerRequired; // @synthesize powerRequired=_powerRequired;

- (_Bool)superIsDownloadable;



@end


