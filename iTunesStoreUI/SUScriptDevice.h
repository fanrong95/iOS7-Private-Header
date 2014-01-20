/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SUScriptObject.h"


@class NSArray, NSMutableArray, NSNumber, NSString;



@interface SUScriptDevice : SUScriptObject

{

    NSMutableArray *_scriptFunctions;

}



+ (void)initialize;

+ (id)webScriptNameForKeyName:(id)arg1;

+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)UTIForURL:(id)arg1;

@property(readonly) NSString *UTIImage;

@property(readonly) NSString *UTIMovie;

@property(readonly) NSString *UTIText;

- (void)_addScriptFunction:(id)arg1;

- (void)_autoDownloadKindsChangedNotification:(id)arg1;

- (id)_className;

- (long long)_deviceCapabilityForString:(id)arg1;

- (void)_removeScriptFunction:(id)arg1;

@property(readonly) long long activeNetworkType;

- (id)applicationsForUTI:(id)arg1;

- (id)attributeKeys;

@property(readonly) NSArray *automaticDownloadMediaTypes;

- (long long)boolValueForRestriction:(id)arg1;

@property(readonly) NSString *capabilityNameEmail;

@property(readonly) NSString *capabilityNameExplicitMedia;

@property(readonly) NSString *capabilityNameHDVideo;

@property(readonly) NSString *capabilityNameHDVideo1080p;

@property(readonly) NSString *capabilityNameHDVideo720p;

@property(readonly) NSString *capabilityNamePodcasts;

@property(readonly) NSString *capabilityNameWiFi;

- (id)checkCapabilitiesPropertyListString:(id)arg1 showFailureDialog:(_Bool)arg2;

- (void)dealloc;

@property(readonly) unsigned int deviceTypeIdentifier;

@property(readonly) NSNumber *diskSpaceAvailable;

@property(readonly) long long freeSpaceEffortLevelAutomaticOnly;

@property(readonly) long long freeSpaceEffortLevelDoNothing;

@property(readonly) long long freeSpaceEffortLevelManualSpaceManagement;

@property(readonly) long long freeSpaceEffortLevelPromptUser;

@property(readonly) NSString *freeSpaceOptionEffortLevel;

@property(readonly) long long hardwareType;

@property(readonly) long long hardwareTypeAppleTVJ33;

@property(readonly) long long hardwareTypeAppleTVK66;

@property(readonly) long long hardwareTypeIPadJ1;

@property(readonly) long long hardwareTypeIPadJ2;

@property(readonly) long long hardwareTypeIPadJ2a;

@property(readonly) long long hardwareTypeIPadK93;

@property(readonly) long long hardwareTypeIPadK93a;

@property(readonly) long long hardwareTypeIPadK94;

@property(readonly) long long hardwareTypeIPadK95;

@property(readonly) long long hardwareTypeIPhoneM68;

@property(readonly) long long hardwareTypeIPhoneN82;

@property(readonly) long long hardwareTypeIPhoneN88;

@property(readonly) long long hardwareTypeIPhoneN90;

@property(readonly) long long hardwareTypeIPhoneN92;

@property(readonly) long long hardwareTypeIPhoneN94;

@property(readonly) long long hardwareTypeIPodTouchN18;

@property(readonly) long long hardwareTypeIPodTouchN45;

@property(readonly) long long hardwareTypeIPodTouchN72;

@property(readonly) long long hardwareTypeIPodTouchN81;

@property(readonly) long long hardwareTypeIPodTouchN81a;

@property(readonly) long long hardwareTypeUnknown;

@property(readonly) long long hardwareTypeWildcatK48;

- (id)hasCapability:(id)arg1;

- (id)init;

@property(readonly) NSNumber *mainScreenScale;

@property(readonly) long long networkType2G;

@property(readonly) long long networkType3G;

@property(readonly) long long networkType4G;

@property(readonly) long long networkType5G;

@property(readonly) long long networkType6G;

@property(readonly) long long networkType7G;

@property(readonly) long long networkType8G;

@property(readonly) long long networkType9G;

@property(readonly) long long networkTypeNone;

@property(readonly) long long networkTypeWiFi;

@property(readonly) NSString *orientationStringLandscapeLeft;

@property(readonly) NSString *orientationStringLandscapeRight;

@property(readonly) NSString *orientationStringPortrait;

@property(readonly) NSString *orientationStringPortraitUpsideDown;

- (void)requestFreeSpaceWithBytes:(id)arg1 options:(id)arg2 completionHandler:(id)arg3;

@property(readonly) NSString *restrictionAccountModificationAllowed;

@property(readonly) NSString *restrictionAllowGlobalBackgroundFetchWhenRoaming;

@property(readonly) NSString *restrictionAllowVoiceDialing;

@property(readonly) NSString *restrictionAppInstallationAllowed;

@property(readonly) NSString *restrictionAppRemovalAllowed;

@property(readonly) NSString *restrictionBookStoreAllowed;

@property(readonly) NSString *restrictionBookStoreEroticaAllowed;

@property(readonly) long long restrictionBoolNo;

@property(readonly) long long restrictionBoolNoData;

@property(readonly) long long restrictionBoolYes;

@property(readonly) NSString *restrictionCameraAllowed;

@property(readonly) NSString *restrictionCellularHDUploadsAllowed;

@property(readonly) NSString *restrictionITunesAllowed;

@property(readonly) NSString *restrictionITunesSocialAllowed;

- (id)restrictionLevelForType:(id)arg1;

@property(readonly) NSString *restrictionMultiplayerGamingAllowed;

@property(readonly) NSString *restrictionSafariAllowed;

@property(readonly) NSString *restrictionScreenShotAllowed;

@property(readonly) NSString *restrictionTypeApplications;

@property(readonly) NSString *restrictionTypeMovies;

@property(readonly) NSString *restrictionTypeTelevision;

@property(readonly) NSString *restrictionVideoConferencingAllowed;

@property(readonly) NSString *restrictionYouTubeAllowed;

- (id)scriptAttributeKeys;

- (void)setAutomaticDownloadKinds:(id)arg1 withCompletionHandler:(id)arg2;

- (id)valueForRestriction:(id)arg1;



@end


