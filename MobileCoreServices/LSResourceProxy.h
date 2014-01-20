/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class LSApplicationProxy, NSArray, NSDictionary, NSString, NSURL;



@interface LSResourceProxy : NSObject

{

    NSString *_localizedName;

    NSString *_boundApplicationIdentifier;

    NSURL *_boundContainerURL;

    NSURL *_boundResourcesDirURL;

    NSDictionary *_boundIconsDictionary;

    NSString *_boundIconCacheKey;

    NSArray *_boundIconFileNames;

    LSApplicationProxy *_typeOwner;

    _Bool _boundIconIsPrerendered;

    _Bool _boundIconIsBadge;

}



- (id)_initWithLocalizedName:(id)arg1;

- (id)_initWithLocalizedName:(id)arg1 boundApplicationIdentifier:(id)arg2 boundContainerURL:(id)arg3 boundResourcesDirectoryURL:(id)arg4 boundIconsDictionary:(id)arg5 boundIconCacheKey:(id)arg6 boundIconFileNames:(id)arg7 typeOwner:(id)arg8 boundIconIsPrerendered:(_Bool)arg9 boundIconIsBadge:(_Bool)arg10;

- (id)boundApplicationIdentifier;

- (id)boundContainerURL;

- (id)boundIconCacheKey;

- (id)boundIconFileNames;

@property(readonly, nonatomic) _Bool boundIconIsBadge;

- (_Bool)boundIconIsPrerendered;

- (id)boundIconsDictionary;

- (id)boundResourcesDirectoryURL;

- (void)dealloc;

- (id)iconDataForStyle:(id)arg1 width:(long long)arg2 height:(long long)arg3 options:(unsigned long long)arg4;

- (id)iconDataForVariant:(int)arg1;

- (id)iconStyleDomain;

@property(readonly, nonatomic) NSDictionary *iconsDictionary;

@property(readonly, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;

- (void)setBoundApplicationIdentifier:(id)arg1;

- (void)setBoundContainerURL:(id)arg1;

- (void)setBoundIconCacheKey:(id)arg1;

- (void)setBoundIconFileNames:(id)arg1;

- (void)setBoundIconIsBadge:(_Bool)arg1;

- (void)setBoundIconIsPrerendered:(_Bool)arg1;

- (void)setBoundIconsDictionary:(id)arg1;

- (void)setBoundResourcesDirectoryURL:(id)arg1;

- (void)setLocalizedName:(id)arg1;

- (void)setTypeOwner:(id)arg1;

- (id)typeOwner;



@end


