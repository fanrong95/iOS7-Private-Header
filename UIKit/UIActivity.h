/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface UIActivity : NSObject

{

    id _activityCompletionHandler;

}



+ (id)_activityFunctionImage:(id)arg1;

+ (id)_activityGenericImage:(id)arg1;

+ (id)_activityImageForApplication:(id)arg1;

+ (long long)activityCategory;

- (id)_activityImage;

- (id)_attachmentNameForActivityItem:(id)arg1;

- (id)_beforeActivity;

- (_Bool)_canPerformWithSuppliedActivityItems:(id)arg1;

- (void)_cleanup;

- (id)_dataTypeIdentifierForActivityItem:(id)arg1;

- (_Bool)_dismissActivityFromViewController:(id)arg1 animated:(_Bool)arg2 completion:(id)arg3;

- (id)_embeddedActivityViewController;

- (_Bool)_presentActivityOnViewController:(id)arg1 animated:(_Bool)arg2 completion:(id)arg3;

- (void)_setActivityCompletionHandler:(id)arg1;

- (void)_setSubject:(id)arg1;

- (id)_subjectForActivityItem:(id)arg1;

- (id)_thumbnailImageForActivityItem:(id)arg1;

- (struct CGSize)_thumbnailSize;

- (void)_willPresentAsFormSheet;

@property(copy, nonatomic) id activityCompletionHandler; // @synthesize activityCompletionHandler=_activityCompletionHandler;

- (void)activityDidFinish:(_Bool)arg1;

- (id)activityImage;

- (id)activityTitle;

- (id)activityType;

- (id)activityViewController;

- (_Bool)canPerformWithActivityItems:(id)arg1;

- (void)dealloc;

- (void)performActivity;

- (void)prepareWithActivityItems:(id)arg1;



@end


