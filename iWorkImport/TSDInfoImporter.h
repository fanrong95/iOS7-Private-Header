/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSError, NSURL, TSDDrawableInfo, TSPData, TSPObjectContext, TSSTheme, TSUProgress;



__attribute__((visibility("hidden")))

@interface TSDInfoImporter : NSObject

{

    TSPObjectContext *mContext;

    NSURL *mURL;

    TSPData *mImageData;

    TSSTheme *mTheme;

    id <TSDInfoImporterDelegate> mDelegate;

}



+ (id)allocWithZone:(struct _NSZone *)arg1;

+ (id)i_supportedFileTypesForSubclass;

+ (Class)p_classForTSPData:(id)arg1;

+ (Class)p_classForURL:(id)arg1;

+ (id)p_registeredSubclasses;

+ (id)supportedFileTypes;

+ (id)supportedImageFileTypes;

+ (id)supportedRemoteURLSchemes;

@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=mURL;

- (void)cancel;

@property(readonly, nonatomic) TSPObjectContext *context; // @synthesize context=mContext;

- (void)dealloc;

@property(nonatomic) id <TSDInfoImporterDelegate> delegate; // @synthesize delegate=mDelegate;

@property(readonly, nonatomic) NSError *error;

@property(readonly, nonatomic) TSPData *imageData; // @synthesize imageData=mImageData;

- (void)importInfoWithCompletionHandler:(id)arg1;

@property(readonly, nonatomic) TSDDrawableInfo *info;

- (id)init;

- (id)initWithContext:(id)arg1 URL:(id)arg2 theme:(id)arg3;

- (id)initWithContext:(id)arg1 imageData:(id)arg2 theme:(id)arg3;

@property(readonly, nonatomic) TSUProgress *progress;

@property(readonly, nonatomic) TSSTheme *theme; // @synthesize theme=mTheme;



@end


