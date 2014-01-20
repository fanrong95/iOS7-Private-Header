/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class CoreDAVResourceTypeItem, CoreDAVSupportedReportSetItem, NSDictionary, NSSet, NSString, NSURL;



@interface CoreDAVContainer : NSObject

{

    _Bool _isUnauthenticated;

    NSURL *_url;

    CoreDAVResourceTypeItem *_resourceType;

    NSString *_containerTitle;

    NSSet *_privileges;

    NSString *_pushKey;

    NSDictionary *_pushTransports;

    NSURL *_resourceID;

    CoreDAVSupportedReportSetItem *_supportedReportSetItem;

    NSString *_quotaAvailable;

    NSString *_quotaUsed;

    NSURL *_owner;

    NSURL *_addMemberURL;

    NSDictionary *_bulkRequests;

    NSString *_syncToken;

}



+ (id)convertPushTransportsForNSServerNotificationCenter:(id)arg1;

+ (id)copyPropertyMappingsForParser;

- (_Bool)_anyPrivilegesMatches:(id)arg1;

@property(retain) NSURL *addMemberURL; // @synthesize addMemberURL=_addMemberURL;

- (void)applyParsedProperties:(id)arg1;

@property(retain) NSDictionary *bulkRequests; // @synthesize bulkRequests=_bulkRequests;

@property(retain) NSString *containerTitle; // @synthesize containerTitle=_containerTitle;

- (void)dealloc;

- (id)description;

@property(readonly) _Bool hasBindPrivileges;

@property(readonly) _Bool hasReadPrivileges;

@property(readonly) _Bool hasWriteContentPrivileges;

@property(readonly) _Bool hasWritePropertiesPrivileges;

- (id)initWithURL:(id)arg1 andProperties:(id)arg2;

@property(readonly) _Bool isPrincipal;

@property _Bool isUnauthenticated; // @synthesize isUnauthenticated=_isUnauthenticated;

@property(retain) NSURL *owner; // @synthesize owner=_owner;

@property(retain) NSSet *privileges; // @synthesize privileges=_privileges;

@property(readonly) NSSet *privilegesAsStringSet;

@property(retain) NSString *pushKey; // @synthesize pushKey=_pushKey;

@property(retain) NSDictionary *pushTransports; // @synthesize pushTransports=_pushTransports;

@property(retain) NSString *quotaAvailable; // @synthesize quotaAvailable=_quotaAvailable;

@property(retain) NSString *quotaUsed; // @synthesize quotaUsed=_quotaUsed;

@property(retain) NSURL *resourceID; // @synthesize resourceID=_resourceID;

@property(retain) CoreDAVResourceTypeItem *resourceType; // @synthesize resourceType=_resourceType;

@property(readonly) NSSet *resourceTypeAsStringSet;

@property(retain) CoreDAVSupportedReportSetItem *supportedReportSetItem; // @synthesize supportedReportSetItem=_supportedReportSetItem;

@property(retain) NSString *syncToken; // @synthesize syncToken=_syncToken;

@property(retain) NSURL *url; // @synthesize url=_url;

@property(readonly) NSSet *supportedReports;

@property(readonly) NSSet *supportedReportsAsStringSet;

@property(readonly) _Bool supportsPrincipalPropertySearchReport;

@property(readonly) _Bool supportsSyncCollectionReport;



@end


